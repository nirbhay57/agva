#include "mainwindow.h"

#include <QApplication>
#include <dialog.h>

int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
    Dialog dialog;
    dialog.show();
    return application.exec();
}
