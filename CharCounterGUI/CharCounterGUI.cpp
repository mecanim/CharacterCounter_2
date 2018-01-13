#include "CharCounterGUI.h"
#include "qmessagebox.h"

CharCounterGUI::CharCounterGUI(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void CharCounterGUI::on_pushButton_clicked()
{
	QString enteredText = ui.lineEdit->text();

	if (enteredText.isEmpty())
		QMessageBox::information(this, "Attention", "String is empty. Please enter the string.");
	else
		QMessageBox::information(this, "Report", "The string " + enteredText + " contains " + QString::number(enteredText.size()) + " characters.");
}

void CharCounterGUI::on_lineEdit_returnPressed()
{
	on_pushButton_clicked();
}