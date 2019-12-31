#include "mt_mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    init_connect();
    init_user_ui();
    mQSerialPort = new QSerialPort(this);
    mListQSerialPortInfo = QSerialPortInfo::availablePorts();
    class QComboBox *tQComboBox = nullptr;
    foreach (auto info, mListQSerialPortInfo) {

        for(int i = 0;i<this->ui->comboBox_Port->count(); i++){
            if(info.portName() == this->ui->comboBox_Port->itemText(i)){
                tQComboBox = this->ui->comboBox_Port;
                tQComboBox->setItemText(i,info.portName() + " " +info.description() );
#if 1
                qDebug() << "description()：" << info.description();
                qDebug() << "hasProductIdentifier(): " << info.hasProductIdentifier();
                qDebug() << "hasVendorIdentifier(): " << info.hasVendorIdentifier();
                qDebug() << "isBusy: " << info.isBusy();
                qDebug() << "manufacturer: " << info.manufacturer();
                qDebug() << "portName: " << info.portName();
                qDebug() << "productIdentifier: " << info.productIdentifier();
                qDebug() << "serialNumber: " << info.serialNumber();
                qDebug() << "vendorIdentifier: " << info.vendorIdentifier();
#endif
            }
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init_connect(void)
{

}

void MainWindow::init_user_ui(void)
{

}

void MainWindow::on_pushButton_Connect_clicked()
{
    const class QSerialPortInfo mQSerialPortInfo = mListQSerialPortInfo.at(0);
    mQSerialPort->setPortName("COM3");
    if(mQSerialPort->isOpen()){
        qDebug() << "mQSerialPort->isOpen()";
    }else{
        qDebug() << "ready to setup serial com port";
        mQSerialPort->open(QIODevice::ReadWrite);
        mQSerialPort->setBaudRate(115200);
        mQSerialPort->setParity(QSerialPort::NoParity);
        mQSerialPort->setDataBits(QSerialPort::Data8);
        mQSerialPort->setFlowControl(QSerialPort::NoFlowControl);
        mQSerialPort->setStopBits(QSerialPort::OneStop);
    }
}
