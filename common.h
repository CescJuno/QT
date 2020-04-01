#ifndef COMMON_H
#define COMMON_H

#include <QObject>

class Common : public QObject
{
    Q_OBJECT

public:
    explicit Common(QObject *parent = 0);

signals:
    void sendToQml(QString val);

public slots:
    void receiveFromQml(QString val);

};
#endif // COMMON_H
