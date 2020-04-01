#ifndef TEST_H
#define TEST_H

#include <QObject>

class QPropertyTest : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString testString READ testString WRITE setTestString NOTIFY testStringChanged)

private:
    QString m_testString;

public:
    QPropertyTest(QObject *parent = nullptr);

QString testString();
QString setTestString(QString value);

signals:
    void testStringChanged(const QString value);

};

#endif // TEST_H
