/********************************************************************************
** Form generated from reading UI file 'mydialog1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDIALOG1_H
#define UI_MYDIALOG1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myDialog1
{
public:
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *myDialog1)
    {
        if (myDialog1->objectName().isEmpty())
            myDialog1->setObjectName(QString::fromUtf8("myDialog1"));
        myDialog1->resize(653, 408);
        plainTextEdit = new QPlainTextEdit(myDialog1);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(40, 170, 341, 211));
        pushButton = new QPushButton(myDialog1);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 250, 80, 26));

        retranslateUi(myDialog1);

        QMetaObject::connectSlotsByName(myDialog1);
    } // setupUi

    void retranslateUi(QDialog *myDialog1)
    {
        myDialog1->setWindowTitle(QCoreApplication::translate("myDialog1", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("myDialog1", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myDialog1: public Ui_myDialog1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDIALOG1_H
