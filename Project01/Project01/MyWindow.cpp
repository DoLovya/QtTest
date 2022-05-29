#include "MyWindow.h"
#include <qpushbutton.h> // 按钮控件的头文件
#pragma execution_character_set("utf-8")

MyWindow::MyWindow(QWidget* parent)
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
	resize(1000, 600);
	// 设置固定窗口
	// 设置窗口不可缩放
	setFixedSize({ 1000, 600 });
	// 设置窗口标题
	setWindowTitle("第一个窗口");
}

MyWindow::~MyWindow()
{

}