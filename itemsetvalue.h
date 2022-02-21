#ifndef ITEMSETVALUE_H
#define ITEMSETVALUE_H
#include <QAbstractItemModel>


class ItemSetValue
{
public:

	explicit ItemSetValue();
	explicit ItemSetValue(const QString& title , const QString& value , const QString& unit);
	QString getTitle() const;
	QString getValue() const;
	QString getUnit() const;


private:
	QString title;
	QString value;
	QString unit;
};

#endif // ITEMSETVALUE_H
