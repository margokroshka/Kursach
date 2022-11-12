/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QLabel *label;
    QLabel *label_3;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName("Form2");
        Form2->resize(434, 407);
        Form2->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 233, 233);"));
        label = new QLabel(Form2);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 0, 211, 131));
        label->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Segoe UI\";\n"
"color:rgb(237, 53, 114);"));
        label_3 = new QLabel(Form2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 170, 411, 91));
        label_3->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color:rgb(255, 233, 233);\n"
"background-color:rgb(237, 53, 114);\n"
"border-radius: 20px;"));

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QCoreApplication::translate("Form2", "Form", nullptr));
        label->setText(QCoreApplication::translate("Form2", "\320\236\320\261\321\211\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276\n"
"            \320\261\320\265\320\273\320\272\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("Form2", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 =", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
