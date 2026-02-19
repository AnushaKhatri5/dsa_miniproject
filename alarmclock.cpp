#include "alarmclock.h"
#include "ui_alarmclock.h"

#include <QTime>
#include <QMessageBox>

AlarmClock::AlarmClock(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::AlarmClock)
{
    ui->setupUi(this);


    connect(&clockTimer, &QTimer::timeout,
            this, &AlarmClock::updateTime);
    clockTimer.start(1000);


    connect(ui->button_addAlarm, &QPushButton::clicked,
            this, &AlarmClock::addAlarm);


    connect(&backend, &AlarmBackend::alarmTriggered,
            this, &AlarmClock::onAlarmTriggered);


    connect(ui->button_startTimer, &QPushButton::clicked,
            this, &AlarmClock::startTimer);

    connect(ui->button_stopTimer, &QPushButton::clicked,
            this, &AlarmClock::stopTimer);

    connect(&countdownTimer, &QTimer::timeout,
            this, &AlarmClock::updateCountdown);


    connect(ui->button_snooze, &QPushButton::clicked,
            this, &AlarmClock::snoozeAlarm);
}

AlarmClock::~AlarmClock()
{
    delete ui;
}

void AlarmClock::updateTime()
{
    ui->label_currentTime->setText(
        QTime::currentTime().toString("HH:mm:ss"));
}

void AlarmClock::addAlarm()
{
    Alarm alarm;
    alarm.time = QTime(
        ui->spinBox_hour->value(),
        ui->spinBox_minute->value(),
        ui->spinBox_second->value());

    alarm.label = ui->lineEdit_label->text();
    alarm.recurring = ui->checkBox_recurring->isChecked();

    backend.addAlarm(alarm);

    ui->listWidget_alarms->addItem(
        alarm.time.toString("HH:mm:ss") + " - " + alarm.label);
}

void AlarmClock::onAlarmTriggered(QString label)
{
    ui->button_snooze->setVisible(true);

    QMessageBox::information(this,
                             "Alarm",
                             "Alarm: " + label);
}

void AlarmClock::snoozeAlarm()
{
    backend.snoozeCurrent();
    ui->button_snooze->setVisible(false);
}

void AlarmClock::startTimer()
{
    remainingSeconds = ui->spinBox_timerMinute->value() * 60;
    countdownTimer.start(1000);
}

void AlarmClock::stopTimer()
{
    countdownTimer.stop();
}

void AlarmClock::updateCountdown()
{
    if (remainingSeconds <= 0)
    {
        countdownTimer.stop();

        QMessageBox::information(this,
                                 "Timer",
                                 "Time is up!");
        return;
    }

    remainingSeconds--;

    int min = remainingSeconds / 60;
    int sec = remainingSeconds % 60;

    ui->label_timer->setText(
        QString("Timer: %1:%2")
            .arg(min, 2, 10, QChar('0'))
            .arg(sec, 2, 10, QChar('0')));
}
