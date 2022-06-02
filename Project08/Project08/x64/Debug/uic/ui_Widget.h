/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClass
{
public:
	QTreeWidget* treeWidget;

	void setupUi(QWidget* WidgetClass)
	{
		if (WidgetClass->objectName().isEmpty())
			WidgetClass->setObjectName(QString::fromUtf8("WidgetClass"));
		WidgetClass->resize(776, 528);
		treeWidget = new QTreeWidget(WidgetClass);
		QTreeWidgetItem* __qtreewidgetitem = new QTreeWidgetItem();
		__qtreewidgetitem->setText(0, QString::fromUtf8("1"));
		treeWidget->setHeaderItem(__qtreewidgetitem);
		treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
		treeWidget->setGeometry(QRect(40, 20, 601, 391));

		retranslateUi(WidgetClass);

		QMetaObject::connectSlotsByName(WidgetClass);
	} // setupUi

	void retranslateUi(QWidget* WidgetClass)
	{
		WidgetClass->setWindowTitle(QCoreApplication::translate("WidgetClass", "Widget", nullptr));
	} // retranslateUi

};

namespace Ui {
	class WidgetClass : public Ui_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
