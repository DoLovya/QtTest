#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Project01.h"

class MyWidget : public QMainWindow
{
	Q_OBJECT

public:
	MyWidget(QWidget* parent = Q_NULLPTR);
	~MyWidget();

private:
	Ui::Project01Class ui;
};
