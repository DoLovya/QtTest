#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <qdebug.h>

MainWindow::MainWindow(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// 设置单选按钮默认男
	ui.radioButtonMan->setChecked(true);

	// 选中女后，打印信息
	connect(ui.radioButton_2, &QRadioButton::clicked, this, [=]() {
		qDebug() << "选中女的啦！";
		}
	);

	// 多选按钮
	connect(ui.checkBoxA, &QCheckBox::stateChanged, this, [=](int state) {
		qDebug() << state;
		}
	);
}
