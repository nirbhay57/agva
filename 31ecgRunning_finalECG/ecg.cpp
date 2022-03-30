#include<QPainter>
#include<QDebug>
#include <QThread>
#include <QTime>
#include <QMessageBox>
//#include <iostream>

//#include <thread>
//and you call it by doing this:
#include "ecg.h"
#include "ui_ecg.h"

#include "ecg.h"
bool bl = true;
int ecg::st=0;
int st1=0;
ecg::ecg(QWidget *parent) : QWidget(parent),aa(0.0,0.0) {
	connect(&timer,SIGNAL(timeout()),this,SLOT(changeT()));
	timer.start(1);
}



void ecg::paintEvent(QPaintEvent *event) {

	//this->update(QRect(aa.rx()  ,aa.ry(),10,10));

	//QMessageBox::information(this, "myTitle","paintEvent entered............");
	 //ui->label1  ->setText(QString::number(st));

	//ql->setGeometry(30,30,40,40);
	QString s = QString::number(st); st1++;
	QString s1 = QString::number(x); //st1++;

	//ql->setText(s);
	rectx = 1, recty = 550;
	qDebug() << "paintEvent entered..................." << Qt::endl;
//	for(auto a:list){
//		qDebug() << a << Qt::endl;
//	}
	qDebug() << "list printed................." << Qt::endl;

	QPainter *painter = new QPainter;
	painter->begin(this);
	painter->drawText(QPointF(100,600), s);  painter->drawText(QPointF(200,600), s1);
	//qDebug() << "painter.begin ." << Qt::endl;
	if(bl) {
		painter->setPen(QPen(Qt::white, 0.1, Qt::SolidLine, Qt::RoundCap)); bl = !bl;
	}else{
		painter->setPen(QPen(Qt::white, 0.1, Qt::SolidLine, Qt::RoundCap)); bl = !bl;

	}
	path.moveTo(aa);
	painter->scale(7,6);//8,8
	//x = random(); x = int(x) % 50;
	boundingRect.setTopLeft(QPoint(x,0));
	bool set = false;
	if(!set){
		boundingRect.setSize(QSize(rectx,recty));//30*0.25,500
	}
	qDebug() << "boundingRect.setSize " << Qt::endl;

	for(int i=0;i<10000;i++){

		string s = to_string(i%50);
		QString s1 = QString::fromStdString(s);
		list.push_back(s1);
	}

	if(idx+25>list.size())
		idx=0;
	s = QString::number(st);//st++

	painter->drawText(QPointF(100,600), s);
	qDebug() << " if(idx+25>list.size()) " << Qt::endl;

	for(int i=idx; i<idx+1 ; i++) {//25
		if(bl) {
			painter->setPen(QPen(Qt::white, 0.5, Qt::SolidLine, Qt::RoundCap)); bl = !bl;
		}else{
			painter->setPen(QPen(Qt::white, 0.5, Qt::SolidLine, Qt::RoundCap)); bl = !bl;

		}
		QPen p(Qt::white); p.setWidth(0); painter->setPen(p);

		 //ui->label->setText(QString::number(i));
		s = QString("Loop entered \n");

		painter->setPen(QPen(Qt::blue, 0.5, Qt::SolidLine, Qt::RoundCap));
		 painter->setPen(p);
		painter->drawText(QPointF(300,600), s);
		//QMessageBox::information(this, "myTitle","loop entered............");
		 s = QString::number(st++);
		painter->drawText(QPointF(100,600), s);

		qDebug() << " for loop entered " << Qt::endl;
		//const
				//float
						double y=list.at(i).toInt(); y =  random(); y = (int)y % 50;
		QPointF bb(x, y);
		x+=1;//0.25
		if(x>1020) {//920
			this->update(QRect(aa.rx()  ,aa.ry(),10,10));
			qDebug() << " x > 750 " << Qt::endl;
			//boundingRect.setSize(QSize(50,550));
			set = true;
			qDebug()<<"hi:" <<"y"<<y;
			x=0;
			path = QPainterPath();
			path.moveTo(x,y);
			aa.setX(x);
			aa.setY(y);
			bb.setX(x);
		}
		path.quadTo(aa,bb);
		aa=bb;
	}
	//boundingRect.setSize(QSize(rectx,recty));//30*0.25,500
	qDebug() << " for loop exited " << Qt::endl;
	idx+=5;//25





	long r = random(), lx=0,ly=0;
	r = r % 30;
	//painter.drawLine(lx,ly,lx+2,ly+(r-15) );
	lx = lx + 2;
	ly = ly + (r-15 );
	//if(i%10==0){int a=lx,b=ly;   painter.drawLine(a,ly,a+2,200 );   ly=200;}




	painter->drawPath(path);
	QWidget::paintEvent(event);
	painter->end();
	//x=0; can't do
}


//addendum____________________________________________________________________________________________________________________________________________________
//#include<QPainter>
//#include<QDebug>
//#include <QThread>
//#include <QTime>
////#include <iostream>

////#include <thread>
////and you call it by doing this:
//#include "ecg.h"
//#include "ui_ecg.h"

//#include "ecg.h"
//void delay(int);
//void mydelay(int);
////class Sleeper;
////class Sleeper : public QThread
////{
////public:
////	static void usleep(unsigned long usecs){QThread::usleep(usecs);}
////	static void msleep(unsigned long msecs){QThread::msleep(msecs);}
////	static void sleep(unsigned long secs){QThread::sleep(secs);}
////};

//ecg::ecg(QWidget *parent) : QWidget(parent),aa(0,0)
//{
//	timer = new QTimer(this);
//	connect(timer,SIGNAL(timeout()),this,SLOT(update()));
//	//probably inherited function update() calls our written/overloded paintEvent
//	timer->start(1000);//250      kitna time lagana hai 250 means fast(250 ns/ms hi lega) , 1000 means slow(1000 ns/ms le lega)
//}

//void ecg::paintEvent(QPaintEvent *event)
//{
//	//using namespace std::chrono_literals;
//	qDebug() << " paintEvent entered "<< Qt::endl;

//	QPainter painter;

//	painter.begin(this);
//	painter.drawLine(10,10,600,600);
//	painter.eraseRect(50,50,100,100);//erases successfully
//	painter.setPen(QPen(Qt::red, 0.5, Qt::SolidLine, Qt::RoundCap));
//	int lx = 0,ly = 200;
//	for(int i=0;i<600;i++){
//		long a,b;
//		long r = random();
//		r = r % 30;
//		painter.drawLine(lx,ly,lx+2,ly+(r-15) );
//		lx = lx + 2;
//		ly = ly + (r-15 );
//		if(i%10==0){int a=lx,b=ly;   painter.drawLine(a,ly,a+2,200 );   ly=200;}

//		//mydelay(9999999);
//		//QThread::usleep(5);
//		qDebug() << " i = " << i << Qt::endl;
//	}
//	//QWidget::paintEvent(event);
//	painter.end();
//}


//void ecg::update(int ax, int ay, int aw, int ah)
//{
//	//using namespace std::chrono_literals;

//	QPainter painter;

//	painter.begin(this);
//	painter.drawLine(510,10,10,600);
//	painter.eraseRect(50,50,100,100);//erases successfully
//	painter.setPen(QPen(Qt::red, 0.5, Qt::SolidLine, Qt::RoundCap));
//	int lx = 0,ly = 200;
//	for(int i=0;i<600;i++){
//		long a,b;
//		long r = random();
//		r = r % 30;
//		painter.drawLine(lx,ly,lx+2,ly+(r-15) );
//		lx = lx + 2;
//		ly = ly + (r-15 );
//		if(i%10==0){int a=lx,b=ly;   painter.drawLine(a,ly,a+2,200 );   ly=200;}

//		//mydelay(9999999);
//		//QThread::usleep(5);
//		qDebug() << " i = " << i << Qt::endl;
//	}
//	//QWidget::paintEvent(event);
//	painter.end();
//}



//void ecg::mydelay(){
//	int z=0;
//	while(z<999999)z++;
//}

//inline void delay(int millisecondsWait)
//{
//	QEventLoop loop;
//	QTimer t;
//	t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
//	t.start(millisecondsWait);
//	loop.exec();
//}

//addendum__________________________________________________________________________________________________________________________________________________


/*
#include <iostream>
#include <chrono>
#include <thread>

int main()
{
	using namespace std::chrono_literals;
	std::cout << "Hello waiter\n" << std::flush;
	auto start = std::chrono::high_resolution_clock::now();
	std::this_thread::sleep_for(2000ms);
	auto end = std::chrono::high_resolution_clock::now();
	std::chrono::duration<double, std::milli> elapsed = end-start;
	std::cout << "Waited " << elapsed.count() << " ms\n";
}
 */




//addendum

//#include "widget.h"
//Widget::Widget(QWidget *parent) : QWidget(parent),aa(0,0)
//{
//    connect(&timer,SIGNAL(timeout()),this,SLOT(changeT()));
//    timer.start(25);
//}

//void Widget::paintEvent(QPaintEvent *event)
//{
//    QPainter painter;
//    painter.begin(this);
//    painter.setPen(QPen(Qt::black, 0.5, Qt::SolidLine, Qt::RoundCap));
//    path.moveTo(aa);
//    boundingRect.setTopLeft(QPoint(x,0));
//    boundingRect.setSize(QSize(30*0.25,500));
//    if(idx+25>list.size())
//        idx=0;
//    for(int i=idx; i<idx+25 ; i++)
//    {
//        const float y=list.at(i).toInt();
//        QPointF bb(x, y);
//        x+=0.25;
//        if(x>750)
//        {
//            qDebug()<<"hi:" <<"y"<<y;
//            x=0;
//            path = QPainterPath();
//            path.moveTo(x,y);
//            aa.setX(x);
//            aa.setY(y);
//            bb.setX(x);
//        }
//        path.quadTo(aa,bb);
//        aa=bb;
//    }
//    idx+=25;

//    painter.drawPath(path);
//    QWidget::paintEvent(event);
//    painter.end();
//}
