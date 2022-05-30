#include "MyWidget.h"
#include <qpushbutton.h>

// Teacher类
// Student类

MyWidget::MyWidget(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// 创建一个老师类
	this->teacher = new Teacher(this);

	// 创建一个学生类
	this->student = new Student(this);

	// 无参数的连接
	//connect(teacher, &Teacher::hungry, student, &Student::treat);
	// 有参数的连接
	void(Teacher:: * teacherSignal)(QString) = &Teacher::hungry;
	void(Student:: * studentSignal)(QString) = &Student::treat;
	connect(teacher, teacherSignal, student, studentSignal);

	// 下课
	// classIsOver();

	// 点击一个下课的按钮，然后下课
	QPushButton* button = new QPushButton("下课", this);

	// 点击按钮触发下课
	// connect(button, &QPushButton::clicked, this, &MyWidget::classIsOver);

	//void(Teacher:: * teacherSignal2)(void) = &Teacher::hungry;
	//void(Student:: * studentSignal2)(void) = &Student::treat;
	//connect(teacher, teacherSignal2, student, studentSignal2);

	//connect(button, &QPushButton::clicked, teacher, teacherSignal2);
	//connect(button, &QPushButton::clicked, this, &MyWidget::classIsOver);

	// 关闭连接
	//disconnect(button, &QPushButton::clicked, teacher, teacherSignal2);

	// 利用QT4信号槽，连接无参版本
	//connect(teacher, SIGNAL(hungry()), student, SLOT(treat()));

	//int num = 10;
	//auto f = [=]() mutable {
	//	num = 100;
	//	button->setText("aaaa");
	//};

	//f();

	connect(button, &QPushButton::clicked, this, [=]() {
		//this->close();
		teacher->hungry("宫保鸡丁");
		});
}

void MyWidget::classIsOver()
{
	//emit teacher->hungry();
	emit teacher->hungry("宫保鸡丁");
}