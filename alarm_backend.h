#ifndef ALARM_BACKEND_H
#define ALARM_BACKEND_H

#include <QObject>
#include <QTime>
#include <QTimer>

struct Alarm {
    QTime time;
    QString label;
    bool recurring;
};

class AlarmBackend : public QObject
{
    Q_OBJECT

public:
    explicit AlarmBackend(QObject *parent = nullptr);

    void addAlarm(const Alarm &alarm);
    void snoozeCurrent(int minutes = 5);

signals:
    void alarmTriggered(QString label);

private slots:
    void checkAlarms();

private:
    QList<Alarm> alarms;
    QTimer timer;
    Alarm currentAlarm;
    bool active = false;
};

#endif
