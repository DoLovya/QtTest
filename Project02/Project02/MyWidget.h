#pragma once

#include <QtWidgets/QWidget>
#include "ui_MyWidget.h"
#include "Teacher.h"
#include "Student.h"

class MyWidget : public QWidget
{
	Q_OBJECT
public:
	MyWidget(QWidget* parent = Q_NULLPTR);

private:
	Ui::MyWidgetClass ui;

	Teacher* teacher;
	Student* student;

	void classIsOver();
};
