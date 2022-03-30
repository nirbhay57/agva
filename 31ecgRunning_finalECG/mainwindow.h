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

	QList<ItemSetValue> readingItemData = {
		ItemSetValue("Ppeak", " 40" , " cmH2O"),
		ItemSetValue("TRIGGER"," 45" ," LPM"),
		ItemSetValue("VTE"," 500" ," cmH2O" ),
		ItemSetValue("PRESSURE","65" ,"amH2O" ),
		ItemSetValue("RATE","35" ,"bpm" ),
		ItemSetValue("FIO2","21" ,"%" ),
		ItemSetValue("n","1.2" ,"SOC" ),
		ItemSetValue("I:E","1:2" ,"" ),

	};


	QList<ItemSetValue1> readingItemData1 = {
		ItemSetValue1("Ppeak"," cmH2O" ," 40" , "40" , "10"),
		ItemSetValue1("WxpMinVol"," I/ml" ," 6.0" , "9.0" , "3.5"),
		ItemSetValue1("VTE"," ml" ," 352" , "750" , "250"),
		ItemSetValue1("fTotal"," b/min" ," 17" , "40" , "0   "),
		ItemSetValue1("Ppeak"," cmH2O" ," 38" , "40" , "10"),
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

private:
	Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
