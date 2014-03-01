#include <QtGui/QApplication>
#include <QtDeclarative/QDeclarativeView>
#include <QtDeclarative/QDeclarativeEngine>
#include <QDeclarativeContext>

#include "helper.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QDeclarativeView viewer;

    Helper helper;
    viewer.rootContext()->setContextProperty("Helper", &helper);

    viewer.setAttribute(Qt::WA_OpaquePaintEvent);
    viewer.setAttribute(Qt::WA_NoSystemBackground);
    viewer.viewport()->setAttribute(Qt::WA_OpaquePaintEvent);
    viewer.viewport()->setAttribute(Qt::WA_NoSystemBackground);

    viewer.setSource(QUrl(QLatin1String("qrc:/qml/main.qml")));
    viewer.showFullScreen();

    return app.exec();
}
