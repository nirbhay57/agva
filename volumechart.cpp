#include "volumechart.h"
#include "ui_volumechart.h"

#include <QLineSeries>

volumeChart::volumeChart(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::volumeChart)
{
	ui->setupUi(this);

	QPixmap dropdown(":/kajana/img/ic_up_arrow.png");
	auto imageClockResize = dropdown.scaled(28, 28, Qt::KeepAspectRatio);
	ui->label1->setPixmap(imageClockResize);

	 createAreaChart();

}

void volumeChart::createAreaChart(){

 chart = new QChart();

  series = new QSplineSeries();
  series->append(0, 6);
  series->append(2, 4);
  series->append(3, 8);
  series->append(7, 4);
  series->append(10, 5);
  series->append(1,2);
 // *series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6) << QPointF(18, 3) << QPointF(20, 2);

  chart->legend()->hide();
  chart->addSeries(series);
  chart->createDefaultAxes();
  chart->isBackgroundVisible();

  // Customize series
	 QPen pen(QRgb(0xfdb157));
	 pen.setWidth(2);
	 series->setPen(pen);



  QFont font;
  font.setPointSize(10);

  // Customize chart background
	 QLinearGradient backgroundGradient;
	 backgroundGradient.setStart(QPointF(0, 0));
	 backgroundGradient.setFinalStop(QPointF(0, 1));
	 backgroundGradient.setColorAt(0.0, QRgb(0x1a1a1a));
	 backgroundGradient.setColorAt(1.0, QRgb(0x1a1a1a));
	 backgroundGradient.setCoordinateMode(QGradient::ObjectBoundingMode);
	 chart->setBackgroundBrush(backgroundGradient);


  chartView = new QChartView(chart);
  chartView->setRenderHint(QPainter::Antialiasing);
  chart->axes(Qt::Vertical).first()->setGridLineVisible(false);
  chart->axes(Qt::Horizontal).first()->setGridLineVisible(false);

  ui->container->addWidget(chartView);

}


volumeChart::~volumeChart()
{
	delete ui;
}
