#include "MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	// 重置窗口大小
	resize(600, 400);

	// 菜单栏创建
	QMenuBar* bar = menuBar();
	// 将菜单栏放入窗口中
	setMenuBar(bar);

	// 创建菜单
}
