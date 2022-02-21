#ifndef CLICKABLE_WIDGET_H
#define CLICKABLE_WIDGET_H
#include<QWidget>
#include<QtSerialPort/QSerialPort>
#include<QtSerialPort/QSerialPortInfo>

class clickable_widget : public QWidget
{
	Q_OBJECT

	QByteArray data;
	QString s;
	static QSerialPort serial;
	static QList<QSerialPortInfo> port_list;
public:
	clickable_widget( QWidget *parent=0);
	void mousePressEvent(QMouseEvent* event) override;
	~clickable_widget();
signals:
	void valueChanged(QString s);
};

#endif // CLICKABLE_WIDGET_H
