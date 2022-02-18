#ifndef SETPARAMETER1_H
#define SETPARAMETER1_H

#include <clickable_widget.h>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>

namespace Ui {
class SetParameter1;
}

class SetParameter1 : public clickable_widget
{
	Q_OBJECT

public:
	explicit SetParameter1(QWidget *parent = nullptr);
	explicit SetParameter1(const QString& unit , const QString& value, const QString& unitValue,const QString& upperLimitValue,const QString& downLimitValue, QWidget *parent = nullptr);

	~SetParameter1();

	void setUnit(const QString&);
	void setValue(const QString&);
	void setUnitValue(const QString&);
	void setUpperLimitValue(const QString&);
	void setDownLimitVlue(const QString&);
	void mousePressEvent(QMouseEvent* event) override;

private:
	Ui::SetParameter1 *ui;
	QString unitValue,value,unit;
	QSerialPort serial;
	static QList<QSerialPortInfo> port_list;
	static int ii;
	static bool object_created;
	QByteArray data;
	QString s;
};

#endif // SETPARAMETER1_H
/*upper part auto generated*/

//#ifndef ITEMREADINGDATA_H
//#define ITEMREADINGDATA_H

//#include <QWidget>
//#include <QListWidget>
//#include <QListWidgetItem>

//namespace Ui {
//class ItemReadingData;
//}

//class ItemReadingData : public QWidget
//{
//    Q_OBJECT

//public:
//    explicit ItemReadingData(QWidget *parent = nullptr);
//    explicit ItemReadingData(const QString& unit , const QString& value, const QString& unitValue,const QString& upperLimitValue,const QString& downLimitValue, QWidget *parent = nullptr);

//    ~ItemReadingData();

//    void setUnit(const QString&);
//    void setValue(const QString&);
//    void setUnitValue(const QString&);
//    void setUpperLimitValue(const QString&);
//    void setDownLimitVlue(const QString&);

//private:
//    Ui::ItemReadingData *ui;
//};

//#endif // ITEMREADINGDATA_H
