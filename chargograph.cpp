#include "chargograph.h"
#include "ui_chargograph.h"

CharGoGraph::CharGoGraph(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::CharGoGraph)
{
	ui->setupUi(this);
}

CharGoGraph::~CharGoGraph()
{
	delete ui;
}
