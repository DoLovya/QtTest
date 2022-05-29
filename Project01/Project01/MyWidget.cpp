#include "MyWidget.h"
#include "MyPushButton.h"

#include <qpushbutton.h> // 按钮控件的头文件
#include <QDebug>

#pragma execution_character_set("utf-8")

#include <iostream>

MyWidget::MyWidget(QWidget* parent)
	: QMainWindow(parent)
{

	// 创建第一个按钮
	QPushButton* button1 = new QPushButton();
	// 设置父亲窗口
	button1->setParent(this);
	// 设置文本
	button1->setText("第一个按钮");
	// 设置几何属性
	button1->setGeometry(300, 200, 80, 40);

	// 创建第二个按钮
	QPushButton* button2 = new QPushButton("第二个按钮", this);
	// 移动按钮
	button2->move({ 10, 10 });
	// 重置按钮大小
	button2->resize(100, 100);

	// 重置窗口大小
	this->resize(1000, 600);
	// 设置固定窗口
	// 设置窗口不可缩放
	this->setFixedSize({ 1000, 600 });
	// 设置窗口标题
	this->setWindowTitle("第一个窗口");

	// 创建一个自己的按钮对象
	MyPushButton* myButton = new MyPushButton();
	myButton->setText("我自己的按钮");
	myButton->move(200, 0);
	myButton->setParent(this);
	myButton->resize(100, 100);

	// 需求：点击我自己的按钮，关闭窗口
	// 参数1：信号的发送者 参数2：发送的信号（函数地址）
	// 参数3：信号的接收者 参数4：处理的槽函数
	connect(myButton, &QPushButton::clicked, this, &MyWidget::close);
}

MyWidget::~MyWidget()
{
	qDebug() << "#: ~MyWindow()";
}