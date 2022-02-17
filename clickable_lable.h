#ifndef CLICKABLE_LABLE_H
#define CLICKABLE_LABLE_H
#include<QLabel>


class clickable_lable : public QLabel
{
public:
	clickable_lable();
	clickable_lable( QWidget *parent=0);
	void mousePressEvent(QMouseEvent* event) override;
};

#endif // CLICKABLE_LABLE_H






