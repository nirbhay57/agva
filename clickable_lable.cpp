#include "clickable_lable.h"
#include<QMessageBox>
clickable_lable::clickable_lable()
{

}
clickable_lable::clickable_lable( QWidget *parent): QLabel(parent)
{

}
void clickable_lable::mousePressEvent(QMouseEvent* event){
	std::string str9 = "clicked widget";
	QString qstr = QString::fromStdString(str9);


	QMessageBox::about(this,"",qstr);


}


