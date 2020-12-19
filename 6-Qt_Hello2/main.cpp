#include <QCoreApplication>
#include "QDebug"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "Hello Burak";
    qInfo("İkinci stil");

    return a.exec();
}
