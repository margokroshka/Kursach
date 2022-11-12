/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *label_3;
    QLabel *label;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(437, 404);
        Form->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 233, 233);"));
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 170, 411, 91));
        label_3->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color:rgb(255, 233, 233);\n"
"background-color:rgb(237, 53, 114);\n"
"border-radius: 20px;"));
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 10, 161, 121));
        label->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Segoe UI\";\n"
"color:rgb(237, 53, 114);"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Form", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202  \321\200\320\260\320\262\320\265\320\275", nullptr));
        label->setText(QCoreApplication::translate("Form", "       \320\236\320\261\321\211\320\260\321\217\n"
" \320\272\320\260\320\273\320\276\321\200\320\270\320\271\320\275\320\276\321\201\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
