/********************************************************************************
** Form generated from reading UI file 'texturesform.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTURESFORM_H
#define UI_TEXTURESFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QVBoxLayout *vboxLayout;
    QListWidget *texturesList;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(357, 365);
        vboxLayout = new QVBoxLayout(Form);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        texturesList = new QListWidget(Form);
        texturesList->setObjectName(QStringLiteral("texturesList"));
        texturesList->setProperty("showDropIndicator", QVariant(false));
        texturesList->setFlow(QListView::LeftToRight);
        texturesList->setProperty("isWrapping", QVariant(true));
        texturesList->setResizeMode(QListView::Adjust);
        texturesList->setLayoutMode(QListView::Batched);
        texturesList->setViewMode(QListView::ListMode);
        texturesList->setUniformItemSizes(true);
        texturesList->setWordWrap(true);
        texturesList->setSortingEnabled(true);

        vboxLayout->addWidget(texturesList);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTURESFORM_H
