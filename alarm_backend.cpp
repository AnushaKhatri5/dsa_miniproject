#include "alarm_backend.h"

AlarmBackend::AlarmBackend(QObject *parent) : QObject(parent)
{
    connect(&timer, &QTimer::timeout,
            this, &AlarmBackend::checkAlarms);
    timer.start(1000); // check every second
}

void AlarmBackend::addAlarm(const Alarm &alarm)
{
    alarms.append(alarm);
}

void AlarmBackend::checkAlarms()
{
    QTime now = QTime::currentTime();

    for (int i = 0; i < alarms.size(); ++i)
    {
        if (alarms[i].time.hour() == now.hour() &&
            alarms[i].time.minute() == now.minute() &&
            alarms[i].time.second() == now.second())
        {
            currentAlarm = alarms[i];
            active = true;

            emit alarmTriggered(alarms[i].label);

            if (!alarms[i].recurring)
                alarms.removeAt(i);

            break;
        }
    }
}

void AlarmBackend::snoozeCurrent(int minutes)
{
    if (!active) return;

    Alarm snoozed;
    snoozed.time = QTime::currentTime().addSecs(minutes * 60);
    snoozed.label = currentAlarm.label + " (Snoozed)";
    snoozed.recurring = false;

    alarms.append(snoozed);
    active = false;
}
