/********************************************************************************
** Form generated from reading UI file 'maglistview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGLISTVIEW_H
#define UI_MAGLISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OriginListView
{
public:
    QVBoxLayout *vboxLayout;
    QTreeWidget *treeWidget;
    QHBoxLayout *hboxLayout;
    QPushButton *btnClear;
    QSpacerItem *spacerItem;
    QPushButton *btnDbRead;

    void setupUi(QWidget *OriginListView)
    {
        if (OriginListView->objectName().isEmpty())
            OriginListView->setObjectName(QStringLiteral("OriginListView"));
        OriginListView->resize(448, 649);
        vboxLayout = new QVBoxLayout(OriginListView);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        treeWidget = new QTreeWidget(OriginListView);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        vboxLayout->addWidget(treeWidget);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClear = new QPushButton(OriginListView);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setEnabled(false);

        hboxLayout->addWidget(btnClear);

        spacerItem = new QSpacerItem(201, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnDbRead = new QPushButton(OriginListView);
        btnDbRead->setObjectName(QStringLiteral("btnDbRead"));
        btnDbRead->setEnabled(false);

        hboxLayout->addWidget(btnDbRead);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(OriginListView);

        QMetaObject::connectSlotsByName(OriginListView);
    } // setupUi

    void retranslateUi(QWidget *OriginListView)
    {
        OriginListView->setWindowTitle(QApplication::translate("OriginListView", "OriginList", Q_NULLPTR));
        btnClear->setText(QApplication::translate("OriginListView", "Clear", Q_NULLPTR));
        btnDbRead->setText(QApplication::translate("OriginListView", "Read from DB", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OriginListView: public Ui_OriginListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGLISTVIEW_H
