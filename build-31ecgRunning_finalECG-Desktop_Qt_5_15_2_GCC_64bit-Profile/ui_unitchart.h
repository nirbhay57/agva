/********************************************************************************
** Form generated from reading UI file 'unitchart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNITCHART_H
#define UI_UNITCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnitChart
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *container;
    QLabel *label;

    void setupUi(QWidget *UnitChart)
    {
        if (UnitChart->objectName().isEmpty())
            UnitChart->setObjectName(QString::fromUtf8("UnitChart"));
        UnitChart->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(UnitChart);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        container = new QVBoxLayout();
        container->setObjectName(QString::fromUtf8("container"));
        label = new QLabel(UnitChart);
        label->setObjectName(QString::fromUtf8("label"));

        container->addWidget(label);


        verticalLayout_2->addLayout(container);


        retranslateUi(UnitChart);

        QMetaObject::connectSlotsByName(UnitChart);
    } // setupUi

    void retranslateUi(QWidget *UnitChart)
    {
        UnitChart->setWindowTitle(QCoreApplication::translate("UnitChart", "Form", nullptr));
        label->setText(QCoreApplication::translate("UnitChart", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnitChart: public Ui_UnitChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNITCHART_H
