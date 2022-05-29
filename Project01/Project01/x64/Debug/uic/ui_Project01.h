/********************************************************************************
** Form generated from reading UI file 'Project01.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECT01_H
#define UI_PROJECT01_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Project01Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Project01Class)
    {
        if (Project01Class->objectName().isEmpty())
            Project01Class->setObjectName(QString::fromUtf8("Project01Class"));
        Project01Class->resize(600, 400);
        menuBar = new QMenuBar(Project01Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Project01Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Project01Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Project01Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(Project01Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Project01Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Project01Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Project01Class->setStatusBar(statusBar);

        retranslateUi(Project01Class);

        QMetaObject::connectSlotsByName(Project01Class);
    } // setupUi

    void retranslateUi(QMainWindow *Project01Class)
    {
        Project01Class->setWindowTitle(QCoreApplication::translate("Project01Class", "Project01", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Project01Class: public Ui_Project01Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECT01_H
