


#ifndef READINGDATA_H
#define READINGDATA_H

#include <QAbstractItemModel>

class ReadingData
{

public:

	explicit ReadingData();
	explicit ReadingData(const QString& unit , const QString& value ,const QString& unitValue,const QString& upperLimitValue,const QString& downLimitValue);
	QString getUnit() const;
	QString getValue() const;
	QString getUnitValue() const;
	QString getUpperLimitValue() const;
	QString getDownLimitValue() const;

private:
	QString unit;
	QString value;
	QString unitValue;
	QString upperLimitValue;
	QString downLimitValue;

};

#endif // READINGDATA_H
