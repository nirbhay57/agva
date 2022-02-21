/********************************************************************************
** Form generated from reading UI file 'ecg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ECG_H
#define UI_ECG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ecg
{
public:
    QLabel *label;
    QLabel *label1;

    void setupUi(QWidget *ecg)
    {
        if (ecg->objectName().isEmpty())
            ecg->setObjectName(QString::fromUtf8("ecg"));
        ecg->resize(400, 300);
        label = new QLabel(ecg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 260, 58, 16));
        label1 = new QLabel(ecg);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(220, 260, 58, 16));

        retranslateUi(ecg);

        QMetaObject::connectSlotsByName(ecg);
    } // setupUi

    void retranslateUi(QWidget *ecg)
    {
        ecg->setWindowTitle(QCoreApplication::translate("ecg", "Form", nullptr));
        label->setText(QCoreApplication::translate("ecg", "TextLabel", nullptr));
        label1->setText(QCoreApplication::translate("ecg", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ecg: public Ui_ecg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ECG_H
