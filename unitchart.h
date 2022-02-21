#ifndef UNITCHART_H
#define UNITCHART_H

#include <QWidget>

namespace Ui {
class UnitChart;
}

class UnitChart : public QWidget
{
	Q_OBJECT

public:
	explicit UnitChart(QWidget *parent = nullptr);
	~UnitChart();

private:
	Ui::UnitChart *ui;
};

#endif // UNITCHART_H
