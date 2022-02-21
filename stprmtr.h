#ifndef STPRMTR_H
#define STPRMTR_H

#include <QWidget>

namespace Ui {
class stprmtr;
}

class stprmtr : public QWidget
{
	Q_OBJECT

public:
	explicit stprmtr(QWidget *parent = nullptr);
	~stprmtr();

private:
	Ui::stprmtr *ui;

};

#endif // STPRMTR_H
