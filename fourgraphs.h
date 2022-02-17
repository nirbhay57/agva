#ifndef FOURGRAPHS_H
#define FOURGRAPHS_H

#include <QWidget>

namespace Ui {
class FourGraphs;
}

class FourGraphs : public QWidget
{
	Q_OBJECT

public:
	explicit FourGraphs(QWidget *parent = nullptr);
	~FourGraphs();

private:
	Ui::FourGraphs *ui;
};

#endif // FOURGRAPHS_H
