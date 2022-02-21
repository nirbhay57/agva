#ifndef NAYA_FORM_H
#define NAYA_FORM_H

#include <QWidget>
#include <QtCharts>

namespace Ui {
class naya_form;
}

class naya_form : public QWidget
{
	Q_OBJECT

public:
	explicit naya_form(QWidget *parent = nullptr);
	void createChart();
	~naya_form();

private:
	Ui::naya_form *ui;

	QChart *chart;
	QLineSeries *lowerSeries;
	QLineSeries *upperSeries;
	QCategoryAxis *axisX;
	QCategoryAxis *axisY;
	QChartView *chartView;


};

#endif // NAYA_FORM_H
