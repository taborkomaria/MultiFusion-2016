/********************************************************************************
** Form generated from reading UI file 'AlignAndDistribute.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALIGNANDDISTRIBUTE_H
#define UI_ALIGNANDDISTRIBUTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlignAndDistributeForm
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *AlignGroupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *AlignHorizontalLayout_1;
    QToolButton *AlignButton_01;
    QToolButton *AlignButton_02;
    QToolButton *AlignButton_03;
    QSpacerItem *AlignHorizontalSpacer_1;
    QHBoxLayout *AlignHorizontalLayout_2;
    QToolButton *AlignButton_04;
    QToolButton *AlignButton_05;
    QToolButton *AlignButton_06;
    QSpacerItem *AlignHorizontalSpacer_2;
    QGroupBox *DistributeGroupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *DistributeHorizontalLayout_4;
    QToolButton *DistributeButton_1;
    QToolButton *DistributeButton_2;
    QToolButton *DistributeButton_3;
    QToolButton *DistributeButton_4;
    QSpacerItem *DistributeHorizontalSpacer_1;
    QHBoxLayout *DistributeHorizontalLayout_3;
    QToolButton *DistributeButton_5;
    QToolButton *DistributeButton_6;
    QToolButton *DistributeButton_7;
    QToolButton *DistributeButton_8;
    QSpacerItem *DistributeHorizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *AlignAndDistributeForm)
    {
        if (AlignAndDistributeForm->objectName().isEmpty())
            AlignAndDistributeForm->setObjectName(QStringLiteral("AlignAndDistributeForm"));
        AlignAndDistributeForm->resize(261, 264);
        vboxLayout = new QVBoxLayout(AlignAndDistributeForm);
        vboxLayout->setSpacing(3);
        vboxLayout->setContentsMargins(3, 3, 3, 3);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        AlignGroupBox = new QGroupBox(AlignAndDistributeForm);
        AlignGroupBox->setObjectName(QStringLiteral("AlignGroupBox"));
        verticalLayout = new QVBoxLayout(AlignGroupBox);
        verticalLayout->setSpacing(3);
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        AlignHorizontalLayout_1 = new QHBoxLayout();
        AlignHorizontalLayout_1->setSpacing(0);
        AlignHorizontalLayout_1->setObjectName(QStringLiteral("AlignHorizontalLayout_1"));
        AlignButton_01 = new QToolButton(AlignGroupBox);
        AlignButton_01->setObjectName(QStringLiteral("AlignButton_01"));
        AlignButton_01->setMinimumSize(QSize(32, 32));
        QIcon icon;
        icon.addFile(QStringLiteral(":/AlignAndDistribute/images/align-horizontal-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlignButton_01->setIcon(icon);
        AlignButton_01->setIconSize(QSize(24, 24));
        AlignButton_01->setAutoRaise(true);

        AlignHorizontalLayout_1->addWidget(AlignButton_01);

        AlignButton_02 = new QToolButton(AlignGroupBox);
        AlignButton_02->setObjectName(QStringLiteral("AlignButton_02"));
        AlignButton_02->setEnabled(true);
        AlignButton_02->setMinimumSize(QSize(32, 32));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/AlignAndDistribute/images/align-horizontal-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlignButton_02->setIcon(icon1);
        AlignButton_02->setIconSize(QSize(24, 24));
        AlignButton_02->setAutoRaise(true);

        AlignHorizontalLayout_1->addWidget(AlignButton_02);

        AlignButton_03 = new QToolButton(AlignGroupBox);
        AlignButton_03->setObjectName(QStringLiteral("AlignButton_03"));
        AlignButton_03->setMinimumSize(QSize(32, 32));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/AlignAndDistribute/images/align-horizontal-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlignButton_03->setIcon(icon2);
        AlignButton_03->setIconSize(QSize(24, 24));
        AlignButton_03->setAutoRaise(true);

        AlignHorizontalLayout_1->addWidget(AlignButton_03);

        AlignHorizontalSpacer_1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AlignHorizontalLayout_1->addItem(AlignHorizontalSpacer_1);


        verticalLayout->addLayout(AlignHorizontalLayout_1);

        AlignHorizontalLayout_2 = new QHBoxLayout();
        AlignHorizontalLayout_2->setSpacing(0);
        AlignHorizontalLayout_2->setObjectName(QStringLiteral("AlignHorizontalLayout_2"));
        AlignButton_04 = new QToolButton(AlignGroupBox);
        AlignButton_04->setObjectName(QStringLiteral("AlignButton_04"));
        AlignButton_04->setMinimumSize(QSize(32, 32));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/AlignAndDistribute/images/align-vertical-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlignButton_04->setIcon(icon3);
        AlignButton_04->setIconSize(QSize(24, 24));
        AlignButton_04->setAutoRaise(true);

        AlignHorizontalLayout_2->addWidget(AlignButton_04);

        AlignButton_05 = new QToolButton(AlignGroupBox);
        AlignButton_05->setObjectName(QStringLiteral("AlignButton_05"));
        AlignButton_05->setEnabled(true);
        AlignButton_05->setMinimumSize(QSize(32, 32));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/AlignAndDistribute/images/align-vertical-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlignButton_05->setIcon(icon4);
        AlignButton_05->setIconSize(QSize(24, 24));
        AlignButton_05->setAutoRaise(true);

        AlignHorizontalLayout_2->addWidget(AlignButton_05);

        AlignButton_06 = new QToolButton(AlignGroupBox);
        AlignButton_06->setObjectName(QStringLiteral("AlignButton_06"));
        AlignButton_06->setMinimumSize(QSize(32, 32));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/AlignAndDistribute/images/align-vertical-bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        AlignButton_06->setIcon(icon5);
        AlignButton_06->setIconSize(QSize(24, 24));
        AlignButton_06->setAutoRaise(true);

        AlignHorizontalLayout_2->addWidget(AlignButton_06);

        AlignHorizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        AlignHorizontalLayout_2->addItem(AlignHorizontalSpacer_2);


        verticalLayout->addLayout(AlignHorizontalLayout_2);


        vboxLayout->addWidget(AlignGroupBox);

        DistributeGroupBox = new QGroupBox(AlignAndDistributeForm);
        DistributeGroupBox->setObjectName(QStringLiteral("DistributeGroupBox"));
        verticalLayout_2 = new QVBoxLayout(DistributeGroupBox);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(3, 3, 3, 3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        DistributeHorizontalLayout_4 = new QHBoxLayout();
        DistributeHorizontalLayout_4->setSpacing(0);
        DistributeHorizontalLayout_4->setObjectName(QStringLiteral("DistributeHorizontalLayout_4"));
        DistributeButton_1 = new QToolButton(DistributeGroupBox);
        DistributeButton_1->setObjectName(QStringLiteral("DistributeButton_1"));
        DistributeButton_1->setEnabled(true);
        DistributeButton_1->setMinimumSize(QSize(32, 32));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-horizontal-left.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_1->setIcon(icon6);
        DistributeButton_1->setIconSize(QSize(24, 24));
        DistributeButton_1->setAutoRaise(true);

        DistributeHorizontalLayout_4->addWidget(DistributeButton_1);

        DistributeButton_2 = new QToolButton(DistributeGroupBox);
        DistributeButton_2->setObjectName(QStringLiteral("DistributeButton_2"));
        DistributeButton_2->setEnabled(true);
        DistributeButton_2->setMinimumSize(QSize(32, 32));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-horizontal-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_2->setIcon(icon7);
        DistributeButton_2->setIconSize(QSize(24, 24));
        DistributeButton_2->setAutoRaise(true);

        DistributeHorizontalLayout_4->addWidget(DistributeButton_2);

        DistributeButton_3 = new QToolButton(DistributeGroupBox);
        DistributeButton_3->setObjectName(QStringLiteral("DistributeButton_3"));
        DistributeButton_3->setEnabled(true);
        DistributeButton_3->setMinimumSize(QSize(32, 32));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-horizontal-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_3->setIcon(icon8);
        DistributeButton_3->setIconSize(QSize(24, 24));
        DistributeButton_3->setAutoRaise(true);

        DistributeHorizontalLayout_4->addWidget(DistributeButton_3);

        DistributeButton_4 = new QToolButton(DistributeGroupBox);
        DistributeButton_4->setObjectName(QStringLiteral("DistributeButton_4"));
        DistributeButton_4->setEnabled(true);
        DistributeButton_4->setMinimumSize(QSize(32, 32));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-horizontal-gaps.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_4->setIcon(icon9);
        DistributeButton_4->setIconSize(QSize(24, 24));
        DistributeButton_4->setAutoRaise(true);

        DistributeHorizontalLayout_4->addWidget(DistributeButton_4);

        DistributeHorizontalSpacer_1 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DistributeHorizontalLayout_4->addItem(DistributeHorizontalSpacer_1);


        verticalLayout_2->addLayout(DistributeHorizontalLayout_4);

        DistributeHorizontalLayout_3 = new QHBoxLayout();
        DistributeHorizontalLayout_3->setSpacing(0);
        DistributeHorizontalLayout_3->setObjectName(QStringLiteral("DistributeHorizontalLayout_3"));
        DistributeButton_5 = new QToolButton(DistributeGroupBox);
        DistributeButton_5->setObjectName(QStringLiteral("DistributeButton_5"));
        DistributeButton_5->setEnabled(true);
        DistributeButton_5->setMinimumSize(QSize(32, 32));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-vertical-top.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_5->setIcon(icon10);
        DistributeButton_5->setIconSize(QSize(24, 24));
        DistributeButton_5->setAutoRaise(true);

        DistributeHorizontalLayout_3->addWidget(DistributeButton_5);

        DistributeButton_6 = new QToolButton(DistributeGroupBox);
        DistributeButton_6->setObjectName(QStringLiteral("DistributeButton_6"));
        DistributeButton_6->setEnabled(true);
        DistributeButton_6->setMinimumSize(QSize(32, 32));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-vertical-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_6->setIcon(icon11);
        DistributeButton_6->setIconSize(QSize(24, 24));
        DistributeButton_6->setAutoRaise(true);

        DistributeHorizontalLayout_3->addWidget(DistributeButton_6);

        DistributeButton_7 = new QToolButton(DistributeGroupBox);
        DistributeButton_7->setObjectName(QStringLiteral("DistributeButton_7"));
        DistributeButton_7->setEnabled(true);
        DistributeButton_7->setMinimumSize(QSize(32, 32));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-vertical-bottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_7->setIcon(icon12);
        DistributeButton_7->setIconSize(QSize(24, 24));
        DistributeButton_7->setAutoRaise(true);

        DistributeHorizontalLayout_3->addWidget(DistributeButton_7);

        DistributeButton_8 = new QToolButton(DistributeGroupBox);
        DistributeButton_8->setObjectName(QStringLiteral("DistributeButton_8"));
        DistributeButton_8->setEnabled(true);
        DistributeButton_8->setMinimumSize(QSize(32, 32));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/AlignAndDistribute/images/distribute-vertical-gaps.png"), QSize(), QIcon::Normal, QIcon::Off);
        DistributeButton_8->setIcon(icon13);
        DistributeButton_8->setIconSize(QSize(24, 24));
        DistributeButton_8->setAutoRaise(true);

        DistributeHorizontalLayout_3->addWidget(DistributeButton_8);

        DistributeHorizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DistributeHorizontalLayout_3->addItem(DistributeHorizontalSpacer_2);


        verticalLayout_2->addLayout(DistributeHorizontalLayout_3);


        vboxLayout->addWidget(DistributeGroupBox);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(verticalSpacer);

        QWidget::setTabOrder(AlignButton_01, AlignButton_02);
        QWidget::setTabOrder(AlignButton_02, AlignButton_03);
        QWidget::setTabOrder(AlignButton_03, AlignButton_04);
        QWidget::setTabOrder(AlignButton_04, AlignButton_05);
        QWidget::setTabOrder(AlignButton_05, AlignButton_06);
        QWidget::setTabOrder(AlignButton_06, DistributeButton_1);
        QWidget::setTabOrder(DistributeButton_1, DistributeButton_2);
        QWidget::setTabOrder(DistributeButton_2, DistributeButton_3);
        QWidget::setTabOrder(DistributeButton_3, DistributeButton_4);
        QWidget::setTabOrder(DistributeButton_4, DistributeButton_5);
        QWidget::setTabOrder(DistributeButton_5, DistributeButton_6);
        QWidget::setTabOrder(DistributeButton_6, DistributeButton_7);
        QWidget::setTabOrder(DistributeButton_7, DistributeButton_8);

        retranslateUi(AlignAndDistributeForm);

        QMetaObject::connectSlotsByName(AlignAndDistributeForm);
    } // setupUi

    void retranslateUi(QWidget *AlignAndDistributeForm)
    {
        AlignAndDistributeForm->setWindowTitle(QApplication::translate("AlignAndDistributeForm", "Align And Distribute", 0));
        AlignGroupBox->setTitle(QApplication::translate("AlignAndDistributeForm", "Align", 0));
#ifndef QT_NO_TOOLTIP
        AlignButton_01->setToolTip(QApplication::translate("AlignAndDistributeForm", "Align left edges", 0));
#endif // QT_NO_TOOLTIP
        AlignButton_01->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignButton_02->setToolTip(QApplication::translate("AlignAndDistributeForm", "Center on vertical axis", 0));
#endif // QT_NO_TOOLTIP
        AlignButton_02->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignButton_03->setToolTip(QApplication::translate("AlignAndDistributeForm", "Align right sides", 0));
#endif // QT_NO_TOOLTIP
        AlignButton_03->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignButton_04->setToolTip(QApplication::translate("AlignAndDistributeForm", "Align top edges", 0));
#endif // QT_NO_TOOLTIP
        AlignButton_04->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignButton_05->setToolTip(QApplication::translate("AlignAndDistributeForm", "Center on horizontal axis", 0));
#endif // QT_NO_TOOLTIP
        AlignButton_05->setText(QString());
#ifndef QT_NO_TOOLTIP
        AlignButton_06->setToolTip(QApplication::translate("AlignAndDistributeForm", "Align bottom edges", 0));
#endif // QT_NO_TOOLTIP
        AlignButton_06->setText(QString());
        DistributeGroupBox->setTitle(QApplication::translate("AlignAndDistributeForm", "Distribute", 0));
#ifndef QT_NO_TOOLTIP
        DistributeButton_1->setToolTip(QApplication::translate("AlignAndDistributeForm", "Distribute left edges equidistantly", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_1->setText(QString());
#ifndef QT_NO_TOOLTIP
        DistributeButton_2->setToolTip(QApplication::translate("AlignAndDistributeForm", "Distribute centers equidistantly horizontally", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_2->setText(QString());
#ifndef QT_NO_TOOLTIP
        DistributeButton_3->setToolTip(QApplication::translate("AlignAndDistributeForm", "Distribute right edges equidistantly", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_3->setText(QString());
#ifndef QT_NO_TOOLTIP
        DistributeButton_4->setToolTip(QApplication::translate("AlignAndDistributeForm", "Make horizontal gaps between objects equal", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_4->setText(QString());
#ifndef QT_NO_TOOLTIP
        DistributeButton_5->setToolTip(QApplication::translate("AlignAndDistributeForm", "Distribute top edges equidistantly", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_5->setText(QString());
#ifndef QT_NO_TOOLTIP
        DistributeButton_6->setToolTip(QApplication::translate("AlignAndDistributeForm", "Distribute centers equidistantly vertically", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_6->setText(QString());
#ifndef QT_NO_TOOLTIP
        DistributeButton_7->setToolTip(QApplication::translate("AlignAndDistributeForm", "Distribute bottom edges equidistantly", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_7->setText(QString());
#ifndef QT_NO_TOOLTIP
        DistributeButton_8->setToolTip(QApplication::translate("AlignAndDistributeForm", "Make vertical gaps between objects equal", 0));
#endif // QT_NO_TOOLTIP
        DistributeButton_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AlignAndDistributeForm: public Ui_AlignAndDistributeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALIGNANDDISTRIBUTE_H
