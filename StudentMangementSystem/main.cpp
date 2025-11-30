#include <QApplication>
#include "mainwidget.h"

int main(int argc, char *argv[]) {
QApplication app(argc, argv);
MainWidget w;
w.setWindowTitle(QString("学生信息管理系统"));
w.show();
return app.exec();
}
