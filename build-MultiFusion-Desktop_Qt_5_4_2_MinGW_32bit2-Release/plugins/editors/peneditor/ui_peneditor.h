/********************************************************************************
** Form generated from reading UI file 'peneditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PENEDITOR_H
#define UI_PENEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PenEditorForm
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *previewBox;
    QGroupBox *lineStyleBox;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QRadioButton *noneLineStyleBtn;
    QRadioButton *solidLineStyleBtn;
    QRadioButton *dashLineStyleBtn;
    QVBoxLayout *vboxLayout2;
    QRadioButton *dotLineStyleBtn;
    QRadioButton *dashDotLineStyleBtn;
    QRadioButton *dashDotDotLineStyleBtn;
    QHBoxLayout *hboxLayout1;
    QLabel *label;
    QComboBox *lineWidthCombo;
    QHBoxLayout *hboxLayout2;
    QGroupBox *capStyleBox;
    QHBoxLayout *hboxLayout3;
    QVBoxLayout *vboxLayout3;
    QRadioButton *squareCapStyleBtn;
    QRadioButton *flatCapStyleBtn;
    QRadioButton *roundCapStyleBtn;
    QGroupBox *joinStyleBox;
    QHBoxLayout *hboxLayout4;
    QVBoxLayout *vboxLayout4;
    QRadioButton *bevelJoinStyleBtn;
    QRadioButton *miterJoinStyleBtn;
    QRadioButton *roundJoinStyleBtn;
    QGroupBox *penColorBox;

    void setupUi(QWidget *PenEditorForm)
    {
        if (PenEditorForm->objectName().isEmpty())
            PenEditorForm->setObjectName(QStringLiteral("PenEditorForm"));
        PenEditorForm->resize(300, 391);
        vboxLayout = new QVBoxLayout(PenEditorForm);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        previewBox = new QGroupBox(PenEditorForm);
        previewBox->setObjectName(QStringLiteral("previewBox"));

        vboxLayout->addWidget(previewBox);

        lineStyleBox = new QGroupBox(PenEditorForm);
        lineStyleBox->setObjectName(QStringLiteral("lineStyleBox"));
        hboxLayout = new QHBoxLayout(lineStyleBox);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        noneLineStyleBtn = new QRadioButton(lineStyleBox);
        noneLineStyleBtn->setObjectName(QStringLiteral("noneLineStyleBtn"));
        noneLineStyleBtn->setChecked(true);

        vboxLayout1->addWidget(noneLineStyleBtn);

        solidLineStyleBtn = new QRadioButton(lineStyleBox);
        solidLineStyleBtn->setObjectName(QStringLiteral("solidLineStyleBtn"));

        vboxLayout1->addWidget(solidLineStyleBtn);

        dashLineStyleBtn = new QRadioButton(lineStyleBox);
        dashLineStyleBtn->setObjectName(QStringLiteral("dashLineStyleBtn"));

        vboxLayout1->addWidget(dashLineStyleBtn);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        dotLineStyleBtn = new QRadioButton(lineStyleBox);
        dotLineStyleBtn->setObjectName(QStringLiteral("dotLineStyleBtn"));

        vboxLayout2->addWidget(dotLineStyleBtn);

        dashDotLineStyleBtn = new QRadioButton(lineStyleBox);
        dashDotLineStyleBtn->setObjectName(QStringLiteral("dashDotLineStyleBtn"));

        vboxLayout2->addWidget(dashDotLineStyleBtn);

        dashDotDotLineStyleBtn = new QRadioButton(lineStyleBox);
        dashDotDotLineStyleBtn->setObjectName(QStringLiteral("dashDotDotLineStyleBtn"));

        vboxLayout2->addWidget(dashDotDotLineStyleBtn);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addWidget(lineStyleBox);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label = new QLabel(PenEditorForm);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout1->addWidget(label);

        lineWidthCombo = new QComboBox(PenEditorForm);
        lineWidthCombo->setObjectName(QStringLiteral("lineWidthCombo"));
        lineWidthCombo->setEditable(true);
        lineWidthCombo->setMaxVisibleItems(12);
        lineWidthCombo->setMinimumContentsLength(1);

        hboxLayout1->addWidget(lineWidthCombo);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        capStyleBox = new QGroupBox(PenEditorForm);
        capStyleBox->setObjectName(QStringLiteral("capStyleBox"));
        hboxLayout3 = new QHBoxLayout(capStyleBox);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        squareCapStyleBtn = new QRadioButton(capStyleBox);
        squareCapStyleBtn->setObjectName(QStringLiteral("squareCapStyleBtn"));
        squareCapStyleBtn->setChecked(true);

        vboxLayout3->addWidget(squareCapStyleBtn);

        flatCapStyleBtn = new QRadioButton(capStyleBox);
        flatCapStyleBtn->setObjectName(QStringLiteral("flatCapStyleBtn"));

        vboxLayout3->addWidget(flatCapStyleBtn);

        roundCapStyleBtn = new QRadioButton(capStyleBox);
        roundCapStyleBtn->setObjectName(QStringLiteral("roundCapStyleBtn"));

        vboxLayout3->addWidget(roundCapStyleBtn);


        hboxLayout3->addLayout(vboxLayout3);


        hboxLayout2->addWidget(capStyleBox);

        joinStyleBox = new QGroupBox(PenEditorForm);
        joinStyleBox->setObjectName(QStringLiteral("joinStyleBox"));
        hboxLayout4 = new QHBoxLayout(joinStyleBox);
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        bevelJoinStyleBtn = new QRadioButton(joinStyleBox);
        bevelJoinStyleBtn->setObjectName(QStringLiteral("bevelJoinStyleBtn"));
        bevelJoinStyleBtn->setChecked(true);

        vboxLayout4->addWidget(bevelJoinStyleBtn);

        miterJoinStyleBtn = new QRadioButton(joinStyleBox);
        miterJoinStyleBtn->setObjectName(QStringLiteral("miterJoinStyleBtn"));

        vboxLayout4->addWidget(miterJoinStyleBtn);

        roundJoinStyleBtn = new QRadioButton(joinStyleBox);
        roundJoinStyleBtn->setObjectName(QStringLiteral("roundJoinStyleBtn"));

        vboxLayout4->addWidget(roundJoinStyleBtn);


        hboxLayout4->addLayout(vboxLayout4);


        hboxLayout2->addWidget(joinStyleBox);


        vboxLayout->addLayout(hboxLayout2);

        penColorBox = new QGroupBox(PenEditorForm);
        penColorBox->setObjectName(QStringLiteral("penColorBox"));

        vboxLayout->addWidget(penColorBox);


        retranslateUi(PenEditorForm);

        lineWidthCombo->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(PenEditorForm);
    } // setupUi

    void retranslateUi(QWidget *PenEditorForm)
    {
        PenEditorForm->setWindowTitle(QApplication::translate("PenEditorForm", "Pen properties", 0));
        previewBox->setTitle(QApplication::translate("PenEditorForm", "Preview", 0));
        lineStyleBox->setTitle(QApplication::translate("PenEditorForm", "Line style", 0));
        noneLineStyleBtn->setText(QApplication::translate("PenEditorForm", "None", 0));
        solidLineStyleBtn->setText(QApplication::translate("PenEditorForm", "Solid", 0));
        dashLineStyleBtn->setText(QApplication::translate("PenEditorForm", "Dash", 0));
        dotLineStyleBtn->setText(QApplication::translate("PenEditorForm", "Dot", 0));
        dashDotLineStyleBtn->setText(QApplication::translate("PenEditorForm", "Dash && dot", 0));
        dashDotDotLineStyleBtn->setText(QApplication::translate("PenEditorForm", "Dash && double dot", 0));
        label->setText(QApplication::translate("PenEditorForm", "Line width", 0));
        lineWidthCombo->clear();
        lineWidthCombo->insertItems(0, QStringList()
         << QApplication::translate("PenEditorForm", "1", 0)
         << QApplication::translate("PenEditorForm", "2", 0)
         << QApplication::translate("PenEditorForm", "3", 0)
         << QApplication::translate("PenEditorForm", "4", 0)
         << QApplication::translate("PenEditorForm", "5", 0)
         << QApplication::translate("PenEditorForm", "6", 0)
         << QApplication::translate("PenEditorForm", "7", 0)
         << QApplication::translate("PenEditorForm", "8", 0)
         << QApplication::translate("PenEditorForm", "9", 0)
         << QApplication::translate("PenEditorForm", "10", 0)
         << QApplication::translate("PenEditorForm", "11", 0)
         << QApplication::translate("PenEditorForm", "12", 0)
         << QApplication::translate("PenEditorForm", "13", 0)
         << QApplication::translate("PenEditorForm", "14", 0)
         << QApplication::translate("PenEditorForm", "15", 0)
         << QApplication::translate("PenEditorForm", "16", 0)
         << QApplication::translate("PenEditorForm", "17", 0)
         << QApplication::translate("PenEditorForm", "18", 0)
         << QApplication::translate("PenEditorForm", "19", 0)
         << QApplication::translate("PenEditorForm", "20", 0)
         << QApplication::translate("PenEditorForm", "21", 0)
         << QApplication::translate("PenEditorForm", "22", 0)
         << QApplication::translate("PenEditorForm", "23", 0)
         << QApplication::translate("PenEditorForm", "24", 0)
         << QApplication::translate("PenEditorForm", "25", 0)
         << QApplication::translate("PenEditorForm", "26", 0)
         << QApplication::translate("PenEditorForm", "27", 0)
         << QApplication::translate("PenEditorForm", "28", 0)
         << QApplication::translate("PenEditorForm", "29", 0)
         << QApplication::translate("PenEditorForm", "30", 0)
         << QApplication::translate("PenEditorForm", "35", 0)
         << QApplication::translate("PenEditorForm", "40", 0)
         << QApplication::translate("PenEditorForm", "45", 0)
         << QApplication::translate("PenEditorForm", "50", 0)
         << QApplication::translate("PenEditorForm", "55", 0)
         << QApplication::translate("PenEditorForm", "60", 0)
         << QApplication::translate("PenEditorForm", "70", 0)
         << QApplication::translate("PenEditorForm", "80", 0)
         << QApplication::translate("PenEditorForm", "90", 0)
         << QApplication::translate("PenEditorForm", "100", 0)
        );
        capStyleBox->setTitle(QApplication::translate("PenEditorForm", "Cap style", 0));
        squareCapStyleBtn->setText(QApplication::translate("PenEditorForm", "Square", 0));
        flatCapStyleBtn->setText(QApplication::translate("PenEditorForm", "Flat", 0));
        roundCapStyleBtn->setText(QApplication::translate("PenEditorForm", "Round", 0));
        joinStyleBox->setTitle(QApplication::translate("PenEditorForm", "Join style", 0));
        bevelJoinStyleBtn->setText(QApplication::translate("PenEditorForm", "Bevel", 0));
        miterJoinStyleBtn->setText(QApplication::translate("PenEditorForm", "Miter", 0));
        roundJoinStyleBtn->setText(QApplication::translate("PenEditorForm", "Round", 0));
        penColorBox->setTitle(QApplication::translate("PenEditorForm", "Pen color", 0));
    } // retranslateUi

};

namespace Ui {
    class PenEditorForm: public Ui_PenEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PENEDITOR_H
