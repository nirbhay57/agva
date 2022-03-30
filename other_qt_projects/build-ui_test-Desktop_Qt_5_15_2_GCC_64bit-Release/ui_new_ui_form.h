/********************************************************************************
** Form generated from reading UI file 'new_ui_form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEW_UI_FORM_H
#define UI_NEW_UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_new_ui_form
{
public:

    void setupUi(QWidget *new_ui_form)
    {
        if (new_ui_form->objectName().isEmpty())
            new_ui_form->setObjectName(QString::fromUtf8("new_ui_form"));
        new_ui_form->resize(400, 300);

        retranslateUi(new_ui_form);

        QMetaObject::connectSlotsByName(new_ui_form);
    } // setupUi

    void retranslateUi(QWidget *new_ui_form)
    {
        new_ui_form->setWindowTitle(QCoreApplication::translate("new_ui_form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class new_ui_form: public Ui_new_ui_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEW_UI_FORM_H
