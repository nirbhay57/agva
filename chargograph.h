#ifndef CHARGOGRAPH_H
#define CHARGOGRAPH_H

#include <QWidget>

namespace Ui {
class CharGoGraph;
}

class CharGoGraph : public QWidget
{
	Q_OBJECT

public:
	explicit CharGoGraph(QWidget *parent = nullptr);
	~CharGoGraph();

private:
	Ui::CharGoGraph *ui;
};

#endif // CHARGOGRAPH_H
