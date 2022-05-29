#include "MyWidget.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	// 应用程序对象，只能有一个
	QApplication a(argc, argv);
	// 我的窗口 父类：QMainWindow
	MyWidget w;
	// 窗口默认不显示
	// show()可以显示窗口
	w.show();

	// 让应用程序对象进入消息循环
	return a.exec();
}
