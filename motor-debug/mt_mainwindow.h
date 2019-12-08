#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//user inclue files
#include "groupbox_motor_param.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    class GroupBox m_groupbox_param;
    Ui::MainWindow *ui;
    void init_connect(void);
    void init_user_ui(void);
};

#endif // MAINWINDOW_H
