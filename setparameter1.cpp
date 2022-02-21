#include "setparameter1.h"
#include "ui_setparameter1.h"
#include<QMessageBox>
#include<QDebug>
#include<QTextCodec>
using namespace std;
int SetParameter1::ii = 0;
bool SetParameter1::object_created = false;

QList<QSerialPortInfo> SetParameter1::port_list = QSerialPortInfo::availablePorts();
<<<<<<< HEAD
QSerialPort SetParameter1::serial(port_list[0]);
=======
//QSerialPort SetParameter1::serial;
>>>>>>> 999052443dacbb30f95c70e73dbc904de7cb1e04
SetParameter1::SetParameter1(QWidget *parent) :
	clickable_widget(parent),
	ui(new Ui::SetParameter1)
{
	ui->setupUi(this);
<<<<<<< HEAD
=======
	if(!port_list.isEmpty()){
		serial.setPort(port_list[0]);
	}else{
		qDebug()<<"Arduino not found"<<Qt::endl;
	}
>>>>>>> 999052443dacbb30f95c70e73dbc904de7cb1e04
	//QPixmap upArrow("/home/nkp/Desktop/Project/venti_qt/ic_up_arrow.png");

//	QPixmap upArrow(":/kajana/img/ic_up_arrow.png");
//	auto imageupArrowResize = upArrow.scaled(16, 16, Qt::KeepAspectRatio);
//	ui->labelUpperLimitImage->setPixmap(imageupArrowResize);



//	QPixmap downArrow(":/kajana/img/ic_down_arrow.png");
//	auto imagedownArrowResize = downArrow.scaled(16, 16, Qt::KeepAspectRatio);
//	ui->labelDownLimitImage->setPixmap(imagedownArrowResize);
}




SetParameter1::SetParameter1( const QString& unitt,const QString& valuee,const QString& unitValuee,const QString& upperLimitValue,const QString& downLimitValue, QWidget *parent) : SetParameter1(parent){
	setUnit(unitt);
	setValue(valuee);
	setUnitValue(unitValuee);
	unit=unitt; value = valuee; unitValue = unitValuee;

//	setUpperLimitValue(upperLimitValue);
//	setDownLimitVlue(downLimitValue);
}


void SetParameter1::setUnit(const QString& unit){
	ui->label_2->setText(unit);
}

void SetParameter1::setValue(const QString& value){
	ui->label_3->setText(value);
}

void SetParameter1::setUnitValue(const QString& unitValue){
	ui->label_4->setText(unitValue);
}

//void SetParameter1::setUpperLimitValue(const QString& upperLimitValue){
//	ui->labelUpperLimitValue->setText(upperLimitValue);
//}

//void SetParameter1::setDownLimitVlue(const QString& downLimitValue){
//	ui->labelDownLimitValue->setText(downLimitValue);
//}



void SetParameter1::mousePressEvent(QMouseEvent* event){
	//std::string str9 = "clicked widget";
	//QString qstr = QString::fromStdString(str9);

	this->unit;

	//QMessageBox::about(this,"", unit + " "+value + " "+unitValue);
	ui->label_4->setText("abcd");
	//clickable_widget::mousePressEvent(event);
  //...................
	std::string str9 = "clicked widget";
	QString qstr = QString::fromStdString(str9);

	if(port_list.empty()) {
		qDebug()<<"Error reading arduino...Plz ensure that arduino kit/board is properly connected."<<Qt::endl; return;
	}else {
		bool arduino_found = false;
		int i=0;
		for(auto &a:port_list){
			qDebug()<<"index is : "<<i++<<Qt::endl;
			if(a.vendorIdentifier() == 9025) {//decimal-9025 = hex-2341
				//serial = a;
				arduino_found = true;
				qDebug()<<a.description()<<Qt::endl;
				qDebug()<<a.portName()<<Qt::endl;
				qDebug()<<a.serialNumber()<<Qt::endl;
				qDebug()<<a.vendorIdentifier()<<Qt::endl;//convert decimal to hexadecimal
				//BN: Arduino Uno            VID: 2341      PID: 0043              SN: 55838333932351519081
				qDebug()<<a.manufacturer()<<Qt::endl;
				break;
			 }
		}
		if(!arduino_found){
			qDebug()<<"Error reading arduino...Plz ensure that arduino kit/board is properly connected."<<Qt::endl; return;

		}
	}//else ends

	if(!object_created){
		object_created=28;

		serial.setPort(port_list[0]);
		if(!serial.setBaudRate(QSerialPort::Baud115200 , QSerialPort::Input))//115200   1200
			qDebug() << "1."<<serial.errorString();
		if(!serial.setDataBits(QSerialPort::Data8))
			qDebug() <<"2."<< serial.errorString();
		if(!serial.setParity(QSerialPort::EvenParity))
			qDebug() <<"3."<< serial.errorString();
		if(!serial.setFlowControl(QSerialPort::HardwareControl))
			qDebug() <<"4."<< serial.errorString();
		if(!serial.setStopBits(QSerialPort::OneStop))
			qDebug() <<"5."<< serial.errorString();
		if(!serial.open(QIODevice::ReadWrite))//QIODevice::ReadOnlyr
			qDebug() <<"6."<< serial.errorString();

		qDebug() <<"7. "<< serial.waitForReadyRead();

		qDebug() <<"8. " << serial.bytesAvailable();
	}


//serial.setReadBufferSize(10000);


	bool blocked;   QString buff="";// serial.clear(); serial.flush();
	int i=0;
	while(1){
		int by_av = serial.bytesAvailable();
		//qDebug() <<"before"<<i++<<serial.bytesAvailable()  <<" "<< buff.trimmed();
		if(by_av > 0) {
			data = serial.readAll();//works
			serial.flush();
			  int *x; int nn=*x;
			qstr=QString::fromUtf8(data.data());
			buff+=qstr;

			qDebug() <<"after"<<i++<<serial.bytesAvailable()  <<" "<< buff.trimmed();
			blocked=true;
			bool redi = false;
			while(!serial.waitForReadyRead(-1));
			ui->label_4->setText(qstr.trimmed());
			ui->label_4->repaint();
		}

	}

}




SetParameter1::~SetParameter1()
{
	delete ui;
	serial.close();
}
<<<<<<< HEAD
/*upper part auto generted*/


//#include "itemreadingdata.h"
//#include "ui_itemreadingdata.h"

//ItemReadingData::ItemReadingData(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::ItemReadingData)
//{

//    ui->setupUi(this);

//    QPixmap upArrow(":/ic_up_arrow.png");
//    auto imageupArrowResize = upArrow.scaled(16, 16, Qt::KeepAspectRatio);
//    ui->labelUpperLimitImage->setPixmap(imageupArrowResize);



//    QPixmap downArrow(":/ic_down_arrow.png");
//    auto imagedownArrowResize = downArrow.scaled(16, 16, Qt::KeepAspectRatio);
//    ui->labelDownLimitImage->setPixmap(imagedownArrowResize);



//}


//ItemReadingData::ItemReadingData( const QString& unit,const QString& value,const QString& unitValue,const QString& upperLimitValue,const QString& downLimitValue, QWidget *parent) : ItemReadingData(parent){
//    setUnit(unit);
//    setValue(value);
//    setUnitValue(unitValue);
//    setUpperLimitValue(upperLimitValue);
//    setDownLimitVlue(downLimitValue);
//}


//void ItemReadingData::setUnit(const QString& unit){
//    ui->labelUnit->setText(unit);
//}

//void ItemReadingData::setValue(const QString& value){
//    ui->labelValue->setText(value);
//}

//void ItemReadingData::setUnitValue(const QString& unitValue){
//    ui->labelUnitValue->setText(unitValue);
//}

//void ItemReadingData::setUpperLimitValue(const QString& upperLimitValue){
//    ui->labelUpperLimitValue->setText(upperLimitValue);
//}

//void ItemReadingData::setDownLimitVlue(const QString& downLimitValue){
//    ui->labelDownLimitValue->setText(downLimitValue);
//}


//ItemReadingData::~ItemReadingData()
//{
//    delete ui;
//}
=======
>>>>>>> 999052443dacbb30f95c70e73dbc904de7cb1e04
