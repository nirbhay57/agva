#ifndef BELL_H
#define BELL_H

#include <QWidget>

namespace Ui {
class bell;
}

class bell : public QWidget
{
	Q_OBJECT

public:
	explicit bell(QWidget *parent = nullptr);
	~bell();

private:
	Ui::bell *ui;
};

#endif // BELL_H
