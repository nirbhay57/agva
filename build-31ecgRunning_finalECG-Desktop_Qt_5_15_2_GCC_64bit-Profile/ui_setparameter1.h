/********************************************************************************
** Form generated from reading UI file 'setparameter1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPARAMETER1_H
#define UI_SETPARAMETER1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetParameter1
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *container;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelUnit;
    QLabel *labelValue;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUpperLimitValue;
    QLabel *labelUpperLimitImage;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelDownLimitValue;
    QLabel *labelDownLimitImage;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelUnitValue;

    void setupUi(QWidget *SetParameter1)
    {
        if (SetParameter1->objectName().isEmpty())
            SetParameter1->setObjectName(QString::fromUtf8("SetParameter1"));
        SetParameter1->resize(443, 103);
        verticalLayout_2 = new QVBoxLayout(SetParameter1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 2, 0, 0);
        container = new QWidget(SetParameter1);
        container->setObjectName(QString::fromUtf8("container"));
        container->setStyleSheet(QString::fromUtf8("background-color:rgb(46, 52, 54)"));
        verticalLayout_3 = new QVBoxLayout(container);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelUnit = new QLabel(container);
        labelUnit->setObjectName(QString::fromUtf8("labelUnit"));
        labelUnit->setStyleSheet(QString::fromUtf8("font-size:10px;"));
        labelUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelUnit->setMargin(7);

        horizontalLayout->addWidget(labelUnit);

        labelValue = new QLabel(container);
        labelValue->setObjectName(QString::fromUtf8("labelValue"));
        labelValue->setStyleSheet(QString::fromUtf8("font-size:10px;"));
        labelValue->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        labelValue->setMargin(10);

        horizontalLayout->addWidget(labelValue);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelUpperLimitValue = new QLabel(container);
        labelUpperLimitValue->setObjectName(QString::fromUtf8("labelUpperLimitValue"));
        labelUpperLimitValue->setStyleSheet(QString::fromUtf8("font-size:9px;"));

        horizontalLayout_2->addWidget(labelUpperLimitValue);

        labelUpperLimitImage = new QLabel(container);
        labelUpperLimitImage->setObjectName(QString::fromUtf8("labelUpperLimitImage"));

        horizontalLayout_2->addWidget(labelUpperLimitImage);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelDownLimitValue = new QLabel(container);
        labelDownLimitValue->setObjectName(QString::fromUtf8("labelDownLimitValue"));
        labelDownLimitValue->setStyleSheet(QString::fromUtf8("font-size:9px;"));

        horizontalLayout_3->addWidget(labelDownLimitValue);

        labelDownLimitImage = new QLabel(container);
        labelDownLimitImage->setObjectName(QString::fromUtf8("labelDownLimitImage"));

        horizontalLayout_3->addWidget(labelDownLimitImage);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        labelUnitValue = new QLabel(container);
        labelUnitValue->setObjectName(QString::fromUtf8("labelUnitValue"));
        labelUnitValue->setAlignment(Qt::AlignRight|Qt::AlignTop|Qt::AlignTrailing);
        labelUnitValue->setMargin(10);

        horizontalLayout_4->addWidget(labelUnitValue);

        horizontalLayout_4->setStretch(0, 7);
        horizontalLayout_4->setStretch(1, 10);

        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(container);


        retranslateUi(SetParameter1);

        QMetaObject::connectSlotsByName(SetParameter1);
    } // setupUi

    void retranslateUi(QWidget *SetParameter1)
    {
        SetParameter1->setWindowTitle(QCoreApplication::translate("SetParameter1", "Form", nullptr));
        labelUnit->setText(QCoreApplication::translate("SetParameter1", "TextLabel", nullptr));
        labelValue->setText(QCoreApplication::translate("SetParameter1", "TextLabel", nullptr));
        labelUpperLimitValue->setText(QCoreApplication::translate("SetParameter1", "TextLabel", nullptr));
        labelUpperLimitImage->setText(QCoreApplication::translate("SetParameter1", "TextLabel", nullptr));
        labelDownLimitValue->setText(QCoreApplication::translate("SetParameter1", "TextLabel", nullptr));
        labelDownLimitImage->setText(QCoreApplication::translate("SetParameter1", "TextLabel", nullptr));
        labelUnitValue->setText(QCoreApplication::translate("SetParameter1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetParameter1: public Ui_SetParameter1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPARAMETER1_H
