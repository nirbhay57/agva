#include "stprmtr.h"
#include "ui_stprmtr.h"

stprmtr::stprmtr(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::stprmtr)
{
	ui->setupUi(this);
}

stprmtr::~stprmtr()
{
	delete ui;
}
