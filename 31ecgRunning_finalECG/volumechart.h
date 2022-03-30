#ifndef VOLUMECHART_H
#define VOLUMECHART_H

#include <QWidget>
#include <QtCharts>

QT_CHARTS_BEGIN_NAMESPACE
class QChartView;
class QChart;
QT_CHARTS_END_NAMESPACE
using namespace QtCharts;

namespace Ui {
class volumeChart;
}

class volumeChart : public QWidget
{
	Q_OBJECT

public:
	explicit  volumeChart(QWidget *parent = nullptr);
	~volumeChart();
	void createAreaChart();

private:
	Ui::volumeChart *ui;
	QChart *chart;
	QSplineSeries *series;
	QChartView *chartView;
};

#endif // VOLUMECHART_H
