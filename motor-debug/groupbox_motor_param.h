#ifndef GROUPBOX_MOTOR_PARAM_H
#define GROUPBOX_MOTOR_PARAM_H

#include <QGroupBox>

namespace Ui {
class GroupBox;
}

class GroupBox : public QGroupBox
{
    Q_OBJECT

public:
    explicit GroupBox(QWidget *parent = nullptr);
    ~GroupBox();

private:
    Ui::GroupBox *ui;
};

#endif // GROUPBOX_MOTOR_PARAM_H
