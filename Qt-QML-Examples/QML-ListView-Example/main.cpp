#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "ListModel.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Register C ++ type to QML
    qmlRegisterType<ViewModels::ListModel>("ListModels", 0, 1, "ListModel");

    QQmlApplicationEngine engine;
    engine.addImportPath("qrc:/");
    engine.addImportPath("qml/Widgets/");

    const QUrl url("qrc:/main.qml");
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated, &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
