#ifndef USERSTATS_H
#define USERSTATS_H

#include <QDialog>
#include "common.h"
#include "drawstatschart.h"
#include <memory>
#include "sizes.h"

namespace Ui {
class UserStats;
}

class UserStats : public QDialog
{
    Q_OBJECT

public:
    explicit UserStats(QWidget *parent = nullptr);
    ~UserStats();

private slots:
    void on_today_res_Button_clicked();

    void on_last_week_res_Button_clicked();

    void on_last_month_res_Button_clicked();

    void on_overall_res_Button_clicked();

private:
    Ui::UserStats *ui;

    OpenDB db;

    std::unique_ptr<DrawStatsChart> stats_chart;

    void createChart(statsMode mode);
};

#endif // USERSTATS_H
