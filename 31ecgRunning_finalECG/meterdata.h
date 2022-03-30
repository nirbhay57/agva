#ifndef METERDATA_H
#define METERDATA_H

#include <QAbstractItemModel>

class MeterData
{


public:
	explicit MeterData();
	explicit MeterData(const QString& unit , const QString& value);
	QString getUnit() const;
	QString getValue() const;

private:
	QString unit;
	QString value;
};

#endif // METERDATA_H
