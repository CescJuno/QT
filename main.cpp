
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QTranslator>
#include <QDebug>
#include <QObject>

#include "QPropertyTest.h"
#include "common.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QPropertyTest* propertyTest = new QPropertyTest;

    QTranslator translator;
    translator.load(":/stack_ko_KR.qm");
    app.installTranslator(&translator);
    QQmlApplicationEngine engine;

    //Common receiver;
    //QQmlContext* ctx = engine.rootContext();
    //ctx->setContextProperty("receiver", &receiver);

    engine.rootContext()->setContextProperty("propertyTest", propertyTest);
    engine.rootContext();
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
