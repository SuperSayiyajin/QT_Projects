#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString myName= "Burak";
    qDebug() << "Helloooo " + myName ;

    return a.exec();
}
