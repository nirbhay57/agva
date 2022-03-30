#include "dialog.h"
#include "ui_dialog.h"
#include<QBuffer>
#include<QFileDialog>
int gl = 0;
Dialog::Dialog(QWidget *parent)
  : QDialog(parent), sharedMemory("QSharedMemoryExample"), ui(new Ui::Dialog )   {                               //, ui(new Ui::MainWindow)

    ui->setupUi(this);


    int i = 0;
    QString s = QString::number(gl);
    ui->label->setText(s);


    connect(ui->loadFromFileButton, &QPushButton::clicked, this, &Dialog::loadFromFile);
    connect(ui->loadFromSharedMemoryButton, &QPushButton::clicked, this, &Dialog::loadFromMemory);
    timer = new QTimer(this);
    //connect(timer, SIGNAL(timeout()), this, SLOT(loadFromMemory()));
    timer->start(1000);
    setWindowTitle(tr("SharedMemory1 Example"));
    //ui->pushButton;
}



void Dialog::loadFromFile() {
    if (sharedMemory.isAttached())
        sharedMemory.detach();

    ui->label->setText(tr("Select an image file"));
//    QString fileName = QFileDialog::getOpenFileName(0, QString(), QString(), tr("Images (*.png *.xpm *.jpg *.jpeg)"));
//    QImage image;
//    if (!image.load(fileName)) {
//        ui->label->setText(tr("Selected file is not an image, please select another."));
//        return;
//    }
//    ui->label->setPixmap(QPixmap::fromImage(image));



    //my addendum
    gl++;
    QString s1 = QString::number(gl);
    ui->label->setText(s1);





    // load into shared memory
    QBuffer buffer;
    buffer.open(QBuffer::ReadWrite);
    QDataStream out(&buffer);
    QString s = QString::number(gl);
    out << s;
    int size = buffer.size();

    if (!sharedMemory.create(size)) {
        ui->label->setText(tr("Unable to create shared memory segment."));
        return;
    }
    sharedMemory.lock();
    char *to = (char*)sharedMemory.data();
    const char *from = buffer.data().data();
    memcpy(to, from, qMin(sharedMemory.size(), size));
    sharedMemory.unlock();
}




void Dialog::loadFromMemory() {
    if (!sharedMemory.attach()) {
        ui->label->setText(tr("Unable to attach to shared memory segment.\n" \
                             "Load an image first."));
        return;
    }

    QBuffer buffer;
    QDataStream in(&buffer);
    QImage image;

    sharedMemory.lock();
    buffer.setData((char*)sharedMemory.constData(), sharedMemory.size());
    buffer.open(QBuffer::ReadOnly);
    in >> image;
    sharedMemory.unlock();

    sharedMemory.detach();
    ui->label->setPixmap(QPixmap::fromImage(image));
}




Dialog::~Dialog() {
    delete ui;
}
