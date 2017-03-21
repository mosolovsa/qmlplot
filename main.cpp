#include <QtPrintSupport/QPrinter>
//#include <QGuiApplication>
#include<QApplication>
#include <QQmlApplicationEngine>

#include "qmlplot.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//    QGuiApplication app(argc, argv);

    qmlRegisterType<CustomPlotItem>("CustomPlot", 1, 0, "CustomPlotItem");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return a.exec();
}
