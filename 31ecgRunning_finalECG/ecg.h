 #ifndef ECG_H
#define ECG_H

#include <QWidget>
#include <QTimer>
#include <QPainterPath>
#include<QLabel>
//#include <chrono>

using namespace std;


namespace Ui {
class ecg;
}
class ecg : public QWidget
{
	Q_OBJECT
	int idx=0;
	QTimer timer;
	QPainterPath path;
	QRect boundingRect;
	Ui::ecg *ui;
	static int st;
	int rectx,recty;
public:
	explicit  ecg(QWidget *parent=0);
	QLabel *ql;

	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
public:
	QStringList list = {"10","12","17"};
	float x=0.0;
	QPointF aa;

public slots:
	void changeT(){
		update(boundingRect);
	}
};

#endif // ECG_H

//addendum______________________________________________________________________________________________________________________________________________________
// #ifndef ECG_H
//#define ECG_H

//#include <QWidget>
//#include <QTimer>
//#include <QPainterPath>
////#include <chrono>

//using namespace std;


//namespace Ui {
//class ecg;
//}

//class ecg : public QWidget
//{

//	Q_OBJECT
//	int idx=0;
//	QTimer *timer;
//	QPainterPath path;
//	QRect boundingRect;
//public:
//	explicit ecg(QWidget *parent=0);

//	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
//public:
//	QStringList list;
//	float x=0;
//	QPointF aa;
//public slots:
//	//void changeT(){update(boundingRect);}
//	void mydelay();
//	void update(int,int,int,int);
//};
//#endif // ECG_H

//addendum______________________________________________________________________________________________________________________________________________________

//class Widget : public QWidget
//{
//    Q_OBJECT
//    int idx=0;
//    QTimer timer;
//    QPainterPath path;
//    QRect boundingRect;
//public:
//    explicit Widget(QWidget *parent=0);

//    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
//public:
//    QStringList list;
//    float x=0;
//    QPointF aa;
//public slots:
//    void changeT(){update(boundingRect);}
//};
