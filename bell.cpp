#include "bell.h"
#include "ui_bell.h"

bell::bell(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::bell)
{
	ui->setupUi(this);

	QPixmap betri(":/kajana/img/ic_battery.png");
	auto imagedownArrowResize = betri.scaled(50, 50, Qt::KeepAspectRatio);
	ui->label->setPixmap(imagedownArrowResize);
}

bell::~bell()
{
	delete ui;
}
