#ifndef ALARMCLOCK_H
#define ALARMCLOCK_H

#include <QMainWindow>
#include <QTimer>
#include "alarm_backend.h"

QT_BEGIN_NAMESPACE
namespace Ui { class AlarmClock; }
QT_END_NAMESPACE

class AlarmClock : public QMainWindow
{
    Q_OBJECT

public:
    AlarmClock(QWidget *parent = nullptr);
    ~AlarmClock();

private slots:
    void updateTime();
    void addAlarm();
    void onAlarmTriggered(QString label);

    void startTimer();
    void stopTimer();
    void updateCountdown();

    void snoozeAlarm();

private:
    Ui::AlarmClock *ui;

    QTimer clockTimer;
    QTimer countdownTimer;
    int remainingSeconds = 0;

    AlarmBackend backend;
};

#endif
