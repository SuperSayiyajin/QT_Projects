
#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Variables - something that will change
    bool isOn = false;

    qInfo() << "is it on " << isOn;

    isOn = true;
    qInfo() << isOn;


    int age = 44;
        double height = 6.02;

        qInfo() << "Age: " << age;
        qInfo() << "Height: " << height;

        //Create a warning
        age = 44.90;
        qInfo() << "Age: " << age;

        signed int dogs = -1;
        qInfo() << "Dogs: " << dogs;
        dogs = 15;
        qInfo() << "Dogs: " << dogs;

        unsigned int cats = -1; // will cause an issue!!!
        qInfo() << "Cats: " << cats;
        cats = 15;
        qInfo() << "Cats: " << cats;

        qInfo() << sizeof (dogs);
        qInfo() << sizeof (cats);
        qInfo() << sizeof (height);
    return a.exec();
}
