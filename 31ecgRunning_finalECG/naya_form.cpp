#include<QLineSeries>
#include<QtCharts>

#include "naya_form.h"
#include "ui_naya_form.h"

naya_form::naya_form(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::naya_form)
{



	ui->setupUi(this);

	QPixmap dropdown(":/kajana/img/ic_up_arrow.png");
	auto imageClockResize = dropdown.scaled(28, 28, Qt::KeepAspectRatio);
	ui->label1->setPixmap(imageClockResize);


	createChart();

}

naya_form::~naya_form()
{
	delete ui;
}
void naya_form::createChart(){


	chart = new QChart();
	lowerSeries = new QLineSeries();
	upperSeries = new QLineSeries();

	 *lowerSeries << QPointF(1, 5) << QPointF(3, 7) << QPointF(7, 6) << QPointF(9, 7) << QPointF(12, 6)
				<< QPointF(16, 7) << QPointF(18, 5)  ;
	   *upperSeries << QPointF(1, 3) << QPointF(3, 4) << QPointF(7, 3) << QPointF(8, 2) << QPointF(12, 3)
				<< QPointF(16, 4) << QPointF(18, 3);

   //  QAreaSeries *series = new QAreaSeries(lowerSeries , upperSeries);

	 chart->legend()->hide();
	 chart->addSeries(lowerSeries);
	 chart->createDefaultAxes();


	 axisX = new QCategoryAxis();
	 axisY = new QCategoryAxis();

	 // Customize grid lines and shades
	   axisX->setGridLineVisible(false);
	   axisY->setGridLineVisible(false);
	   axisY->setShadesPen(Qt::NoPen);
	   axisY->setShadesBrush(QBrush(QColor(0x09, 0xac, 0xca, 0x88)));
	   axisY->setShadesVisible(true);

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
	 chartView->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

	 chart->axes(Qt::Vertical).first()->setGridLineVisible(false);
	 chart->axes(Qt::Horizontal).first()->setGridLineVisible(false);



	 ui->container->addWidget(chartView);

}
