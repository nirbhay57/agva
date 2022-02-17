#include "itemsetvalue1.h"



ItemSetValue1::ItemSetValue1()
{

}

ItemSetValue1 ::ItemSetValue1(const QString& unit , const QString& value , const QString& unitValue ,
						  const QString& upperLimitValue , const QString& downLimitValue) :  unit(unit), value(value) ,
	 unitValue(unitValue), upperLimitValue(upperLimitValue) , downLimitValue(downLimitValue)
{


}

QString ItemSetValue1::getUnit() const
{
	return unit;
}

QString ItemSetValue1::getValue() const
{
	return value;
}

QString ItemSetValue1::getUnitValue() const
{
	return unitValue;
}

QString ItemSetValue1::getUpperLimitValue() const
{
	return upperLimitValue;
}

QString ItemSetValue1::getDownLimitValue() const
{
	return downLimitValue;
}



/*Upper auto generated*/

//#include "readingdata.h"
//#include <QDebug>

//ReadingData::ReadingData()
//{

//}

//ReadingData ::ReadingData(const QString& unit , const QString& value , const QString& unitValue ,
//                          const QString& upperLimitValue , const QString& downLimitValue) :  unit(unit), value(value) ,
//     unitValue(unitValue), upperLimitValue(upperLimitValue) , downLimitValue(downLimitValue)
//{


//}


//QString ReadingData::getUnit() const
//{
//    return unit;
//}

//QString ReadingData::getValue() const
//{
//    return value;
//}

//QString ReadingData::getUnitValue() const
//{
//    return unitValue;
//}

//QString ReadingData::getUpperLimitValue() const
//{
//    return upperLimitValue;
//}

//QString ReadingData::getDownLimitValue() const
//{
//    return downLimitValue;
//}


