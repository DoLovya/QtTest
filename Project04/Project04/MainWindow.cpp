#include "MainWindow.h"
#include "ui_MainWindow.h"

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	ui.actionnew->setIcon(QIcon(":/Saved Pictures/01.jpg"));
}
