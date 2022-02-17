


#ifndef READINGDATA_H
#define READINGDATA_H

#include <QAbstractItemModel>
#include<clickable_widget.h>
#include<QMessageBox>

class ReadingData : public clickable_widget
{

public:

	explicit ReadingData();
	explicit ReadingData(const QString& unit , const QString& value ,const QString& unitValue,const QString& upperLimitValue,const QString& downLimitValue);
	QString getUnit() const;
	QString getValue() const;
	QString getUnitValue() const;
	QString getUpperLimitValue() const;
	QString getDownLimitValue() const;
	void mousePressEvent(QMouseEvent* event) override
	{
		std::string str9 = "clicked widget";
		QString qstr = QString::fromStdString(str9);

		QMessageBox::about(this,"",getUnit());
	}


private:
	QString unit;
	QString value;
	QString unitValue;
	QString upperLimitValue;
	QString downLimitValue;

};

#endif // READINGDATA_H
