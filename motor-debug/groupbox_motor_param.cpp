#include "groupbox_motor_param.h"
#include "ui_groupbox_motor_param.h"

GroupBox::GroupBox(QWidget *parent) :
    QGroupBox(parent),
    ui(new Ui::GroupBox)
{
    ui->setupUi(this);
}

GroupBox::~GroupBox()
{
    delete ui;
}
