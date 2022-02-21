#include "unitchart.h"
#include "ui_unitchart.h"

UnitChart::UnitChart(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::UnitChart)
{
	ui->setupUi(this);
}

UnitChart::~UnitChart()
{
	delete ui;
}
