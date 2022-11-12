/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QLabel *label_3;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(641, 559);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 233, 233);\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 340, 281, 111));
        pushButton->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color:rgb(255, 233, 233);\n"
"background-color:rgb(237, 53, 114);\n"
"border-radius: 20px;\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 150, 171, 101));
        label->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Segoe UI\";\n"
"color:rgb(237, 53, 114);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, -10, 171, 61));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 italic 14pt \"Segoe UI\";\n"
"\n"
"color:rgb(237, 53, 114);"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(30, 260, 231, 71));
        textEdit->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(237, 53, 114);\n"
"font: 14pt \"Segoe UI\";"));
        textEdit_2 = new QTextEdit(centralwidget);
        textEdit_2->setObjectName("textEdit_2");
        textEdit_2->setGeometry(QRect(370, 260, 241, 71));
        textEdit_2->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(237, 53, 114);\n"
"font: 14pt \"Segoe UI\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(410, 180, 171, 71));
        label_3->setStyleSheet(QString::fromUtf8("font: italic 14pt \"Segoe UI\";\n"
"color:rgb(237, 53, 114);"));
        textEdit_3 = new QTextEdit(centralwidget);
        textEdit_3->setObjectName("textEdit_3");
        textEdit_3->setGeometry(QRect(200, 50, 201, 71));
        textEdit_3->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(237, 53, 114);\n"
"font: 14pt \"Segoe UI\";"));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(340, 340, 291, 111));
        pushButton_2->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(255, 255, 255);\n"
"font: 14pt \"Segoe UI\";\n"
"color:rgb(255, 233, 233);\n"
"background-color:rgb(237, 53, 114);\n"
"border-radius: 20px;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 641, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261\321\211\320\260\321\217 \320\272\320\260\320\273\320\273\320\276\321\200\320\270\320\271\320\275\320\276\321\201\321\202\321\214\n"
" \320\262\321\201\320\265\320\263\320\276 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\273\320\276\321\200\320\270\320\271\320\275\320\276\321\201\321\202\321\214 \n"
" 100\320\263 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\201 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260 ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273-\320\262\320\276 \320\261\320\265\320\273\320\272\320\276\320\262 \n"
"100\320\263 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\261\320\265\320\273\320\272\320\276\320\262\n"
" \320\262\321\201\320\265\320\263\320\276 \320\277\321\200\320\276\320\264\321\203\320\272\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
