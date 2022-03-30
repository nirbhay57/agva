#include "setparameter11.h"
#include "ui_setparameter1.h"

SetParameter1::SetParameter1(QWidget *parent) :
	QWidget(parent),
	ui(new Ui::SetParameter1)
{
	ui->setupUi(this);
	//QPixmap upArrow("/home/nkp/Desktop/Project/venti_qt/ic_up_arrow.png");

	QPixmap upArrow(":/kajana/img/ic_up_arrow.png");
	auto imageupArrowResize = upArrow.scaled(16, 16, Qt::KeepAspectRatio);
	ui->labelUpperLimitImage->setPixmap(imageupArrowResize);



	QPixmap downArrow(":/kajana/img/ic_down_arrow.png");
	auto imagedownArrowResize = downArrow.scaled(16, 16, Qt::KeepAspectRatio);
	ui->labelDownLimitImage->setPixmap(imagedownArrowResize);
}




SetParameter1::SetParameter1( const QString& unit,const QString& value,const QString& unitValue,const QString& upperLimitValue,const QString& downLimitValue, QWidget *parent) : SetParameter1(parent){
	setUnit(unit);
	setValue(value);
	setUnitValue(unitValue);
	setUpperLimitValue(upperLimitValue);
	setDownLimitVlue(downLimitValue);
}


void SetParameter1::setUnit(const QString& unit){
	ui->labelUnit->setText(unit);
}

void SetParameter1::setValue(const QString& value){
	ui->labelValue->setText(value);
}

void SetParameter1::setUnitValue(const QString& unitValue){
	ui->labelUnitValue->setText(unitValue);
}

void SetParameter1::setUpperLimitValue(const QString& upperLimitValue){
	ui->labelUpperLimitValue->setText(upperLimitValue);
}

void SetParameter1::setDownLimitVlue(const QString& downLimitValue){
	ui->labelDownLimitValue->setText(downLimitValue);
}



SetParameter1::~SetParameter1()
{
	delete ui;
}
/*upper part auto generted*/


//#include "itemreadingdata.h"
//#include "ui_itemreadingdata.h"

//ItemReadingData::ItemReadingData(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::ItemReadingData)
//{

//    ui->setupUi(this);

//    QPixmap upArrow(":/ic_up_arrow.png");
//    auto imageupArrowResize = upArrow.scaled(16, 16, Qt::KeepAspectRatio);
//    ui->labelUpperLimitImage->setPixmap(imageupArrowResize);



//    QPixmap downArrow(":/ic_down_arrow.png");
//    auto imagedownArrowResize = downArrow.scaled(16, 16, Qt::KeepAspectRatio);
//    ui->labelDownLimitImage->setPixmap(imagedownArrowResize);



//}


//ItemReadingData::ItemReadingData( const QString& unit,const QString& value,const QString& unitValue,const QString& upperLimitValue,const QString& downLimitValue, QWidget *parent) : ItemReadingData(parent){
//    setUnit(unit);
//    setValue(value);
//    setUnitValue(unitValue);
//    setUpperLimitValue(upperLimitValue);
//    setDownLimitVlue(downLimitValue);
//}


//void ItemReadingData::setUnit(const QString& unit){
//    ui->labelUnit->setText(unit);
//}

//void ItemReadingData::setValue(const QString& value){
//    ui->labelValue->setText(value);
//}

//void ItemReadingData::setUnitValue(const QString& unitValue){
//    ui->labelUnitValue->setText(unitValue);
//}

//void ItemReadingData::setUpperLimitValue(const QString& upperLimitValue){
//    ui->labelUpperLimitValue->setText(upperLimitValue);
//}

//void ItemReadingData::setDownLimitVlue(const QString& downLimitValue){
//    ui->labelDownLimitValue->setText(downLimitValue);
//}


//ItemReadingData::~ItemReadingData()
//{
//    delete ui;
//}
