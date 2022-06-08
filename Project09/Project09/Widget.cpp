#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// TableWidget控件
	// 设置列数
	ui.tableWidget->setColumnCount(3);

	// 设置水平表头
	ui.tableWidget->setHorizontalHeaderLabels(
		QStringList() << "姓名" << "性别" << "年龄"
	);

	// 设置行数
	ui.tableWidget->setRowCount(5);

	// 设置正文
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++) {
			QString value = QString::number(i * 3 + j);
			ui.tableWidget->setItem(
				i,
				j,
				new QTableWidgetItem(value)
			);
		}
	}
}
