#include "MainWindow.h"
#include <qmenu.h>
#include <qtoolbar.h>
#include <qpushbutton.h>
#include <qstatusbar.h>
#include <qlabel.h>
#include <qdockwidget.h>
#include <qtextedit.h>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	// 重置窗口大小
	resize(600, 400);

	// 菜单栏创建
	QMenuBar* bar = menuBar();
	// 将菜单栏放入窗口中
	setMenuBar(bar);

	// 创建菜单
	QMenu* fileMenu = bar->addMenu("文件");
	QMenu* editMenu = bar->addMenu("编辑");

	// 创建菜单项
	QAction* newAction = fileMenu->addAction("新建");
	// 添加分隔符
	fileMenu->addSeparator();
	fileMenu->addAction("打开");

	// 工具栏，可以有多个
	QToolBar* toolBar = new QToolBar(this);
	addToolBar(Qt::LeftToolBarArea, toolBar);

	// 后期设置 只允许 左右停靠
	toolBar->setAllowedAreas(Qt::LeftToolBarArea | Qt::RightToolBarArea);
	// 设置是否浮动
	toolBar->setFloatable(false);
	// 设置移动
	toolBar->setMovable(false);

	// 工具栏中设置内容
	toolBar->addAction(newAction);

	// 工具栏中添加控件
	QPushButton* button = new QPushButton("aa", this);
	toolBar->addWidget(button);

	// 状态栏，最多有一个
	QStatusBar* stBar = statusBar();
	setStatusBar(stBar);
	// 放标签控件
	QLabel* label1 = new QLabel("提示信息", this);
	stBar->addWidget(label1);
	QLabel* label2 = new QLabel("右侧提示信息", this);
	stBar->addPermanentWidget(label2);

	// 铆接部件（浮动窗口），可以有多个
	QDockWidget* dockWidget = new QDockWidget("浮动", this);
	addDockWidget(Qt::BottomDockWidgetArea, dockWidget);

	dockWidget->setAllowedAreas(Qt::TopDockWidgetArea | Qt::BottomDockWidgetArea);

	// 设置中心部件
	QTextEdit* edit = new QTextEdit(this);
	setCentralWidget(edit);
}
