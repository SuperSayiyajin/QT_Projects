#include <QCoreApplication>
#include <iostream>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age=8;
    qInfo("Enter your age:");
    getline(cin,age);
    qInfo() << age;

    return a.exec();
}
