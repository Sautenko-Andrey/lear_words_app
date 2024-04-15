#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>

enum All_Modes{RUS_ENG, ENG_RUS, RUS_SWE, SWE_RUS};

QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();


private slots:
    void on_stats_button_clicked();
    void on_confirm_mode_clicked();


private:
    Ui::Dialog *ui;
    const QVector<QString> modes = {
        "rus - eng",
        "eng - rus",
        "rus - swe",
        "swe - rus"
    };

};

#endif // DIALOG_H
