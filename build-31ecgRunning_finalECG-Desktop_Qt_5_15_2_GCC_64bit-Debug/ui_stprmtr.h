/********************************************************************************
** Form generated from reading UI file 'stprmtr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STPRMTR_H
#define UI_STPRMTR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stprmtr
{
public:

    void setupUi(QWidget *stprmtr)
    {
        if (stprmtr->objectName().isEmpty())
            stprmtr->setObjectName(QString::fromUtf8("stprmtr"));
        stprmtr->resize(400, 300);

        retranslateUi(stprmtr);

        QMetaObject::connectSlotsByName(stprmtr);
    } // setupUi

    void retranslateUi(QWidget *stprmtr)
    {
        stprmtr->setWindowTitle(QCoreApplication::translate("stprmtr", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stprmtr: public Ui_stprmtr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STPRMTR_H
