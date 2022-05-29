#pragma once

#include <QObject>

class Student : public QObject
{
	Q_OBJECT

public:
	Student(QObject* parent);
	~Student();

signals:

public slots:
	/// <slots>
	/// 自定义槽，写到slots下
	/// 返回值是void，需要声明，也需要实现
	/// 可以有参数，可以重载
	/// </slots>
	void treat();
};
