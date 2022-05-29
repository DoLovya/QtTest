#include "MyWidget.h"

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

	// 
	connect(teacher, &Teacher::hungry, student, &Student::treat);

	// 下课
	classIsOver();
}

void MyWidget::classIsOver()
{
	emit teacher->hungry();
}