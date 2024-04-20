#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "usersession.h"
#include "addoneword.h"
#include <memory>
#include <unordered_map>
#include <string>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionStart_lesson_triggered();

    void on_actionAdd_word_triggered();

private:
    Ui::MainWindow *ui;

    std::unique_ptr<UserSession> user_session;

    std::unique_ptr<AddOneWord> add_one_word_session;

    //void read_data_from_DB();

};
#endif // MAINWINDOW_H