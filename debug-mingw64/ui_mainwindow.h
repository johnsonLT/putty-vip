/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qmylistwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionputty;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QMyListWidget *ShellList;
    QVBoxLayout *attrVLayout;
    QLineEdit *lineEdit;
    QTableWidget *shellAttrTable;
    QGroupBox *ShellGroup;
    QMenuBar *menuBar;
    QMenu *menuPutty;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1025, 710);
        actionputty = new QAction(MainWindow);
        actionputty->setObjectName(QString::fromUtf8("actionputty"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/putty_icon"), QSize(), QIcon::Normal, QIcon::Off);
        actionputty->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(1, 1, 1, 1);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ShellList = new QMyListWidget(centralWidget);
        ShellList->setObjectName(QString::fromUtf8("ShellList"));
        ShellList->setContextMenuPolicy(Qt::CustomContextMenu);

        verticalLayout->addWidget(ShellList);

        attrVLayout = new QVBoxLayout();
        attrVLayout->setSpacing(6);
        attrVLayout->setObjectName(QString::fromUtf8("attrVLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setCursor(QCursor(Qt::BlankCursor));
        lineEdit->setMouseTracking(false);
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setAcceptDrops(true);
        lineEdit->setFrame(false);
        lineEdit->setReadOnly(true);

        attrVLayout->addWidget(lineEdit);

        shellAttrTable = new QTableWidget(centralWidget);
        shellAttrTable->setObjectName(QString::fromUtf8("shellAttrTable"));

        attrVLayout->addWidget(shellAttrTable);


        verticalLayout->addLayout(attrVLayout);

        verticalLayout->setStretch(0, 3);

        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        ShellGroup = new QGroupBox(centralWidget);
        ShellGroup->setObjectName(QString::fromUtf8("ShellGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ShellGroup->sizePolicy().hasHeightForWidth());
        ShellGroup->setSizePolicy(sizePolicy);

        gridLayout->addWidget(ShellGroup, 0, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 4);

        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1025, 23));
        menuPutty = new QMenu(menuBar);
        menuPutty->setObjectName(QString::fromUtf8("menuPutty"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuPutty->menuAction());
        mainToolBar->addAction(actionputty);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "putty-vvvip", nullptr));
        actionputty->setText(QCoreApplication::translate("MainWindow", "putty", nullptr));
#if QT_CONFIG(tooltip)
        actionputty->setToolTip(QCoreApplication::translate("MainWindow", "open putty", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEdit->setText(QCoreApplication::translate("MainWindow", "\345\261\236\346\200\247", nullptr));
        ShellGroup->setTitle(QCoreApplication::translate("MainWindow", "\346\234\254\345\234\260Shell", nullptr));
        menuPutty->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225\357\274\210\346\234\252\345\274\200\345\217\221\357\274\211", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
