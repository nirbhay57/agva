/********************************************************************************
** Form generated from reading UI file 'naya_form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAYA_FORM_H
#define UI_NAYA_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_naya_form
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label1;
    QVBoxLayout *container;

    void setupUi(QWidget *naya_form)
    {
        if (naya_form->objectName().isEmpty())
            naya_form->setObjectName(QString::fromUtf8("naya_form"));
        naya_form->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(naya_form);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(naya_form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("background-color:red;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(naya_form);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_3);


        horizontalLayout_2->addLayout(horizontalLayout);

        label1 = new QLabel(naya_form);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label1);


        verticalLayout->addLayout(horizontalLayout_2);

        container = new QVBoxLayout();
        container->setObjectName(QString::fromUtf8("container"));

        verticalLayout->addLayout(container);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(naya_form);

        QMetaObject::connectSlotsByName(naya_form);
    } // setupUi

    void retranslateUi(QWidget *naya_form)
    {
        naya_form->setWindowTitle(QCoreApplication::translate("naya_form", "Form", nullptr));
        label->setText(QCoreApplication::translate("naya_form", "naya_form", nullptr));
        label_3->setText(QCoreApplication::translate("naya_form", "page -1", nullptr));
        label1->setText(QCoreApplication::translate("naya_form", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class naya_form: public Ui_naya_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAYA_FORM_H
