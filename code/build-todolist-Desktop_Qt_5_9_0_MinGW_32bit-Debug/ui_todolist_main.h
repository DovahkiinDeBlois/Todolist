/********************************************************************************
** Form generated from reading UI file 'todolist_main.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TODOLIST_MAIN_H
#define UI_TODOLIST_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Todolist_Main
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Todolist_Main)
    {
        if (Todolist_Main->objectName().isEmpty())
            Todolist_Main->setObjectName(QStringLiteral("Todolist_Main"));
        Todolist_Main->resize(400, 300);
        menuBar = new QMenuBar(Todolist_Main);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        Todolist_Main->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Todolist_Main);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Todolist_Main->addToolBar(mainToolBar);
        centralWidget = new QWidget(Todolist_Main);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Todolist_Main->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Todolist_Main);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Todolist_Main->setStatusBar(statusBar);

        retranslateUi(Todolist_Main);

        QMetaObject::connectSlotsByName(Todolist_Main);
    } // setupUi

    void retranslateUi(QMainWindow *Todolist_Main)
    {
        Todolist_Main->setWindowTitle(QApplication::translate("Todolist_Main", "Todolist_Main", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Todolist_Main: public Ui_Todolist_Main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TODOLIST_MAIN_H
