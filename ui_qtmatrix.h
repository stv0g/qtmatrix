/********************************************************************************
** Form generated from reading ui file 'qtmatrix.ui'
**
** Created: Sun Jan 25 20:23:06 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QTMATRIX_H
#define UI_QTMATRIX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include <drawwidget.h>

QT_BEGIN_NAMESPACE

class Ui_QTMatrixClass
{
public:
    QAction *actionQuit;
    QAction *actionAddPoint;
    QAction *actionDelPoint;
    QAction *actionLoadPoints;
    QAction *actionSavePoints;
    QAction *actionShowMidPoint;
    QAction *actionSelectAll;
    QAction *actionAbout;
    QAction *actionSelect;
    QAction *actionDelete;
    QAction *actionLasso;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    drawWidget *widget;
    QMenuBar *menubar;
    QMenu *menuDatei;
    QMenu *menuAnzeige;
    QMenu *menuBearbeiten;
    QMenu *menuHilfe;
    QMenu *menuTSP;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QTMatrixClass)
    {
    if (QTMatrixClass->objectName().isEmpty())
        QTMatrixClass->setObjectName(QString::fromUtf8("QTMatrixClass"));
    QTMatrixClass->resize(674, 371);
    actionQuit = new QAction(QTMatrixClass);
    actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
    actionAddPoint = new QAction(QTMatrixClass);
    actionAddPoint->setObjectName(QString::fromUtf8("actionAddPoint"));
    actionAddPoint->setCheckable(true);
    actionAddPoint->setChecked(false);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/icons/add.png")), QIcon::Normal, QIcon::Off);
    actionAddPoint->setIcon(icon);
    actionDelPoint = new QAction(QTMatrixClass);
    actionDelPoint->setObjectName(QString::fromUtf8("actionDelPoint"));
    actionDelPoint->setCheckable(true);
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8(":/icons/del.png")), QIcon::Normal, QIcon::Off);
    actionDelPoint->setIcon(icon1);
    actionLoadPoints = new QAction(QTMatrixClass);
    actionLoadPoints->setObjectName(QString::fromUtf8("actionLoadPoints"));
    actionSavePoints = new QAction(QTMatrixClass);
    actionSavePoints->setObjectName(QString::fromUtf8("actionSavePoints"));
    actionShowMidPoint = new QAction(QTMatrixClass);
    actionShowMidPoint->setObjectName(QString::fromUtf8("actionShowMidPoint"));
    actionShowMidPoint->setCheckable(true);
    actionSelectAll = new QAction(QTMatrixClass);
    actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
    actionAbout = new QAction(QTMatrixClass);
    actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
    actionSelect = new QAction(QTMatrixClass);
    actionSelect->setObjectName(QString::fromUtf8("actionSelect"));
    actionSelect->setCheckable(true);
    actionSelect->setChecked(true);
    actionDelete = new QAction(QTMatrixClass);
    actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
    actionLasso = new QAction(QTMatrixClass);
    actionLasso->setObjectName(QString::fromUtf8("actionLasso"));
    centralwidget = new QWidget(QTMatrixClass);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    centralwidget->setGeometry(QRect(0, 86, 674, 262));
    horizontalLayout = new QHBoxLayout(centralwidget);
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    widget = new drawWidget(centralwidget);
    widget->setObjectName(QString::fromUtf8("widget"));
    widget->setStyleSheet(QString::fromUtf8(""));

    horizontalLayout->addWidget(widget);

    QTMatrixClass->setCentralWidget(centralwidget);
    menubar = new QMenuBar(QTMatrixClass);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 674, 26));
    menuDatei = new QMenu(menubar);
    menuDatei->setObjectName(QString::fromUtf8("menuDatei"));
    menuAnzeige = new QMenu(menubar);
    menuAnzeige->setObjectName(QString::fromUtf8("menuAnzeige"));
    menuBearbeiten = new QMenu(menubar);
    menuBearbeiten->setObjectName(QString::fromUtf8("menuBearbeiten"));
    menuHilfe = new QMenu(menubar);
    menuHilfe->setObjectName(QString::fromUtf8("menuHilfe"));
    menuTSP = new QMenu(menubar);
    menuTSP->setObjectName(QString::fromUtf8("menuTSP"));
    QTMatrixClass->setMenuBar(menubar);
    statusbar = new QStatusBar(QTMatrixClass);
    statusbar->setObjectName(QString::fromUtf8("statusbar"));
    statusbar->setGeometry(QRect(0, 348, 674, 23));
    QTMatrixClass->setStatusBar(statusbar);
    toolBar = new QToolBar(QTMatrixClass);
    toolBar->setObjectName(QString::fromUtf8("toolBar"));
    toolBar->setGeometry(QRect(0, 26, 674, 60));
    toolBar->setMovable(true);
    toolBar->setAllowedAreas(Qt::NoToolBarArea);
    toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    QTMatrixClass->addToolBar(Qt::TopToolBarArea, toolBar);

    menubar->addAction(menuDatei->menuAction());
    menubar->addAction(menuBearbeiten->menuAction());
    menubar->addAction(menuAnzeige->menuAction());
    menubar->addAction(menuTSP->menuAction());
    menubar->addAction(menuHilfe->menuAction());
    menuDatei->addAction(actionSavePoints);
    menuDatei->addAction(actionLoadPoints);
    menuDatei->addSeparator();
    menuDatei->addAction(actionQuit);
    menuAnzeige->addAction(actionShowMidPoint);
    menuBearbeiten->addAction(actionSelectAll);
    menuBearbeiten->addAction(actionDelete);
    menuHilfe->addAction(actionAbout);
    menuTSP->addAction(actionLasso);
    toolBar->addAction(actionSelect);
    toolBar->addAction(actionAddPoint);
    toolBar->addAction(actionDelPoint);

    retranslateUi(QTMatrixClass);
    QObject::connect(actionAddPoint, SIGNAL(toggled(bool)), widget, SLOT(setAddMode(bool)));
    QObject::connect(actionDelPoint, SIGNAL(toggled(bool)), widget, SLOT(setDelMode(bool)));
    QObject::connect(actionLoadPoints, SIGNAL(activated()), widget, SLOT(loadPoints()));
    QObject::connect(actionSavePoints, SIGNAL(activated()), widget, SLOT(savePoints()));
    QObject::connect(actionQuit, SIGNAL(activated()), QTMatrixClass, SLOT(close()));
    QObject::connect(widget, SIGNAL(changed(int,int,int)), QTMatrixClass, SLOT(updateStatus(int,int,int)));
    QObject::connect(actionShowMidPoint, SIGNAL(toggled(bool)), widget, SLOT(setShowMidPoint(bool)));
    QObject::connect(actionSelectAll, SIGNAL(activated()), widget, SLOT(selectAll()));
    QObject::connect(actionSelect, SIGNAL(toggled(bool)), widget, SLOT(setSelectMode(bool)));
    QObject::connect(actionDelete, SIGNAL(activated()), widget, SLOT(deletePoints()));
    QObject::connect(actionLasso, SIGNAL(activated()), widget, SLOT(connectLasso()));

    QMetaObject::connectSlotsByName(QTMatrixClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTMatrixClass)
    {
    QTMatrixClass->setWindowTitle(QApplication::translate("QTMatrixClass", "QTMatrix", 0, QApplication::UnicodeUTF8));
    actionQuit->setText(QApplication::translate("QTMatrixClass", "Beenden", 0, QApplication::UnicodeUTF8));
    actionAddPoint->setText(QApplication::translate("QTMatrixClass", "neuer Punkt", 0, QApplication::UnicodeUTF8));
    actionDelPoint->setText(QApplication::translate("QTMatrixClass", "Punkt entfernen", 0, QApplication::UnicodeUTF8));
    actionDelPoint->setShortcut(QApplication::translate("QTMatrixClass", "Del", 0, QApplication::UnicodeUTF8));
    actionLoadPoints->setText(QApplication::translate("QTMatrixClass", "\303\226ffnen", 0, QApplication::UnicodeUTF8));
    actionLoadPoints->setShortcut(QApplication::translate("QTMatrixClass", "O", 0, QApplication::UnicodeUTF8));
    actionSavePoints->setText(QApplication::translate("QTMatrixClass", "Speichern", 0, QApplication::UnicodeUTF8));
    actionSavePoints->setShortcut(QApplication::translate("QTMatrixClass", "S", 0, QApplication::UnicodeUTF8));
    actionShowMidPoint->setText(QApplication::translate("QTMatrixClass", "Mittelpunkt", 0, QApplication::UnicodeUTF8));
    actionShowMidPoint->setShortcut(QApplication::translate("QTMatrixClass", "M", 0, QApplication::UnicodeUTF8));
    actionSelectAll->setText(QApplication::translate("QTMatrixClass", "Alles ausw\303\244hlen", 0, QApplication::UnicodeUTF8));
    actionSelectAll->setShortcut(QApplication::translate("QTMatrixClass", "A", 0, QApplication::UnicodeUTF8));
    actionAbout->setText(QApplication::translate("QTMatrixClass", "\303\234ber", 0, QApplication::UnicodeUTF8));
    actionSelect->setText(QApplication::translate("QTMatrixClass", "Ausw\303\244hlen", 0, QApplication::UnicodeUTF8));
    actionDelete->setText(QApplication::translate("QTMatrixClass", "Entfernen", 0, QApplication::UnicodeUTF8));
    actionDelete->setShortcut(QApplication::translate("QTMatrixClass", "E", 0, QApplication::UnicodeUTF8));
    actionLasso->setText(QApplication::translate("QTMatrixClass", "Lasso", 0, QApplication::UnicodeUTF8));
    menuDatei->setTitle(QApplication::translate("QTMatrixClass", "&Datei", 0, QApplication::UnicodeUTF8));
    menuAnzeige->setTitle(QApplication::translate("QTMatrixClass", "Anzeige", 0, QApplication::UnicodeUTF8));
    menuBearbeiten->setTitle(QApplication::translate("QTMatrixClass", "Bearbeiten", 0, QApplication::UnicodeUTF8));
    menuHilfe->setTitle(QApplication::translate("QTMatrixClass", "Hilfe", 0, QApplication::UnicodeUTF8));
    menuTSP->setTitle(QApplication::translate("QTMatrixClass", "TSP", 0, QApplication::UnicodeUTF8));
    toolBar->setWindowTitle(QApplication::translate("QTMatrixClass", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QTMatrixClass: public Ui_QTMatrixClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTMATRIX_H
