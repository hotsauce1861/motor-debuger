#ifndef MT_SERIAL_H
#define MT_SERIAL_H

#include <QWidget>
#include <QSerialPort>
#include <QList>
#include <QSerialPortInfo>

class mt_serial : public QWidget
{
    Q_OBJECT
public:
    explicit mt_serial(QWidget *parent = nullptr);
    QList<QSerialPortInfo> getAvailablePorts();


private:
    class QSerialPort       *mQSerialPort;
    QList<QSerialPortInfo>  mListQSerialPortInfo;
signals:

public slots:
};

#endif // MT_SERIAL_H
