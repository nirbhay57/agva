#include "setparameter.h"
#include "ui_setparameter.h"



SetParameter::SetParameter(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::SetParameter)
{
	ui->setupUi(this);


}

SetParameter::SetParameter(const QString& title, const QString& value, const QString& unit,QWidget *parent) : SetParameter(parent){
	setTitle(title);
	setValue(value);
	setUnit(unit);
}


void SetParameter::setTitle(const QString & title){
	ui->label->setText(title);
}

void SetParameter::setValue(const QString & value){
	ui->label_2->setText(value);
}

void SetParameter::setUnit(const QString & unit){
	ui->label_3->setText(unit);
}

SetParameter::~SetParameter() {
	delete ui;
}


