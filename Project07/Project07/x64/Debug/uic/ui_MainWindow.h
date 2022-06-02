/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
	QPushButton* pushButton;
	QToolButton* toolButton;
	QWidget* layoutWidget;
	QHBoxLayout* horizontalLayout;
	QGroupBox* groupBox;
	QVBoxLayout* verticalLayout;
	QRadioButton* radioButtonMan;
	QRadioButton* radioButton_2;
	QGroupBox* groupBox_2;
	QVBoxLayout* verticalLayout_2;
	QRadioButton* radioButton_3;
	QRadioButton* radioButton_4;
	QGroupBox* groupBox_3;
	QVBoxLayout* verticalLayout_3;
	QCheckBox* checkBoxA;
	QCheckBox* checkBoxB;
	QCheckBox* checkBoxC;
	QCheckBox* checkBoxD;
	QListWidget* listWidget;
	QPushButton* pushButton_2;

	void setupUi(QWidget* MainWindowClass)
	{
		if (MainWindowClass->objectName().isEmpty())
			MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
		MainWindowClass->resize(695, 448);
		pushButton = new QPushButton(MainWindowClass);
		pushButton->setObjectName(QString::fromUtf8("pushButton"));
		pushButton->setGeometry(QRect(70, 20, 75, 23));
		toolButton = new QToolButton(MainWindowClass);
		toolButton->setObjectName(QString::fromUtf8("toolButton"));
		toolButton->setGeometry(QRect(50, 50, 121, 91));
		QIcon icon;
		icon.addFile(QString::fromUtf8(":/Image/01.jpg"), QSize(), QIcon::Normal, QIcon::Off);
		toolButton->setIcon(icon);
		toolButton->setIconSize(QSize(50, 50));
		toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
		toolButton->setAutoRaise(true);
		layoutWidget = new QWidget(MainWindowClass);
		layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
		layoutWidget->setGeometry(QRect(40, 310, 118, 72));
		horizontalLayout = new QHBoxLayout(layoutWidget);
		horizontalLayout->setSpacing(6);
		horizontalLayout->setContentsMargins(11, 11, 11, 11);
		horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
		horizontalLayout->setContentsMargins(0, 0, 0, 0);
		groupBox = new QGroupBox(layoutWidget);
		groupBox->setObjectName(QString::fromUtf8("groupBox"));
		verticalLayout = new QVBoxLayout(groupBox);
		verticalLayout->setSpacing(6);
		verticalLayout->setContentsMargins(11, 11, 11, 11);
		verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
		radioButtonMan = new QRadioButton(groupBox);
		radioButtonMan->setObjectName(QString::fromUtf8("radioButtonMan"));

		verticalLayout->addWidget(radioButtonMan);

		radioButton_2 = new QRadioButton(groupBox);
		radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

		verticalLayout->addWidget(radioButton_2);


		horizontalLayout->addWidget(groupBox);

		groupBox_2 = new QGroupBox(layoutWidget);
		groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
		verticalLayout_2 = new QVBoxLayout(groupBox_2);
		verticalLayout_2->setSpacing(6);
		verticalLayout_2->setContentsMargins(11, 11, 11, 11);
		verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
		radioButton_3 = new QRadioButton(groupBox_2);
		radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

		verticalLayout_2->addWidget(radioButton_3);

		radioButton_4 = new QRadioButton(groupBox_2);
		radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

		verticalLayout_2->addWidget(radioButton_4);


		horizontalLayout->addWidget(groupBox_2);

		groupBox_3 = new QGroupBox(MainWindowClass);
		groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
		groupBox_3->setGeometry(QRect(50, 150, 111, 121));
		verticalLayout_3 = new QVBoxLayout(groupBox_3);
		verticalLayout_3->setSpacing(6);
		verticalLayout_3->setContentsMargins(11, 11, 11, 11);
		verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
		checkBoxA = new QCheckBox(groupBox_3);
		checkBoxA->setObjectName(QString::fromUtf8("checkBoxA"));

		verticalLayout_3->addWidget(checkBoxA);

		checkBoxB = new QCheckBox(groupBox_3);
		checkBoxB->setObjectName(QString::fromUtf8("checkBoxB"));

		verticalLayout_3->addWidget(checkBoxB);

		checkBoxC = new QCheckBox(groupBox_3);
		checkBoxC->setObjectName(QString::fromUtf8("checkBoxC"));

		verticalLayout_3->addWidget(checkBoxC);

		checkBoxD = new QCheckBox(groupBox_3);
		checkBoxD->setObjectName(QString::fromUtf8("checkBoxD"));

		verticalLayout_3->addWidget(checkBoxD);

		listWidget = new QListWidget(MainWindowClass);
		listWidget->setObjectName(QString::fromUtf8("listWidget"));
		listWidget->setGeometry(QRect(210, 20, 461, 381));
		pushButton_2 = new QPushButton(MainWindowClass);
		pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
		pushButton_2->setGeometry(QRect(400, 400, 75, 23));

		retranslateUi(MainWindowClass);

		QMetaObject::connectSlotsByName(MainWindowClass);
	} // setupUi

	void retranslateUi(QWidget* MainWindowClass)
	{
		MainWindowClass->setWindowTitle(QCoreApplication::translate("MainWindowClass", "MainWindow", nullptr));
		pushButton->setText(QCoreApplication::translate("MainWindowClass", "\347\231\273\345\275\225", nullptr));
		toolButton->setText(QCoreApplication::translate("MainWindowClass", "\350\213\271\346\236\234\347\224\265\350\204\221", nullptr));
		groupBox->setTitle(QCoreApplication::translate("MainWindowClass", "\346\200\247\345\210\253", nullptr));
		radioButtonMan->setText(QCoreApplication::translate("MainWindowClass", "\347\224\267", nullptr));
		radioButton_2->setText(QCoreApplication::translate("MainWindowClass", "\345\245\263", nullptr));
		groupBox_2->setTitle(QCoreApplication::translate("MainWindowClass", "\346\230\257\345\220\246", nullptr));
		radioButton_3->setText(QCoreApplication::translate("MainWindowClass", "\346\230\257", nullptr));
		radioButton_4->setText(QCoreApplication::translate("MainWindowClass", "\345\220\246", nullptr));
		groupBox_3->setTitle(QCoreApplication::translate("MainWindowClass", "\351\200\211\346\213\251\351\242\230", nullptr));
		checkBoxA->setText(QCoreApplication::translate("MainWindowClass", "A", nullptr));
		checkBoxB->setText(QCoreApplication::translate("MainWindowClass", "B", nullptr));
		checkBoxC->setText(QCoreApplication::translate("MainWindowClass", "C", nullptr));
		checkBoxD->setText(QCoreApplication::translate("MainWindowClass", "D", nullptr));
		pushButton_2->setText(QCoreApplication::translate("MainWindowClass", "\347\231\273\345\275\225", nullptr));
	} // retranslateUi

};

namespace Ui {
	class MainWindowClass : public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
