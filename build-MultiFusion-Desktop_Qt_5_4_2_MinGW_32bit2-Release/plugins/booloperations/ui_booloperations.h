/********************************************************************************
** Form generated from reading UI file 'booloperations.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOLOPERATIONS_H
#define UI_BOOLOPERATIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoolOperationsDock
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QToolButton *unionButton;
    QToolButton *subtractButton;
    QToolButton *intersectButton;
    QToolButton *excludeButton;
    QToolButton *divideButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *BoolOperationsDock)
    {
        if (BoolOperationsDock->objectName().isEmpty())
            BoolOperationsDock->setObjectName(QStringLiteral("BoolOperationsDock"));
        BoolOperationsDock->resize(270, 329);
        verticalLayout_2 = new QVBoxLayout(BoolOperationsDock);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        unionButton = new QToolButton(BoolOperationsDock);
        unionButton->setObjectName(QStringLiteral("unionButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/BoolOperations/images/union.png"), QSize(), QIcon::Normal, QIcon::Off);
        unionButton->setIcon(icon);
        unionButton->setIconSize(QSize(24, 16));
        unionButton->setAutoRaise(true);

        horizontalLayout->addWidget(unionButton);

        subtractButton = new QToolButton(BoolOperationsDock);
        subtractButton->setObjectName(QStringLiteral("subtractButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/BoolOperations/images/subtract.png"), QSize(), QIcon::Normal, QIcon::Off);
        subtractButton->setIcon(icon1);
        subtractButton->setIconSize(QSize(24, 16));
        subtractButton->setAutoRaise(true);

        horizontalLayout->addWidget(subtractButton);

        intersectButton = new QToolButton(BoolOperationsDock);
        intersectButton->setObjectName(QStringLiteral("intersectButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/BoolOperations/images/intersect.png"), QSize(), QIcon::Normal, QIcon::Off);
        intersectButton->setIcon(icon2);
        intersectButton->setIconSize(QSize(24, 16));
        intersectButton->setAutoRaise(true);

        horizontalLayout->addWidget(intersectButton);

        excludeButton = new QToolButton(BoolOperationsDock);
        excludeButton->setObjectName(QStringLiteral("excludeButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/BoolOperations/images/exclude.png"), QSize(), QIcon::Normal, QIcon::Off);
        excludeButton->setIcon(icon3);
        excludeButton->setIconSize(QSize(24, 16));
        excludeButton->setAutoRaise(true);

        horizontalLayout->addWidget(excludeButton);

        divideButton = new QToolButton(BoolOperationsDock);
        divideButton->setObjectName(QStringLiteral("divideButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/BoolOperations/images/divide.png"), QSize(), QIcon::Normal, QIcon::Off);
        divideButton->setIcon(icon4);
        divideButton->setIconSize(QSize(24, 16));
        divideButton->setAutoRaise(true);

        horizontalLayout->addWidget(divideButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 277, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(BoolOperationsDock);

        QMetaObject::connectSlotsByName(BoolOperationsDock);
    } // setupUi

    void retranslateUi(QWidget *BoolOperationsDock)
    {
        BoolOperationsDock->setWindowTitle(QApplication::translate("BoolOperationsDock", "Bool Operations", 0));
#ifndef QT_NO_TOOLTIP
        BoolOperationsDock->setToolTip(QApplication::translate("BoolOperationsDock", "Boolean operations on objects", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        unionButton->setToolTip(QApplication::translate("BoolOperationsDock", "Union multiple objects", 0));
#endif // QT_NO_TOOLTIP
        unionButton->setShortcut(QApplication::translate("BoolOperationsDock", "Ctrl++", 0));
#ifndef QT_NO_TOOLTIP
        subtractButton->setToolTip(QApplication::translate("BoolOperationsDock", "Subtract one object from other", 0));
#endif // QT_NO_TOOLTIP
        subtractButton->setShortcut(QApplication::translate("BoolOperationsDock", "Ctrl+-", 0));
#ifndef QT_NO_TOOLTIP
        intersectButton->setToolTip(QApplication::translate("BoolOperationsDock", "Intersect multiple objects", 0));
#endif // QT_NO_TOOLTIP
        intersectButton->setShortcut(QApplication::translate("BoolOperationsDock", "Ctrl+*", 0));
#ifndef QT_NO_TOOLTIP
        excludeButton->setToolTip(QApplication::translate("BoolOperationsDock", "Exclusion of two objects", 0));
#endif // QT_NO_TOOLTIP
        excludeButton->setShortcut(QApplication::translate("BoolOperationsDock", "Ctrl+6", 0));
#ifndef QT_NO_TOOLTIP
        divideButton->setToolTip(QApplication::translate("BoolOperationsDock", "Divide objects", 0));
#endif // QT_NO_TOOLTIP
        divideButton->setShortcut(QApplication::translate("BoolOperationsDock", "Ctrl+/", 0));
    } // retranslateUi

};

namespace Ui {
    class BoolOperationsDock: public Ui_BoolOperationsDock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOLOPERATIONS_H
