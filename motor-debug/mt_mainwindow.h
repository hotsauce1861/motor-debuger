#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "mt_serial.h"
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

private slots:
    void on_pushButton_Connect_clicked();

private:
    class GroupBox m_groupbox_param;
    class QSerialPort *mQSerialPort;
    class mt_serial mSerial;
    QList<QSerialPortInfo>  mListQSerialPortInfo;
    Ui::MainWindow *ui;
    void init_connect(void);
    void init_user_ui(void);
};

#endif // MAINWINDOW_H
