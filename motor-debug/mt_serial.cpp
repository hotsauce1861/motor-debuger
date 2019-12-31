#include <QSerialPort>
#include "mt_serial.h"

mt_serial::mt_serial(QWidget *parent) : QWidget(parent)
{
    mQSerialPort = new QSerialPort(this);
    mListQSerialPortInfo = QSerialPortInfo::availablePorts();
}
