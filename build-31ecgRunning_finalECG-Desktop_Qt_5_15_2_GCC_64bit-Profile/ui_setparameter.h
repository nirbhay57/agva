/********************************************************************************
** Form generated from reading UI file 'setparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPARAMETER_H
#define UI_SETPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetParameter
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QWidget *SetParameter)
    {
        if (SetParameter->objectName().isEmpty())
            SetParameter->setObjectName(QString::fromUtf8("SetParameter"));
        SetParameter->resize(101, 95);
        SetParameter->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54);\n"
""));
        verticalLayout = new QVBoxLayout(SetParameter);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(SetParameter);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("font-size:10px;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(SetParameter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        label_2 = new QLabel(SetParameter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font-size:10px;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(SetParameter);

        QMetaObject::connectSlotsByName(SetParameter);
    } // setupUi

    void retranslateUi(QWidget *SetParameter)
    {
        SetParameter->setWindowTitle(QCoreApplication::translate("SetParameter", "Form", nullptr));
        label->setText(QCoreApplication::translate("SetParameter", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("SetParameter", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("SetParameter", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetParameter: public Ui_SetParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPARAMETER_H
