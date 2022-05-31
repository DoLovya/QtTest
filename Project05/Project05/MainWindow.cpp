#include "MainWindow.h"
#include "ui_MainWindow.h"
#include <qdialog.h>
#include <qdebug.h>
#include <qmessagebox.h>
#include <qcolordialog.h>
#include <qfiledialog.h>
#include <qfontdialog.h>
#include <qfont.h>

MainWindow::MainWindow(QWidget* parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	// 点击新建按钮，弹出一个对话框
	connect(ui.actionNew, &QAction::triggered, this, [=]()
		{
			//// 对话框分类
			//// 模态对话框（不可以对其他窗口进行操作）
			//// 非模态对话框（可以对其他窗口进行操作）
			//QDialog dlg(this);
			//dlg.resize(200, 100);
			//dlg.exec();

			//qDebug() << "模态对话框弹出了";

			//// 非模态对话框
			//QDialog* dlg2 = new QDialog(this);
			//dlg2->show();
			//dlg2->setAttribute(Qt::WA_DeleteOnClose);

			//qDebug() << "非模态对话框弹出了";

			//// 消息对话框
			//// 错误对话框
			//QMessageBox::critical(this, "critical", "错误");

			//// 信息对话框
			//QMessageBox::information(this, "info", "信息");

			//// 提问对话框
			//int click = QMessageBox::question(this, "ques", "提问", QMessageBox::Save | QMessageBox::Cancel, QMessageBox::Save);
			//if (click == QMessageBox::Save) {
			//	qDebug() << "点击了保存！";
			//}
			//else {
			//	qDebug() << "点击了取消！";
			//}

			//// 警告对话框
			//QMessageBox::warning(this, "warning", "警告");

			//// 其他标准对话框
			//QColor color = QColorDialog::getColor(QColor(255, 0, 0, 255));
			//qDebug() << "r = " << color.red();
			//qDebug() << "g = " << color.green();
			//qDebug() << "b = " << color.blue();
			//qDebug() << "a = " << color.alpha();

			//// 文件对话框
			//QString str = QFileDialog::getOpenFileName(this, "打开文件", "C:/Users/zh306/Desktop/", "*.exe");
			//qDebug() << str;

			// 字体对话框
			bool flag;
			QFont font = QFontDialog::getFont(&flag, QFont("华为彩云", 20));
			qDebug() << "字体: " << font.family();
			qDebug() << "字号: " << font.pointSize();
			qDebug() << "是否加粗: " << font.bold();
			qDebug() << "是否倾斜: " << font.italic();
		}
	);
}