/********************************************************************************
** Form generated from reading UI file 'volumechart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VOLUMECHART_H
#define UI_VOLUMECHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_volumeChart
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *container;
    QLabel *label1;

    void setupUi(QWidget *volumeChart)
    {
        if (volumeChart->objectName().isEmpty())
            volumeChart->setObjectName(QString::fromUtf8("volumeChart"));
        volumeChart->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(volumeChart);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        container = new QVBoxLayout();
        container->setObjectName(QString::fromUtf8("container"));
        label1 = new QLabel(volumeChart);
        label1->setObjectName(QString::fromUtf8("label1"));

        container->addWidget(label1);


        verticalLayout_2->addLayout(container);


        retranslateUi(volumeChart);

        QMetaObject::connectSlotsByName(volumeChart);
    } // setupUi

    void retranslateUi(QWidget *volumeChart)
    {
        volumeChart->setWindowTitle(QCoreApplication::translate("volumeChart", "Form", nullptr));
        label1->setText(QCoreApplication::translate("volumeChart", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class volumeChart: public Ui_volumeChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VOLUMECHART_H
