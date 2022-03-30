#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QSharedMemory>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

  public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

  public slots:
    void loadFromFile();
    void loadFromMemory();

 private:
    void detach();

  private:
    Ui::Dialog *ui;
    QSharedMemory sharedMemory;
};

#endif // DIALOG_H
