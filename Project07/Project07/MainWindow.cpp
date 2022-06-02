#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <qdebug.h>
#include <qlistwidget.h>
#include <qlistview.h>

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

	//// 利用listWidget写诗
	//QListWidgetItem* item = new QListWidgetItem("锄禾日当午");
	//// 将一行诗放入ListWidget控件中
	//ui.listWidget->addItem(item);
	//item->setTextAlignment(Qt::AlignHCenter);

	QStringList list;
	list.append("锄禾日当午");
	list.append("汗滴禾下土");
	list.append("谁知盘中餐");
	list.append("粒粒皆辛苦");
	ui.listWidget->addItems(list);
}
