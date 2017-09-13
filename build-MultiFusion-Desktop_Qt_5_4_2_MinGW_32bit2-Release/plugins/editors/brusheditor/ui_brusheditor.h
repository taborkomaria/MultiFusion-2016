/********************************************************************************
** Form generated from reading UI file 'brusheditor.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BRUSHEDITOR_H
#define UI_BRUSHEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrushEditorForm
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *PreviewBox;
    QTabWidget *BrushPropsTab;
    QWidget *patternBrushTab;
    QVBoxLayout *vboxLayout1;
    QGroupBox *styleBox;
    QGridLayout *gridLayout;
    QRadioButton *dense3PatternButton;
    QRadioButton *HorPatternButton;
    QRadioButton *DiagCrossPatternButton;
    QRadioButton *dense4PatternButton;
    QRadioButton *dense1PatternButton;
    QRadioButton *solidPatternButton;
    QRadioButton *noBrushButton;
    QRadioButton *dense2PatternButton;
    QRadioButton *dense5PatternButton;
    QRadioButton *FDiagPatternButton;
    QRadioButton *dense7PatternButton;
    QRadioButton *dense6PatternButton;
    QRadioButton *VerPatternButton;
    QRadioButton *BDiagPatternButton;
    QRadioButton *CrossPatternButton;
    QGroupBox *colorBox;
    QWidget *gradientBrushTab;
    QGridLayout *gridLayout1;
    QGroupBox *gradientBox;
    QWidget *textureBrushTab;

    void setupUi(QWidget *BrushEditorForm)
    {
        if (BrushEditorForm->objectName().isEmpty())
            BrushEditorForm->setObjectName(QStringLiteral("BrushEditorForm"));
        BrushEditorForm->resize(538, 395);
        vboxLayout = new QVBoxLayout(BrushEditorForm);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(9, 9, 9, 9);
        PreviewBox = new QGroupBox(BrushEditorForm);
        PreviewBox->setObjectName(QStringLiteral("PreviewBox"));

        vboxLayout->addWidget(PreviewBox);

        BrushPropsTab = new QTabWidget(BrushEditorForm);
        BrushPropsTab->setObjectName(QStringLiteral("BrushPropsTab"));
        patternBrushTab = new QWidget();
        patternBrushTab->setObjectName(QStringLiteral("patternBrushTab"));
        vboxLayout1 = new QVBoxLayout(patternBrushTab);
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
        styleBox = new QGroupBox(patternBrushTab);
        styleBox->setObjectName(QStringLiteral("styleBox"));
        gridLayout = new QGridLayout(styleBox);
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(9, 9, 9, 9);
        dense3PatternButton = new QRadioButton(styleBox);
        dense3PatternButton->setObjectName(QStringLiteral("dense3PatternButton"));

        gridLayout->addWidget(dense3PatternButton, 4, 0, 1, 1);

        HorPatternButton = new QRadioButton(styleBox);
        HorPatternButton->setObjectName(QStringLiteral("HorPatternButton"));

        gridLayout->addWidget(HorPatternButton, 4, 1, 1, 1);

        DiagCrossPatternButton = new QRadioButton(styleBox);
        DiagCrossPatternButton->setObjectName(QStringLiteral("DiagCrossPatternButton"));

        gridLayout->addWidget(DiagCrossPatternButton, 4, 2, 1, 1);

        dense4PatternButton = new QRadioButton(styleBox);
        dense4PatternButton->setObjectName(QStringLiteral("dense4PatternButton"));

        gridLayout->addWidget(dense4PatternButton, 0, 1, 1, 1);

        dense1PatternButton = new QRadioButton(styleBox);
        dense1PatternButton->setObjectName(QStringLiteral("dense1PatternButton"));

        gridLayout->addWidget(dense1PatternButton, 2, 0, 1, 1);

        solidPatternButton = new QRadioButton(styleBox);
        solidPatternButton->setObjectName(QStringLiteral("solidPatternButton"));

        gridLayout->addWidget(solidPatternButton, 1, 0, 1, 1);

        noBrushButton = new QRadioButton(styleBox);
        noBrushButton->setObjectName(QStringLiteral("noBrushButton"));

        gridLayout->addWidget(noBrushButton, 0, 0, 1, 1);

        dense2PatternButton = new QRadioButton(styleBox);
        dense2PatternButton->setObjectName(QStringLiteral("dense2PatternButton"));

        gridLayout->addWidget(dense2PatternButton, 3, 0, 1, 1);

        dense5PatternButton = new QRadioButton(styleBox);
        dense5PatternButton->setObjectName(QStringLiteral("dense5PatternButton"));

        gridLayout->addWidget(dense5PatternButton, 1, 1, 1, 1);

        FDiagPatternButton = new QRadioButton(styleBox);
        FDiagPatternButton->setObjectName(QStringLiteral("FDiagPatternButton"));

        gridLayout->addWidget(FDiagPatternButton, 3, 2, 1, 1);

        dense7PatternButton = new QRadioButton(styleBox);
        dense7PatternButton->setObjectName(QStringLiteral("dense7PatternButton"));

        gridLayout->addWidget(dense7PatternButton, 3, 1, 1, 1);

        dense6PatternButton = new QRadioButton(styleBox);
        dense6PatternButton->setObjectName(QStringLiteral("dense6PatternButton"));

        gridLayout->addWidget(dense6PatternButton, 2, 1, 1, 1);

        VerPatternButton = new QRadioButton(styleBox);
        VerPatternButton->setObjectName(QStringLiteral("VerPatternButton"));

        gridLayout->addWidget(VerPatternButton, 0, 2, 1, 1);

        BDiagPatternButton = new QRadioButton(styleBox);
        BDiagPatternButton->setObjectName(QStringLiteral("BDiagPatternButton"));

        gridLayout->addWidget(BDiagPatternButton, 2, 2, 1, 1);

        CrossPatternButton = new QRadioButton(styleBox);
        CrossPatternButton->setObjectName(QStringLiteral("CrossPatternButton"));

        gridLayout->addWidget(CrossPatternButton, 1, 2, 1, 1);


        vboxLayout1->addWidget(styleBox);

        colorBox = new QGroupBox(patternBrushTab);
        colorBox->setObjectName(QStringLiteral("colorBox"));

        vboxLayout1->addWidget(colorBox);

        BrushPropsTab->addTab(patternBrushTab, QString());
        gradientBrushTab = new QWidget();
        gradientBrushTab->setObjectName(QStringLiteral("gradientBrushTab"));
        gridLayout1 = new QGridLayout(gradientBrushTab);
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        gridLayout1->setContentsMargins(9, 9, 9, 9);
        gradientBox = new QGroupBox(gradientBrushTab);
        gradientBox->setObjectName(QStringLiteral("gradientBox"));

        gridLayout1->addWidget(gradientBox, 0, 0, 1, 1);

        BrushPropsTab->addTab(gradientBrushTab, QString());
        textureBrushTab = new QWidget();
        textureBrushTab->setObjectName(QStringLiteral("textureBrushTab"));
        BrushPropsTab->addTab(textureBrushTab, QString());

        vboxLayout->addWidget(BrushPropsTab);


        retranslateUi(BrushEditorForm);

        BrushPropsTab->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(BrushEditorForm);
    } // setupUi

    void retranslateUi(QWidget *BrushEditorForm)
    {
        BrushEditorForm->setWindowTitle(QApplication::translate("BrushEditorForm", "Brush properties", 0));
        PreviewBox->setTitle(QApplication::translate("BrushEditorForm", "Preview", 0));
        styleBox->setTitle(QApplication::translate("BrushEditorForm", "Style", 0));
        dense3PatternButton->setText(QApplication::translate("BrushEditorForm", "Dense 3", 0));
        HorPatternButton->setText(QApplication::translate("BrushEditorForm", "Horizontal lines", 0));
        DiagCrossPatternButton->setText(QApplication::translate("BrushEditorForm", "Crossing diagonal lines", 0));
        dense4PatternButton->setText(QApplication::translate("BrushEditorForm", "Dense 4", 0));
        dense1PatternButton->setText(QApplication::translate("BrushEditorForm", "Dense 1", 0));
        solidPatternButton->setText(QApplication::translate("BrushEditorForm", "Solid", 0));
        noBrushButton->setText(QApplication::translate("BrushEditorForm", "No brush", 0));
        dense2PatternButton->setText(QApplication::translate("BrushEditorForm", "Dense 2", 0));
        dense5PatternButton->setText(QApplication::translate("BrushEditorForm", "Dense 5", 0));
        FDiagPatternButton->setText(QApplication::translate("BrushEditorForm", "Forward diagonal lines", 0));
        dense7PatternButton->setText(QApplication::translate("BrushEditorForm", "Dense 7", 0));
        dense6PatternButton->setText(QApplication::translate("BrushEditorForm", "Dense 6", 0));
        VerPatternButton->setText(QApplication::translate("BrushEditorForm", "Verital lines", 0));
        BDiagPatternButton->setText(QApplication::translate("BrushEditorForm", "Backward diagonal lines", 0));
        CrossPatternButton->setText(QApplication::translate("BrushEditorForm", "Cross lines", 0));
        colorBox->setTitle(QApplication::translate("BrushEditorForm", "Color", 0));
        BrushPropsTab->setTabText(BrushPropsTab->indexOf(patternBrushTab), QApplication::translate("BrushEditorForm", "Pattern brush", 0));
        gradientBox->setTitle(QApplication::translate("BrushEditorForm", "Gradient", 0));
        BrushPropsTab->setTabText(BrushPropsTab->indexOf(gradientBrushTab), QApplication::translate("BrushEditorForm", "Gradient brush", 0));
        BrushPropsTab->setTabText(BrushPropsTab->indexOf(textureBrushTab), QApplication::translate("BrushEditorForm", "Texture brush", 0));
    } // retranslateUi

};

namespace Ui {
    class BrushEditorForm: public Ui_BrushEditorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BRUSHEDITOR_H
