#include "Student.h"
#include <QDebug>

Student::Student(QObject* parent)
	: QObject(parent)
{
}

Student::~Student()
{
}

void Student::treat()
{
	qDebug() << "请客吃饭！";
}
