#include "clickable_widget.h"
#include<QMessageBox>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>
#include<QDebug>


QList<QSerialPortInfo> clickable_widget::port_list = QSerialPortInfo::availablePorts();
QSerialPort clickable_widget::serial(port_list[0]);
//= port_list[0];
using namespace std;
clickable_widget::clickable_widget( QWidget *parent): QWidget(parent) {


}//constructor ends


		//arduino ends



void clickable_widget::mousePressEvent(QMouseEvent* event){
	std::string str9 = "clicked widget";
	QString qstr = QString::fromStdString(str9);









}


clickable_widget::~clickable_widget()
{
	//serial.close();
}
