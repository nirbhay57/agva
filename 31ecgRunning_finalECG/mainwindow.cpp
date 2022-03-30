#include "mainwindow.h"
#include "naya_form.h"
#include "setparameter.h"
#include "setparameter11.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QTextDocument>
#include<QPainter>
#include<QString>
#include<QHBoxLayout>
#include<QWidget>
#include<QDebug>
#include<QDateTime>

using namespace std;
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
	, ui(new Ui::MainWindow)
{
	ui->setupUi(this);
	ui->centralwidget->contentsMargins().left();//unknown effect : experiment

	int margin = 10;
	int screen_max_height = 1366, screen_max_width = 768;
	int beh=80,bew=80,leh=25,lew=100,reh=40,rew=50;
	int p  = screen_max_height - 8*margin - beh - leh;

//  SetParameter *sp;
//  sp->setTitle("abc");
//  sp->setValue("abc");
//  sp->setUnit("abc");

	//ui->pushButton->setFixedHeight(200);
	//ui->pushButton->setGeometry(0,70,lew,leh);
	//ui->pushButton->setGeometry(0,p,lew,leh);
	//ui->pushButton->setText("ui");
	//ui->pushButton->setStyleSheet(" font-size: 12pt; color: white; background-color:rgb(46, 52, 54);");
//	QPushButton *btn = new QPushButton("mamam");
//	btn->setText("lalala");
//	btn->show();
	//implemented from : https://stackoverflow.com/questions/26852340/two-colours-text-in-qpushbutton
	QString s1 = "<p>";
	QString s2 = "nirbhay";
	QString s3 ="</p>";
	QString s4 ="Qt!";
	QString s5 = "</font></h1></p> <p><h2><i>";
	QString s6 = "Hello";
	QString s7 = "</i> <font color=red>";
	QString s8 = "Qt!";
	QString s9 = "</font></h2></p> <p><h3><i>";
	QString s10 = "Hello</i> <font color=red>";
	QString s11 = "Qt!";
	QString s12 = "</font></h3></p>  <p><h4><i>";
	// following sf works
	QString sf = s1+s2+s3+s4+s5+s6+s7+s8+s9+s10+s11+s12;
	// following sf1 also works
	QString sf1 = "<p style=\"font-size:30px;color:green;\">This is a paragraph.</p> <p style=\"font-size:11px;color:red;\">This is another paragraph.</p>";
	QString sf2 = "<p style=\"font-size:12px;color:white;margin-top:0;\">    1para.   </p> <p style=\"font-size:18px;color:white;margin-top:-20px;\">2para.</p>  <p style=\"font-size:12px;color:white;margin-top:0;\">3para.</p>";
	//<p style=\"font-size:10px;color:white;margin-bottom:0;margin : 0; padding-top:0;\">3.</p>
	//"<p style=\"font-size:10px;color:white;margin-bottom:0;margin:0;padding-top:0;margin-top:4;\">  <br>  1. <br>2.<br>3.  </p> <p style=\"font-size:20px;color:white;margin-bottom:0;margin : 0; padding-top:0;\">2.</p>  <p style=\"font-size:10px;color:white;margin-bottom:0;margin : 0; padding-top:0;\"><br><3.<br></p>";
//	QPushButton *button1 = new QPushButton(this);
//	button1->setGeometry(20,602,170,70);
//	button1->setText("");




////	QPushButton {
////		font-size: 18pt;
////		font-weight: bold;
////		color: rgb(243, 243, 243);
////		background-color:rgb(136, 138, 133);
////	}
//	button1->setStyleSheet(" font-size: 12pt; color: white; background-color:rgb(46, 52, 54);");

//a

//	QTextDocument Text;
//	Text.setHtml(sf2);

//		   /*
//			QString s1 = "<p><h1><i>";
//			QString s2 = "Hello";
//			QString s3 ="</i> <font color=red>";
//			QString s4 ="Qt!";
//			QString s5 = "</font></h1></p> <p><h2><i>";
//			QString s6 = "Hello";
//			QString s7 = "</i> <font color=red>";
//			QString s8 = "Qt!";
//			QString s9 = "</font></h2></p> <p><h3><i>";
//			QString s10 = "Hello</i> <font color=red>";
//			QString s11 = "Qt!";
//			QString s12 = "</font></h3></p>  <p><h4><i>";
//			*/



//	QPixmap pixmap(Text.size().width(), Text.size().height());
//	pixmap.fill( Qt::transparent );
//	QPainter painter( &pixmap );
//	Text.drawContents(&painter, pixmap.rect());

//	QIcon ButtonIcon(pixmap);
//	button1->setIcon(ButtonIcon);
//	button1->setIconSize(pixmap.rect().size());
//	button1->show();




	/*
	 //from https://doc.qt.io/qt-5/qhboxlayout.html
	QWidget *window = new QWidget;
	   QPushButton *button1 = new QPushButton("One");
	   QPushButton *button2 = new QPushButton("Two");
	   QPushButton *button3 = new QPushButton("Three");
	   QPushButton *button4 = new QPushButton("Four");
	   QPushButton *button5 = new QPushButton("Five");

	   QHBoxLayout *layout = new QHBoxLayout(window);
	   layout->addWidget(button1);
	   layout->addWidget(button2);
	   layout->addWidget(button3);
	   layout->addWidget(button4);
	   layout->addWidget(button5);

	   window->show();
this->layout()->addWidget(button1);
*/

	//ui->verticalLayout->setcon//khojo


//	ui->verticalLayout->setSpacing(2);

//	ui->verticalLayout_2->setSpacing(2);


//	ui->horizontalLayout->setSpacing(2);
//	ui->horizontalLayout_2->setSpacing(2);


	//ui->horizontalLayout_3->setSpacing(2);



	//ui->horizontalLayout_3->setGeometry(0);
//	QWidget* layoutWidget = new QWidget();
//	layoutWidget->setLayout(ui->horizontalLayout_3);
//	layoutWidget->setGeometry(0,0,1200,600);


//	QWidget *controlsRestrictorWidget = new QWidget();
//	QVBoxLayout *layoutVControls = new QVBoxLayout();
//	QWidget* layoutWidget = new QWidget();
//	layoutWidget->setLayout(ui->horizontalLayout_3);
	ui->centralwidget->setGeometry(0,0,1200,200);//does not work
	//QWidget *controlsRestrictorWidget = new QWidget();
	//QHBoxLayout *layoutVControls = ui->horizontalLayout_3;


	//following 2 lines work
	//ui->centralwidget->setLayout(ui->horizontalLayout_3);//makes fullscreen
	//ui->horizontalLayout_3->
	//ui->centralwidget->setGeometry(10,10,600,600);

	//ui->centralwidget->setMaximumWidth(350);

	//ui->verticalLayout->setMargin(0);




//	QWidget *controlsRestrictorWidget = new QWidget();
//		QVBoxLayout *layoutVControls = new QVBoxLayout();
//		QWidget* layoutWidget = new QWidget();
//		layoutWidget->setLayout(ui->horizontalLayout_3);
	ui->horizontalLayout_4->setGeometry(QRect(10,602,1200,700));//does not work



	for(auto& i : readingItemData)    {
		readingData(i);
	}


	for(auto& i : readingItemData1)    {
		readingData1(i);
	}

	ui->horizontalLayout_4->setContentsMargins(0,0,0,0);//does not work


	auto b = ui->horizontalLayout_4->findChildren<QWidget *>();
	for(auto & z :b){
		z->setContentsMargins(0,0,0,0);
	}


	QPixmap stndbi(":/kajana/img/standby_green.png");//ic_standby.jpeg standby_green.png
	auto imagedownArrowResize2 = stndbi.scaled(79, 79, Qt::KeepAspectRatio);
	ui->label_2->setPixmap(imagedownArrowResize2);


	QPixmap betri(":/kajana/img/ic_battery.png");
	auto imagedownArrowResize = betri.scaled(66, 66, Qt::KeepAspectRatio);
	ui->label_7->setPixmap(imagedownArrowResize);

//	QPixmap grn_plg(":/kajana/img/ic_greenPlug.png");
//	auto imagedownArrowResize1 = grn_plg.scaled(66, 66, Qt::KeepAspectRatio);
//	ui->label->setPixmap(imagedownArrowResize1);

//qDebug() << "Local time is:" << local.toString("dd.MM.yyyy.hh.mm.ss");  //works

	QDateTime local1(QDateTime::currentDateTime());
	qDebug() << "Today's date is:" << local1.toString("dd.MM.yyyy");

	QDateTime local2(QDateTime::currentDateTime());
	qDebug() << "Local time is:" << local2.toString("hh.mm.ss");

	QString s200 = local1.toString("dd.MM.yyyy");//yyyy.MM.dd

	QString sf20 = "<p style=\"font-size:12px;color:white;\">";

	QString sf21 =  "</p> <p style=\"font-size:12px;color:white;\">";

	QString sf22 = "</p>";

	ui->label->setText(sf20 + local1.toString("dd.MM.yyyy") + sf21 + local2.toString("hh.mm.ss") + sf22);
	//reference
//	QProcess *process = new QProcess(this);
//	QString file("\".../myapp.exe\"");
//	process->execute(file);

//	QProcess *process = new QProcess(this);
//	QString file("/opt/Qt/MaintenanceTool");
//	QString file1("python3");
//	process->execute(file, QStringList() << "any_argument");
//	process->execute(file1, QStringList() << "/home/nkp/Desktop/a.py");



	//QProcess::::startDetached("/home/nkp/Downloads/bin/ecg.exe", QStringList() << "any_argument");

}

void MainWindow::readingData(ItemSetValue data) {
	SetParameter* listItemWidget = new SetParameter{data.getTitle(), data.getUnit(), data.getValue(), this};
	 ui->horizontalLayout_4->addWidget(listItemWidget);
	 listItemWidget->setContentsMargins(0,0,0,0);
	 //this->
}



void MainWindow::readingData1(ItemSetValue1 item){
	SetParameter1* listItemWidget = new SetParameter1{item.getUnit(), item.getValue(), item.getUnitValue() ,item.getUpperLimitValue(), item.getDownLimitValue(),this};
	ui->verticalLayout_7->addWidget (listItemWidget);
}

//void MainWindow::readingData1(ItemSetValue1 item){
//	SetParameter1* listItemWidget = new SetParameter1{item.getUnit(), item.getValue(), item.getUnitValue() ,item.getUpperLimitValue(), item.getDownLimitValue(),this};
//	ui->horizontalLayout->addWidget(listItemWidget);

//}

MainWindow::~MainWindow() {
	delete ui;
}



int fun(QWidget * ){
	return 23;
}




void MainWindow::on_click_pushButton_monitoring(){

}




void MainWindow::on_pushButton_monitoring_clicked()
{
	 ui->stackedWidget->setCurrentIndex(0);

}


void MainWindow::on_pushButton_graphics_clicked()
{
	ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pushButton_system_clicked()
{
	ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_pushButton_limits_clicked()
{
	ui->stackedWidget->setCurrentIndex(3);
}


void MainWindow::on_pushButton_alarms_clicked()
{
	ui->stackedWidget->setCurrentIndex(4);
}

