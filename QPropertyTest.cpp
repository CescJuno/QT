#include "QPropertyTest.h"
#include <QDebug>

QPropertyTest::QPropertyTest(QObject *parent) : QObject(parent)
{
    m_testString = "";
}

QString QPropertyTest::testString(){
    m_testString = tr(QT_TR_NOOP(m_testString.toUtf8()));
    return m_testString;
}

QString QPropertyTest::setTestString(QString val){
    m_testString = tr(QT_TR_NOOP(val.toUtf8()));
    qDebug() << m_testString;
    //this->testStringChanged(m_testString);
    return m_testString;
}
