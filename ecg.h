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
	bool cycle_completed = false;
	QTimer timer;
	QPainterPath path;
	QRect boundingRect;
	Ui::ecg *ui;
	static size_t st;
	int rectx,recty;
	~ecg();
public:
	explicit  ecg(QWidget *parent=0);
	QLabel *ql;

	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
public:
	QStringList list = {"10","12","17"};
	float x=0.0;
	QPointF aa;


public slots:
	void do_custom_painting(){
		if(cycle_completed){
			cycle_completed = false;
		}else {
			update(boundingRect);
		}
	}
};

#endif // ECG_H

