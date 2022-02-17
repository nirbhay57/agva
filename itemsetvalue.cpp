#include "itemsetvalue.h"


//original generated
//ItemSetValue::ItemSetValue()
//{

//}

//I wrote
ItemSetValue::ItemSetValue() : title("") , value("") , unit("")
{

}

ItemSetValue::ItemSetValue(const QString& title , const QString& value ,const QString& unit)
	: title(title) , value(value) , unit(unit)
{
}
QString ItemSetValue::getTitle() const{

	return title ;
}

QString ItemSetValue::getValue() const{

	return value ;
}

QString ItemSetValue::getUnit() const{

	return unit ;
}
