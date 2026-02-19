/********************************************************************************
** Form generated from reading UI file 'alarmclock.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALARMCLOCK_H
#define UI_ALARMCLOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlarmClock
{
public:
    QWidget *centralwidget;
    QLabel *label_currentTime;
    QLabel *label_clockAlarm;
    QSpinBox *spinBox_hour;
    QSpinBox *spinBox_minute;
    QSpinBox *spinBox_second;
    QLineEdit *lineEdit_label;
    QCheckBox *checkBox_recurring;
    QPushButton *button_addAlarm;
    QListWidget *listWidget_alarms;
    QLabel *label_timer;
    QSpinBox *spinBox_timerMinute;
    QPushButton *button_startTimer;
    QPushButton *button_stopTimer;
    QPushButton *button_snooze;
    QPushButton *button_stopAlarm;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AlarmClock)
    {
        if (AlarmClock->objectName().isEmpty())
            AlarmClock->setObjectName("AlarmClock");
        AlarmClock->resize(650, 750);
        centralwidget = new QWidget(AlarmClock);
        centralwidget->setObjectName("centralwidget");
        label_currentTime = new QLabel(centralwidget);
        label_currentTime->setObjectName("label_currentTime");
        label_currentTime->setGeometry(QRect(100, 20, 450, 70));
        label_currentTime->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(32);
        font.setBold(true);
        label_currentTime->setFont(font);
        label_clockAlarm = new QLabel(centralwidget);
        label_clockAlarm->setObjectName("label_clockAlarm");
        label_clockAlarm->setGeometry(QRect(20, 120, 200, 30));
        spinBox_hour = new QSpinBox(centralwidget);
        spinBox_hour->setObjectName("spinBox_hour");
        spinBox_hour->setGeometry(QRect(20, 160, 90, 40));
        spinBox_hour->setMaximum(23);
        QFont font1;
        font1.setPointSize(12);
        spinBox_hour->setFont(font1);
        spinBox_minute = new QSpinBox(centralwidget);
        spinBox_minute->setObjectName("spinBox_minute");
        spinBox_minute->setGeometry(QRect(120, 160, 90, 40));
        spinBox_minute->setMaximum(59);
        spinBox_minute->setFont(font1);
        spinBox_second = new QSpinBox(centralwidget);
        spinBox_second->setObjectName("spinBox_second");
        spinBox_second->setGeometry(QRect(220, 160, 90, 40));
        spinBox_second->setMaximum(59);
        spinBox_second->setFont(font1);
        lineEdit_label = new QLineEdit(centralwidget);
        lineEdit_label->setObjectName("lineEdit_label");
        lineEdit_label->setGeometry(QRect(320, 160, 200, 40));
        checkBox_recurring = new QCheckBox(centralwidget);
        checkBox_recurring->setObjectName("checkBox_recurring");
        checkBox_recurring->setGeometry(QRect(530, 160, 100, 40));
        button_addAlarm = new QPushButton(centralwidget);
        button_addAlarm->setObjectName("button_addAlarm");
        button_addAlarm->setGeometry(QRect(530, 210, 100, 40));
        listWidget_alarms = new QListWidget(centralwidget);
        listWidget_alarms->setObjectName("listWidget_alarms");
        listWidget_alarms->setGeometry(QRect(20, 270, 610, 200));
        label_timer = new QLabel(centralwidget);
        label_timer->setObjectName("label_timer");
        label_timer->setGeometry(QRect(20, 500, 250, 40));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        label_timer->setFont(font2);
        spinBox_timerMinute = new QSpinBox(centralwidget);
        spinBox_timerMinute->setObjectName("spinBox_timerMinute");
        spinBox_timerMinute->setGeometry(QRect(300, 500, 90, 40));
        spinBox_timerMinute->setMaximum(180);
        button_startTimer = new QPushButton(centralwidget);
        button_startTimer->setObjectName("button_startTimer");
        button_startTimer->setGeometry(QRect(410, 500, 100, 40));
        button_stopTimer = new QPushButton(centralwidget);
        button_stopTimer->setObjectName("button_stopTimer");
        button_stopTimer->setGeometry(QRect(530, 500, 100, 40));
        button_snooze = new QPushButton(centralwidget);
        button_snooze->setObjectName("button_snooze");
        button_snooze->setGeometry(QRect(260, 680, 120, 40));
        button_snooze->setVisible(false);
        button_stopAlarm = new QPushButton(centralwidget);
        button_stopAlarm->setObjectName("button_stopAlarm");
        button_stopAlarm->setGeometry(QRect(400, 680, 120, 40));
        button_stopAlarm->setVisible(false);
        AlarmClock->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AlarmClock);
        menubar->setObjectName("menubar");
        AlarmClock->setMenuBar(menubar);
        statusbar = new QStatusBar(AlarmClock);
        statusbar->setObjectName("statusbar");
        AlarmClock->setStatusBar(statusbar);

        retranslateUi(AlarmClock);

        QMetaObject::connectSlotsByName(AlarmClock);
    } // setupUi

    void retranslateUi(QMainWindow *AlarmClock)
    {
        AlarmClock->setWindowTitle(QCoreApplication::translate("AlarmClock", "Smart Alarm Clock", nullptr));
        label_currentTime->setText(QCoreApplication::translate("AlarmClock", "00:00:00", nullptr));
        label_clockAlarm->setText(QCoreApplication::translate("AlarmClock", "Set Alarm:", nullptr));
        spinBox_hour->setPrefix(QCoreApplication::translate("AlarmClock", "HH:", nullptr));
        spinBox_minute->setPrefix(QCoreApplication::translate("AlarmClock", "MM:", nullptr));
        spinBox_second->setPrefix(QCoreApplication::translate("AlarmClock", "SS:", nullptr));
        lineEdit_label->setPlaceholderText(QCoreApplication::translate("AlarmClock", "Label", nullptr));
        checkBox_recurring->setText(QCoreApplication::translate("AlarmClock", "Recurring", nullptr));
        button_addAlarm->setText(QCoreApplication::translate("AlarmClock", "Add", nullptr));
        label_timer->setText(QCoreApplication::translate("AlarmClock", "Timer: 00:00", nullptr));
        spinBox_timerMinute->setPrefix(QCoreApplication::translate("AlarmClock", "Min:", nullptr));
        button_startTimer->setText(QCoreApplication::translate("AlarmClock", "Start", nullptr));
        button_stopTimer->setText(QCoreApplication::translate("AlarmClock", "Stop", nullptr));
        button_snooze->setText(QCoreApplication::translate("AlarmClock", "Snooze", nullptr));
        button_stopAlarm->setText(QCoreApplication::translate("AlarmClock", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AlarmClock: public Ui_AlarmClock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALARMCLOCK_H
