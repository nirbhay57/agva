#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include "itemsetvalue.h"
#include "itemsetvalue1.h"
#include "meterdata.h"
#include <QMainWindow>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
	Q_OBJECT

public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();


	void readingData(ItemSetValue data);
	void readingData1(ItemSetValue1 data);
//niche wala
	QList<ItemSetValue> readingItemData = {
		ItemSetValue("PEEP", "5" , "cmH2O"),
		ItemSetValue("TRIGGER","45" ,"LPM"),
		ItemSetValue("VT"," 500" ," cmH2O" ),
		ItemSetValue("PRESSURE","65" ,"cmH2O" ),
		ItemSetValue("RATE","35" ,"bpm" ),
		ItemSetValue("FIO2","21" ,"%" ),
		ItemSetValue("TI","1.2" ,"sec" ),
		ItemSetValue("I:E","1:2" ,"" ),

	};

//right side wala
	QList<ItemSetValue1> readingItemData1 = {
		ItemSetValue1("cmH2O","PIP" ,"20" , "40" , "10"),
		ItemSetValue1("cmH2o","PEEP" ,"5" , "9.0" , "3.5"),
		ItemSetValue1("ml","VTE" ,"480" , "750" , "250"),
		ItemSetValue1("bpm","RR" ,"18" , "40" , "0   "),
		ItemSetValue1("%","FIO2" ,"30" , "40" , "10"),
//		ItemSetValue1("noida"," cmH2O" ," 38" , "40" , "10"),
//		ItemSetValue1("delhi"," cmH2O" ," 38" , "40" , "10"),

	};



//	void meterData(MeterData data);

//	QList<MeterData> meterItemData = {
//		MeterData("%MinVol","70" ),
//		MeterData("PEEP/CPAP"," 5"),
//		MeterData("Oxygen"," 42" ),
//		MeterData("PEEP/CPAP"," 5" ),
//		MeterData("PEEP/CPAP"," 5"),
//		MeterData("Oxygen"," 12" ),
//		MeterData("PEEP/CPAP"," 40" ),
//		MeterData("%MinVol","33" ),
//		MeterData("Oxygen"," 25" ),
//	};



private slots:


	void on_click_pushButton_monitoring();



	void on_pushButton_monitoring_clicked();

	void on_pushButton_graphics_clicked();

	void on_pushButton_system_clicked();

	void on_pushButton_limits_clicked();

	void on_pushButton_alarms_clicked();

	void on_pushButton_9_clicked();

	void on_pushButton_8_clicked();

	void on_pushButton_7_clicked();

	void on_pushButton_6_clicked();

	void on_pushButton_5_clicked();

	void on_limits_2_clicked();
	void refresh_label(QString s);

private:
	Ui::MainWindow *ui;
	static int ii;
};
#endif // MAINWINDOW_H
