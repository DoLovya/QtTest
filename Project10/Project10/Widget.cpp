#include "Widget.h"

Widget::Widget(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// 栈控件使用

	// 设置默认定位为2
	ui.stackedWidget->setCurrentIndex(1);

	// go1按钮
	connect(
		ui.pushButtonGo1,
		&QPushButton::clicked,
		this,
		[=]() {
			ui.stackedWidget->setCurrentIndex(0);
		}
	);

	// go2按钮
	connect(
		ui.pushButtonGo2,
		&QPushButton::clicked,
		this,
		[=]() {
			ui.stackedWidget->setCurrentIndex(1);
		}
	);

	// 下拉框
	ui.comboBox->addItem("对");
	ui.comboBox->addItem("错");

	// 点击按钮，选中对选项
	connect(
		ui.pushButtonSelect,
		&QPushButton::clicked,
		this,
		[=]() {
			ui.comboBox->setCurrentIndex(0);
		}
	);
}
