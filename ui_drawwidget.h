/********************************************************************************
** Form generated from reading ui file 'drawwidget.ui'
**
** Created: Sun Jan 25 20:23:06 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DRAWWIDGET_H
#define UI_DRAWWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_drawWidgetClass
{
public:

    void setupUi(QWidget *drawWidgetClass)
    {
    if (drawWidgetClass->objectName().isEmpty())
        drawWidgetClass->setObjectName(QString::fromUtf8("drawWidgetClass"));
    drawWidgetClass->resize(400, 300);
    drawWidgetClass->setMouseTracking(true);
    drawWidgetClass->setAutoFillBackground(false);
    drawWidgetClass->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

    retranslateUi(drawWidgetClass);

    QMetaObject::connectSlotsByName(drawWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *drawWidgetClass)
    {
    drawWidgetClass->setWindowTitle(QApplication::translate("drawWidgetClass", "drawWidget", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(drawWidgetClass);
    } // retranslateUi

};

namespace Ui {
    class drawWidgetClass: public Ui_drawWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWWIDGET_H
