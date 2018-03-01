#include "mainwindow.h"
#include <QApplication>

#ifdef Q_OS_WIN
    #ifdef main
        #undef main
    #endif
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
