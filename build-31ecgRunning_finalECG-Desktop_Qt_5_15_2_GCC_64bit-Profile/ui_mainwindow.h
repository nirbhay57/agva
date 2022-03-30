/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <naya_form.h>
#include <volumechart.h>
#include "ecg.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_monitoring;
    QPushButton *pushButton_graphics;
    QPushButton *pushButton_system;
    QPushButton *pushButton_controls;
    QPushButton *pushButton_modes;
    QPushButton *pushButton_alarms;
    QPushButton *pushButton_limits;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLabel *label_7;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QStackedWidget *stackedWidget;
    naya_form *page;
    QLabel *label_3;
    QWidget *page_2;
    QLabel *label_4;
    volumeChart *page_3;
    QLabel *label_5;
    ecg *limits;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(668, 382);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:black;\n"
"font-size: 20pt;\n"
"    /*font-weight: bold;*/\n"
"    color: rgb(243, 243, 243);\n"
"/*margin:2;*/\n"
"    /*background-color:rgb(136, 138, 133)*/"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setStyleSheet(QString::fromUtf8("margin:0;"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, -1, 2);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(20);
        pushButton->setFont(font);
        pushButton->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 255);"));

        verticalLayout->addWidget(pushButton);

        pushButton_monitoring = new QPushButton(centralwidget);
        pushButton_monitoring->setObjectName(QString::fromUtf8("pushButton_monitoring"));
        sizePolicy1.setHeightForWidth(pushButton_monitoring->sizePolicy().hasHeightForWidth());
        pushButton_monitoring->setSizePolicy(sizePolicy1);
        pushButton_monitoring->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);"));

        verticalLayout->addWidget(pushButton_monitoring);

        pushButton_graphics = new QPushButton(centralwidget);
        pushButton_graphics->setObjectName(QString::fromUtf8("pushButton_graphics"));
        sizePolicy1.setHeightForWidth(pushButton_graphics->sizePolicy().hasHeightForWidth());
        pushButton_graphics->setSizePolicy(sizePolicy1);
        pushButton_graphics->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);"));

        verticalLayout->addWidget(pushButton_graphics);

        pushButton_system = new QPushButton(centralwidget);
        pushButton_system->setObjectName(QString::fromUtf8("pushButton_system"));
        sizePolicy1.setHeightForWidth(pushButton_system->sizePolicy().hasHeightForWidth());
        pushButton_system->setSizePolicy(sizePolicy1);
        pushButton_system->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);"));

        verticalLayout->addWidget(pushButton_system);

        pushButton_controls = new QPushButton(centralwidget);
        pushButton_controls->setObjectName(QString::fromUtf8("pushButton_controls"));
        sizePolicy1.setHeightForWidth(pushButton_controls->sizePolicy().hasHeightForWidth());
        pushButton_controls->setSizePolicy(sizePolicy1);
        pushButton_controls->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);"));

        verticalLayout->addWidget(pushButton_controls);

        pushButton_modes = new QPushButton(centralwidget);
        pushButton_modes->setObjectName(QString::fromUtf8("pushButton_modes"));
        sizePolicy1.setHeightForWidth(pushButton_modes->sizePolicy().hasHeightForWidth());
        pushButton_modes->setSizePolicy(sizePolicy1);
        pushButton_modes->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);"));

        verticalLayout->addWidget(pushButton_modes);

        pushButton_alarms = new QPushButton(centralwidget);
        pushButton_alarms->setObjectName(QString::fromUtf8("pushButton_alarms"));
        sizePolicy1.setHeightForWidth(pushButton_alarms->sizePolicy().hasHeightForWidth());
        pushButton_alarms->setSizePolicy(sizePolicy1);
        pushButton_alarms->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);"));

        verticalLayout->addWidget(pushButton_alarms);

        pushButton_limits = new QPushButton(centralwidget);
        pushButton_limits->setObjectName(QString::fromUtf8("pushButton_limits"));
        sizePolicy1.setHeightForWidth(pushButton_limits->sizePolicy().hasHeightForWidth());
        pushButton_limits->setSizePolicy(sizePolicy1);
        pushButton_limits->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);"));

        verticalLayout->addWidget(pushButton_limits);

        verticalLayout->setStretch(0, 10);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 10);
        verticalLayout->setStretch(3, 10);
        verticalLayout->setStretch(4, 10);
        verticalLayout->setStretch(5, 10);
        verticalLayout->setStretch(6, 10);
        verticalLayout->setStretch(7, 10);

        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size:17px;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_2->addWidget(label_7);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy1.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color:rgb(78, 154, 6);"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 3);

        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color:rgb(0, 0, 0);"));
        page = new naya_form();
        page->setObjectName(QString::fromUtf8("page"));
        page->setStyleSheet(QString::fromUtf8("background-color:rgb(136, 138, 133);"));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(190, 0, 121, 31));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(130, 0, 141, 71));
        stackedWidget->addWidget(page_2);
        page_3 = new volumeChart();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_5 = new QLabel(page_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(130, 20, 131, 31));
        stackedWidget->addWidget(page_3);
        limits = new ecg();
        limits->setObjectName(QString::fromUtf8("limits"));
        limits->setStyleSheet(QString::fromUtf8("background-color:black;"));
        stackedWidget->addWidget(limits);

        verticalLayout_2->addWidget(stackedWidget);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));

        horizontalLayout->addLayout(verticalLayout_7);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 20);
        horizontalLayout->setStretch(2, 3);

        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, 0, -1, -1);

        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(0, 16);
        verticalLayout_3->setStretch(1, 2);

        verticalLayout_4->addLayout(verticalLayout_3);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 668, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PC-SIMV", nullptr));
        pushButton_monitoring->setText(QCoreApplication::translate("MainWindow", "Monitoring123", nullptr));
        pushButton_graphics->setText(QCoreApplication::translate("MainWindow", "Graphics", nullptr));
        pushButton_system->setText(QCoreApplication::translate("MainWindow", "System", nullptr));
        pushButton_controls->setText(QCoreApplication::translate("MainWindow", "Controls", nullptr));
        pushButton_modes->setText(QCoreApplication::translate("MainWindow", "Modes", nullptr));
        pushButton_alarms->setText(QCoreApplication::translate("MainWindow", "Alarms", nullptr));
        pushButton_limits->setText(QCoreApplication::translate("MainWindow", "Limits", nullptr));
        label->setText(QString());
        label_7->setText(QString());
        label_2->setText(QString());
        pushButton_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "page_ui", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "page_2_ui", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "page_3_ui", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
