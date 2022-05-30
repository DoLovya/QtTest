#pragma once

#include <QObject>

class Teacher : public QObject
{
	Q_OBJECT

public:
	Teacher(QObject* parent);
	~Teacher();

signals:
	/// <summary>
	/// 自定义信号，写到signals下
	/// 返回值是void，只需要声明，不需要实现
	/// 可以有参数，可以重载
	/// </summary>
	void hungry();

	void hungry(QString foodName);
public slots:

};
