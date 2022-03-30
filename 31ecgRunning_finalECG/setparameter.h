#ifndef SETPARAMETER_H
#define SETPARAMETER_H

#include <QWidget>
//#include <QPushButton>

namespace Ui {
class SetParameter;
}

class SetParameter : public QWidget
{
	Q_OBJECT

public:
	explicit SetParameter(QWidget *parent = nullptr);
	explicit SetParameter(const QString& title, const QString& value, const QString& unit ,QWidget *parent = nullptr);
	~SetParameter();

	void setTitle(const QString&);//ui->label me set karta hai
	void setValue(const QString&);
	void setUnit(const QString&);
private:
	Ui::SetParameter *ui;
};

#endif // SETPARAMETER_H



