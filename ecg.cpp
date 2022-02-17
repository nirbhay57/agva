#include<QPainter>
#include<QDebug>
#include <QThread>
#include <QTime>
#include <QMessageBox>
#include<list>
#include "ecg.h"
#include "ui_ecg.h"
#include "ecg.h"

bool bl = true;
size_t ecg::st=0;
int limit = 276;
bool iu=false;
double maxy=163;
QPointF aa1(0,maxy), bb1(10,maxy-3), prev_aa1, prev_bb1;// QPointF aa1(0,163),bb1(10,163-3);//,-30,-31,-32,-33
//vector<double> y_i = {-1,-1,-1,-1,-2,-2,-2,-2,-3,-3,-3,-5,-5,-8,-12,-16,-20,-27,-28,-29, 1,   1,  1,  1,  2,  2,  2,  2,  3,  3,  3,  5,  5,  8, 12, 16, 20, 27, 28, 29};//10,10,10,10,
//vector<double> x_i = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,6,6,7,7,8,9,9,10,10, 10, 10, -1,-1,-1,-1,-2,-2,-2,-3,-3,-4,-4,-4,-5,-5,-6,-6,-7,-8,-8,-9,-9,-10,-10,-10};

vector<double> y_i = {-1,-1,-1,-1,-2,-2,-2,-2,-3,-3,-3,-5,-5,-8,-12,-16,-20,-27,-28,-29, 1,   31,  1,  1,  2,  2,  2,  2,  3,  3,  3,  5,  5,  8, 12, 16, 20, 27, 28, 29};//10,10,10,10,
vector<double> x_i = {10,10,10,10,10,10,10,10,10,10,10,10,10,10, 10, 10, 10, 10, 10, 10,-10,-10,-10,-10,-10,-22,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10};


//vector<double> y_i = {10,10,10,10,10,10,10,10,10,10,10,10,10,10, 10, 10, 10, 10, 10, 10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10,-10};
bool incr = true;
ecg::ecg(QWidget *parent) : QWidget(parent),aa(0.0,0.0) {
	qDebug()<<"starting...."<<Qt::endl;
	connect(&timer,SIGNAL(timeout()),this,SLOT(do_custom_painting()));
	timer.start(100);
}

void ecg::paintEvent(QPaintEvent *event) {


//	QMessageBox::StandardButton reply;
//	reply = QMessageBox::question(this, "Test", "Quit?",QMessageBox::Yes|QMessageBox::No);
//	struct cord{
//		double x,b,a,y;
//		bool incr;
//	};
//	struct intrsct;
//	QSet<cord>  set_cor, set_cor1={
//									 {1,2,3,4,1},
//									 {5,6,7,8,0}
//								 };
//	QSet<cord>::Iterator it;
//	for(;it!=set_cor1.end();it++){
//		qDebug()<<it->a<<it->b<<it->x<<it->y<<Qt::endl;
//	}
//	for(auto i=set_cor.begin();i!=set_cor.end();i++){
//		qDebug()<<i->a<<Qt::endl;
//	}

	rectx = 1, recty = 550;

	QPainter painter;
	painter.begin(this);
	painter.setRenderHint(QPainter::Antialiasing);




	if(st==55) {
		st=1;
		path.clear();
		update();
		painter.end();
		aa={0,0};
		qDebug()<<"exiting due to st = 50"<<Qt::endl;
		aa = {0,0};  bb1 = {10,maxy-3};
		aa1={0,maxy}, bb1={10,maxy-3}; incr=true;
		path.moveTo(aa1);
		 //timer.stop();
//		 exit(EXIT_FAILURE);
//		 QApplication::quit();
//		 QCoreApplication::quit();

	}




//makes background black.
			QPixmap pixmap(820, 170);
			pixmap.fill(Qt::transparent);
			QRect rq= pixmap.rect();
			painter.setBrush(QBrush(Qt::black));
			painter.fillRect(rq, painter.brush());
	path.moveTo(aa1);
			//painter.scale(8,3);
//	boundingRect.setTopLeft(QPoint(x,0));
//	boundingRect.setSize(QSize(rectx,recty));
	//if(st==99)incr=false;
	//yaha se cut kiya hai boundingbox.setBottomLeft

	for(int i=idx; i<idx+1 ; i++) {//25
		QPen p(Qt::red); //p.setWidth(0); painter.setPen(p); p.setColor(Qt::white); painter.setPen(p);
//		double  y =  random(); y = (int)y % 50;
//		QPointF bb(x, y);
		if(incr) { p.setWidth(0); painter.setPen(p); p.setColor(Qt::red); painter.setPen(p);x+=1;}
		else { p.setWidth(0); painter.setPen(p); p.setColor(Qt::red); painter.setPen(p); x-=1;}//0.25
		if(bb1.x() < aa1.x() && !iu) {//1023 is highest value, it can tolerate    x>limit
			incr = false;  /*path = QPainterPath();*/ iu=1; // path.moveTo(x,y); aa.setX(x); aa.setY(y);bb.setX(x);
			qDebug()<<"bb1.x() < aa1.x() && !iu"<<Qt::endl;
		}

		//if(st==20){ incr = false; qDebug()<<"st==0"<<Qt::endl;}//x<0
		int t1=0,t2=0,t3=3,t4=3;
		//path.quadTo(QPoint(t1,t2),QPoint(t3,t4)); t1=t3,t2=t4;t3+=1,t4+=3; path.moveTo(t3,t4);

		//size_t x = intersect(set_cor,aa1,bb1);
		//path.quadTo(prev_aa1,aa1);

		path.quadTo(aa1,bb1);
//		if(st==20)
//		path.clear();
		//path.addRect(0,0,100,st*70);
		//path.addText(160,100,QFont(), "acd");

		prev_aa1 = aa1;
		aa1=bb1;
//		if(incr){
//			bb1.setX(bb1.x() + 10);
//			bb1.setY(bb1.y() - vd[st]);
//		}else{
//			bb1.setX(bb1.x() - 10);
//			bb1.setY(bb1.y() + vd[st]);
//		}
		bb1.setX(bb1.x() + x_i[st]);
		bb1.setY(bb1.y() + y_i[st]);


		//painter.eraseRect(0,0,200,140);
		if( (bb1.y()) < 0){ bb1.setY(0); incr = false; }

		if(incr){
			boundingRect.setBottomLeft(QPoint(aa1.x(),aa1.y()));
			boundingRect.setTopRight(QPoint(bb1.x(),bb1.y()));
			//boundingRect.setSize(QSize(rectx,recty));
//			const cord &cor = {aa1.x(),aa1.y(),bb1.x(),bb1.y(),incr};
//			set_cor.insert( cor );
		}else{
//			boundingRect.setTopRight(QPoint(aa1.x()+20,aa1.y()-20));//+20,-20
//			boundingRect.setBottomLeft(QPoint(bb1.x()-20,bb1.y()+20));//-20,+20
			boundingRect.setTopRight(QPoint(aa1.x(),aa1.y()));//+20,-20
			boundingRect.setBottomLeft(QPoint(bb1.x(),bb1.y()));//-20,+20
		}
//		boundingRect.setBottomLeft(QPoint(aa1.x(),aa1.y()));
//		boundingRect.setTopRight(QPoint(bb1.x(),bb1.y()));
//		boundingRect.setTopRight(QPoint(0,0));//+20,-20      //NO
//		boundingRect.setBottomLeft(QPoint(10,10));//-20,+20    //EFFECT
//		if(st==40){
//			painter.eraseRect(0,0,200,140);//does't
//			boundingRect.setTopRight(QPoint(200,0));//+20,-20
//			boundingRect.setBottomLeft(QPoint(0,160));//-20,+20
//		}


	}
	//painter.drawLine(aa1+QPointF{2,2},bb1+QPointF{2,2});
	idx+=100;//25//5 ........ working here right now
	painter.drawPath(path);
	//painter.drawLine(150,150,0,0);
	QWidget::paintEvent(event);
	//painter.drawLine(0,0,500,163);

	//painter.drawLine(aa1,bb1);

	//qDebug()<<"bb1 "<<bb1.x()<<" "<<bb1.y()<<Qt::endl;

	std::string str1 = to_string(st);
	std::string str2 = to_string(aa1.x());
	std::string str3 = to_string(aa1.y());
	std::string str4 = to_string(bb1.x());
	std::string str5 = to_string(bb1.y());
	std::string str6 = to_string(x_i[st]);
	std::string str7 = to_string(y_i[st]);
	std::string str8 = to_string(incr);
	std::string str9 = "";
	QString qstr = QString::fromStdString(str1+","+str2+","+str3+","+str4+","+str5+","+str6+","+str7+",,,"+str8+","+str9);

	//QMessageBox::about(this,"",qstr);
	//painter.eraseRect(0,0,20,10);
	//path=QPainterPath();
	//painter.end();
	st++;
	if(st >= x_i.size()){// it was     if(st >= x_i.size()-10){  tavi tast me kat ja raha tha
		/*path=QPainterPath(); path.closeSubpath();*/
		//QWidget::paintEvent(event);
		path.clear();         //any one early or later
//		path.closeSubpath();  //result same


		//path.addRect(0,0,100,100);
		//path=QPainterPath();
		/*painter.drawPath(path);*/
		update();  //painter se draw path															   //idx+=10;//25//5 ........ working here right now
		//painter.drawPath(path);
		//paintEvent

//		painter.drawPath(path);
//		QWidget::paintEvent(event);
//		str9="abc";


		//end painter
//		painter.eraseRect(0,0,160,160);
//		painter.drawRect(0,0,160,160);
		//path.clear(); //yetleaves last line
		painter.end();
		return;
		//st=0;
		aa = {0,0};  bb1 = {10,maxy-3}; prev_aa1=aa;
		cycle_completed = true;
	}

	//x=200; //can't do
}

ecg::~ecg()
{
	delete ui;
}
