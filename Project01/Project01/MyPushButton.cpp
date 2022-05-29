#include "MyPushButton.h"
#include <QDebug>

#pragma execution_character_set("utf-8")

MyPushButton::MyPushButton(QWidget* parent)
	: QPushButton(parent)
{
	qDebug() << "#: MyPushButton()";
}

MyPushButton::~MyPushButton()
{
	qDebug() << "#: ~MyPushButton()";
}