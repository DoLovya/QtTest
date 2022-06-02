#include "Widget.h"
#include <qstring.h>

Widget::Widget(QWidget* parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	// treeWidget树控件使用

	// 设置水平头
	ui.treeWidget->setHeaderLabels(QStringList() << "英雄" << "英雄介绍");

	QTreeWidgetItem* item = new QTreeWidgetItem(QStringList() << "力量");
	// 加载顶层的节点
	ui.treeWidget->addTopLevelItem(item);
	item = new QTreeWidgetItem(QStringList() << "敏捷");
	// 加载顶层的节点
	ui.treeWidget->addTopLevelItem(item);
	item = new QTreeWidgetItem(QStringList() << "智力");
	// 加载顶层的节点
	ui.treeWidget->addTopLevelItem(item);

	QTreeWidgetItem* item1 = new QTreeWidgetItem(QStringList() << "刚被猪" << "前排坦克");
	item->addChild(item1);
}
