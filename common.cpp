#include "common.h"
#include <QDebug>

Common::Common(QObject *parent) :
               QObject(parent)
{
}

void Common::receiveFromQml(QString val) {
    qDebug() << "Received in C++ from QML:" << val;
    emit sendToQml(val);
}

