#include "fourgraphs.h"
#include "ui_fourgraphs.h"

FourGraphs::FourGraphs(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::FourGraphs)
{
	ui->setupUi(this);
}

FourGraphs::~FourGraphs()
{
	delete ui;
}
