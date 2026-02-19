#include "alarmclock.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AlarmClock w;
    w.show();
    return a.exec();
}
