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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetClass
{
public:
	QStackedWidget* stackedWidget;
	QWidget* page;
	QPushButton* pushButton;
	QWidget* page_2;
	QPushButton* pushButton_2;
	QPushButton* pushButtonGo1;
	QPushButton* pushButtonGo2;
	QComboBox* comboBox;
	QPushButton* pushButtonSelect;

	void setupUi(QWidget* WidgetClass)
	{
		if (WidgetClass->objectName().isEmpty())
			WidgetClass->setObjectName(QString::fromUtf8("WidgetClass"));
		WidgetClass->resize(600, 400);
		stackedWidget = new QStackedWidget(WidgetClass);
		stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
		stackedWidget->setGeometry(QRect(10, 10, 291, 201));
		page = new QWidget();
		page->setObjectName(QString::fromUtf8("page"));
		pushButton = new QPushButton(page);
		pushButton->setObjectName(QString::fromUtf8("pushButton"));
		pushButton->setGeometry(QRect(20, 20, 75, 23));
		stackedWidget->addWidget(page);
		page_2 = new QWidget();
		page_2->setObjectName(QString::fromUtf8("page_2"));
		pushButton_2 = new QPushButton(page_2);
		pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
		pushButton_2->setGeometry(QRect(30, 30, 75, 23));
		stackedWidget->addWidget(page_2);
		pushButtonGo1 = new QPushButton(WidgetClass);
		pushButtonGo1->setObjectName(QString::fromUtf8("pushButtonGo1"));
		pushButtonGo1->setGeometry(QRect(60, 210, 75, 23));
		pushButtonGo2 = new QPushButton(WidgetClass);
		pushButtonGo2->setObjectName(QString::fromUtf8("pushButtonGo2"));
		pushButtonGo2->setGeometry(QRect(180, 210, 75, 23));
		comboBox = new QComboBox(WidgetClass);
		comboBox->setObjectName(QString::fromUtf8("comboBox"));
		comboBox->setGeometry(QRect(280, 270, 69, 22));
		pushButtonSelect = new QPushButton(WidgetClass);
		pushButtonSelect->setObjectName(QString::fromUtf8("pushButtonSelect"));
		pushButtonSelect->setGeometry(QRect(410, 270, 75, 23));

		retranslateUi(WidgetClass);

		stackedWidget->setCurrentIndex(0);


		QMetaObject::connectSlotsByName(WidgetClass);
	} // setupUi

	void retranslateUi(QWidget* WidgetClass)
	{
		WidgetClass->setWindowTitle(QCoreApplication::translate("WidgetClass", "Widget", nullptr));
		pushButton->setText(QCoreApplication::translate("WidgetClass", "1", nullptr));
		pushButton_2->setText(QCoreApplication::translate("WidgetClass", "2", nullptr));
		pushButtonGo1->setText(QCoreApplication::translate("WidgetClass", "go1", nullptr));
		pushButtonGo2->setText(QCoreApplication::translate("WidgetClass", "go2", nullptr));
		pushButtonSelect->setText(QCoreApplication::translate("WidgetClass", "\351\200\211\344\270\255\345\257\271", nullptr));
	} // retranslateUi

};

namespace Ui {
	class WidgetClass : public Ui_WidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
