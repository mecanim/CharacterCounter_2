#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_CharCounterGUI.h"

class CharCounterGUI : public QMainWindow
{
	Q_OBJECT

public:
	CharCounterGUI(QWidget *parent = Q_NULLPTR);
	
	private slots:
	void on_pushButton_clicked();
	void on_lineEdit_returnPressed();

private:
	Ui::CharCounterGUIClass ui;
	/*QPushButton *pushButton;
	QLineEdit *lineEdit;*/
};
