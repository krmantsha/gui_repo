/********************************************************************************
** Form generated from reading UI file 'xmlview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XMLVIEW_H
#define UI_XMLVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XMLViewDialog
{
public:
    QGridLayout *gridLayout;
    QTreeWidget *treeWidget;

    void setupUi(QWidget *XMLViewDialog)
    {
        if (XMLViewDialog->objectName().isEmpty())
            XMLViewDialog->setObjectName(QStringLiteral("XMLViewDialog"));
        XMLViewDialog->resize(336, 330);
        gridLayout = new QGridLayout(XMLViewDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        treeWidget = new QTreeWidget(XMLViewDialog);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setIndentation(10);

        gridLayout->addWidget(treeWidget, 0, 0, 1, 1);


        retranslateUi(XMLViewDialog);

        QMetaObject::connectSlotsByName(XMLViewDialog);
    } // setupUi

    void retranslateUi(QWidget *XMLViewDialog)
    {
        XMLViewDialog->setWindowTitle(QApplication::translate("XMLViewDialog", "XMLView", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class XMLViewDialog: public Ui_XMLViewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XMLVIEW_H
