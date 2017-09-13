/********************************************************************************
** Form generated from reading UI file 'helpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPWINDOW_H
#define UI_HELPWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_HelpWindowClass
{
public:
    QVBoxLayout *verticalLayout;
    QWebView *view;

    void setupUi(QDialog *HelpWindowClass)
    {
        if (HelpWindowClass->objectName().isEmpty())
            HelpWindowClass->setObjectName(QStringLiteral("HelpWindowClass"));
        HelpWindowClass->resize(588, 584);
        verticalLayout = new QVBoxLayout(HelpWindowClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        view = new QWebView(HelpWindowClass);
        view->setObjectName(QStringLiteral("view"));

        verticalLayout->addWidget(view);

        view->raise();

        retranslateUi(HelpWindowClass);

        QMetaObject::connectSlotsByName(HelpWindowClass);
    } // setupUi

    void retranslateUi(QDialog *HelpWindowClass)
    {
        HelpWindowClass->setWindowTitle(QApplication::translate("HelpWindowClass", "HelpWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class HelpWindowClass: public Ui_HelpWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPWINDOW_H
