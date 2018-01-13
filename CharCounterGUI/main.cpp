#include "CharCounterGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CharCounterGUI w;
	w.show();
	return a.exec();
}
