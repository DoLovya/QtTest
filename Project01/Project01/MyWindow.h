#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Project01.h"

class MyWindow : public QMainWindow
{
	Q_OBJECT

public:
	MyWindow(QWidget* parent = Q_NULLPTR);

private:
	Ui::Project01Class ui;
};
