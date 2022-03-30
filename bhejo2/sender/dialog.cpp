#include "dialog.h"
#include "ui_dialog.h"
#include<QBuffer>
#include<QFileDialog>
#include<QDebug>
int gl = 0; int *p;
Dialog::Dialog(QWidget *parent)
  : QDialog(parent), sharedMemory("QSharedMemoryExample"), ui(new Ui::Dialog )   {                               //, ui(new Ui::MainWindow)

    ui->setupUi(this);


    int i = 0;
    QString s = QString::number(gl);
    ui->label->setText(s);
    p = static_cast<int*>(sharedMemory.data());


    connect(ui->incr, &QPushButton::clicked, this, &Dialog::increment);



//    timer = new QTimer(this);
//    connect(timer, SIGNAL(timeout()), this, SLOT(loadFromMemory()));
//    timer->start(1000);

    setWindowTitle(tr("SENDER"));
    ui->label->setText(QString::number(gl));

    //ui->pushButton;
}



void Dialog::increment() {
    if (sharedMemory.isAttached())
        sharedMemory.detach();

    ui->label->setText(tr("Select an image file"));
//    QString fileName = QFileDialog::getOpenFileName(0, QString(), QString(), tr("Images (*.png *.xpm *.jpg *.jpeg)"));
//    QImage image;
//    if (!image.load(fileName)) {
//        ui->label->setText(tr("Selected file is not an image, please select another."));
//        return;
//    }
  //ui->label->setText(QString::number(gl));



    //my addendum
    gl++;
    QString s1 = QString::number(gl);
    ui->label->setText(s1);



//    struct SharedData {
//      double fourDoubles[4];
//      int andAnInt;
//    };
//    QSharedMemory shared_mem;
//    shared_mem.create(sizeof(SharedData));
//    SharedData* p = static_cast<SharedData*>(shared_mem.data());
//    p->fourDoubles[0] = 1.0;
//    p->andAnInt = 42;




    // load into shared memory
//    QBuffer buffer;
//    buffer.open(QBuffer::ReadWrite);
//    QDataStream out(&buffer);
//    QString s = QString::number(gl);
//    out << s;
//    int size = buffer.size();

    if (!sharedMemory.create(sizeof(int))) {
        ui->label->setText(tr("Unable to create shared memory segment calling from file."));
        return;
    }
    qDebug()<<"sharedmemory created";
    sharedMemory.lock();
//    char *to = (char*)sharedMemory.data();
//    const char *from = buffer.data().data();
//    memcpy(to, from, qMin(sharedMemory.size(), size));

    //int* p = static_cast<int*>(sharedMemory.data());
    (*p)++;

    sharedMemory.unlock();
}






Dialog::~Dialog() {
    delete ui;
}
