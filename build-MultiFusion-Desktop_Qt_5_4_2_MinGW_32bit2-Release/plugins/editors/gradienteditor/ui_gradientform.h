/********************************************************************************
** Form generated from reading UI file 'gradientform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRADIENTFORM_H
#define UI_GRADIENTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *gradientOptions;
    QHBoxLayout *hboxLayout;
    QGroupBox *gradientColorsBox;
    QGroupBox *gradientTypeBox;
    QVBoxLayout *vboxLayout1;
    QRadioButton *linearTypeButton;
    QRadioButton *radialTypeButton;
    QRadioButton *conicalTypeButton;
    QGroupBox *spreadMethodBox;
    QVBoxLayout *vboxLayout2;
    QRadioButton *padSpreadButton;
    QRadioButton *repeatSpreadButton;
    QRadioButton *reflectSpreadButton;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(546, 546);
        vboxLayout = new QVBoxLayout(Form);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gradientOptions = new QGroupBox(Form);
        gradientOptions->setObjectName(QStringLiteral("gradientOptions"));
        hboxLayout = new QHBoxLayout(gradientOptions);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        gradientColorsBox = new QGroupBox(gradientOptions);
        gradientColorsBox->setObjectName(QStringLiteral("gradientColorsBox"));

        hboxLayout->addWidget(gradientColorsBox);

        gradientTypeBox = new QGroupBox(gradientOptions);
        gradientTypeBox->setObjectName(QStringLiteral("gradientTypeBox"));
        vboxLayout1 = new QVBoxLayout(gradientTypeBox);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        linearTypeButton = new QRadioButton(gradientTypeBox);
        linearTypeButton->setObjectName(QStringLiteral("linearTypeButton"));

        vboxLayout1->addWidget(linearTypeButton);

        radialTypeButton = new QRadioButton(gradientTypeBox);
        radialTypeButton->setObjectName(QStringLiteral("radialTypeButton"));

        vboxLayout1->addWidget(radialTypeButton);

        conicalTypeButton = new QRadioButton(gradientTypeBox);
        conicalTypeButton->setObjectName(QStringLiteral("conicalTypeButton"));

        vboxLayout1->addWidget(conicalTypeButton);


        hboxLayout->addWidget(gradientTypeBox);

        spreadMethodBox = new QGroupBox(gradientOptions);
        spreadMethodBox->setObjectName(QStringLiteral("spreadMethodBox"));
        vboxLayout2 = new QVBoxLayout(spreadMethodBox);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        padSpreadButton = new QRadioButton(spreadMethodBox);
        padSpreadButton->setObjectName(QStringLiteral("padSpreadButton"));

        vboxLayout2->addWidget(padSpreadButton);

        repeatSpreadButton = new QRadioButton(spreadMethodBox);
        repeatSpreadButton->setObjectName(QStringLiteral("repeatSpreadButton"));

        vboxLayout2->addWidget(repeatSpreadButton);

        reflectSpreadButton = new QRadioButton(spreadMethodBox);
        reflectSpreadButton->setObjectName(QStringLiteral("reflectSpreadButton"));

        vboxLayout2->addWidget(reflectSpreadButton);


        hboxLayout->addWidget(spreadMethodBox);


        vboxLayout->addWidget(gradientOptions);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
        gradientOptions->setTitle(QString());
        gradientColorsBox->setTitle(QApplication::translate("Form", "Colors", 0));
        gradientTypeBox->setTitle(QApplication::translate("Form", "Type", 0));
        linearTypeButton->setText(QApplication::translate("Form", "Linear", 0));
        radialTypeButton->setText(QApplication::translate("Form", "Radial", 0));
        conicalTypeButton->setText(QApplication::translate("Form", "Conical", 0));
        spreadMethodBox->setTitle(QApplication::translate("Form", "Spread method", 0));
        padSpreadButton->setText(QApplication::translate("Form", "Pad", 0));
        repeatSpreadButton->setText(QApplication::translate("Form", "Repeat", 0));
        reflectSpreadButton->setText(QApplication::translate("Form", "Reflect", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRADIENTFORM_H
