#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Project01.h"

class Project01 : public QMainWindow
{
    Q_OBJECT

public:
    Project01(QWidget *parent = Q_NULLPTR);

private:
    Ui::Project01Class ui;
};
