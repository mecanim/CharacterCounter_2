/********************************************************************************
** Form generated from reading UI file 'CharCounterGUI.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARCOUNTERGUI_H
#define UI_CHARCOUNTERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CharCounterGUIClass
{
public:
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CharCounterGUIClass)
    {
        if (CharCounterGUIClass->objectName().isEmpty())
            CharCounterGUIClass->setObjectName(QStringLiteral("CharCounterGUIClass"));
        CharCounterGUIClass->resize(600, 400);
        centralWidget = new QWidget(CharCounterGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 20, 531, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(horizontalLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        CharCounterGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CharCounterGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        CharCounterGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CharCounterGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CharCounterGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CharCounterGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CharCounterGUIClass->setStatusBar(statusBar);

        retranslateUi(CharCounterGUIClass);

        QMetaObject::connectSlotsByName(CharCounterGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *CharCounterGUIClass)
    {
        CharCounterGUIClass->setWindowTitle(QApplication::translate("CharCounterGUIClass", "CharCounterGUI", nullptr));
        pushButton->setText(QApplication::translate("CharCounterGUIClass", "Check", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CharCounterGUIClass: public Ui_CharCounterGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARCOUNTERGUI_H
