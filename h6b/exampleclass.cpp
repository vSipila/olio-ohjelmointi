#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent)
    : QObject(parent)
{
    qDebug() << "Start";

    // yhdistetään readyToSay-signaali sayHelloSlotiin
    connect(this, &ExampleClass::readyToSay,
            this, &ExampleClass::sayHelloSlot);

    qDebug() << "End";
}

void ExampleClass::startToWait()
{
    QThread::msleep(1000); // 1000 ms = 1 sekunti
    emit readyToSay();
}

void ExampleClass::sayHelloSlot()
{
    qDebug() << "Terve";
}
