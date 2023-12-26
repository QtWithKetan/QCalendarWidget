#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Now Let's Use QCalendarWidget Control Function Like

    // set first day of week
    ui->calendarWidget->setFirstDayOfWeek(Qt::Wednesday);

    // hide week number of year
    ui->calendarWidget->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);

    // show week number of year
    ui->calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);

    // Thanks For watching video
    // Please drop your comment if you have any question.
}

MainWindow::~MainWindow()
{
    delete ui;
}

// By this event you can get selected data in calendar
void MainWindow::on_calendarWidget_clicked(const QDate &date)
{
    qDebug() << "Selected Date : " << date;
}

// By this event you can get selected year and month in calendar
void MainWindow::on_calendarWidget_currentPageChanged(int year, int month)
{
    qDebug() << "Selected Year : " << year;
    qDebug() << "Selected Month : " << month;
}

