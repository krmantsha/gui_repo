/********************************************************************************
** Form generated from reading UI file 'inspector.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSPECTOR_H
#define UI_INSPECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inspector
{
public:
    QVBoxLayout *vboxLayout;
    QToolButton *buttonBack;
    QLineEdit *editFilter;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Inspector)
    {
        if (Inspector->objectName().isEmpty())
            Inspector->setObjectName(QStringLiteral("Inspector"));
        Inspector->resize(657, 498);
        vboxLayout = new QVBoxLayout(Inspector);
        vboxLayout->setSpacing(4);
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        buttonBack = new QToolButton(Inspector);
        buttonBack->setObjectName(QStringLiteral("buttonBack"));
        buttonBack->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/undo.png"));
        buttonBack->setIcon(icon);

        vboxLayout->addWidget(buttonBack);

        editFilter = new QLineEdit(Inspector);
        editFilter->setObjectName(QStringLiteral("editFilter"));

        vboxLayout->addWidget(editFilter);

        splitter = new QSplitter(Inspector);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        splitter->addWidget(treeWidget);
        tableWidget = new QTableWidget(splitter);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setAlternatingRowColors(true);
        splitter->addWidget(tableWidget);

        vboxLayout->addWidget(splitter);


        retranslateUi(Inspector);

        QMetaObject::connectSlotsByName(Inspector);
    } // setupUi

    void retranslateUi(QWidget *Inspector)
    {
        Inspector->setWindowTitle(QApplication::translate("Inspector", "Inspector", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonBack->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        buttonBack->setText(QApplication::translate("Inspector", "...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        buttonBack->setShortcut(QApplication::translate("Inspector", "Backspace", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        editFilter->setToolTip(QApplication::translate("Inspector", "Define an object filter, e.g. 'Network.code=GE'. Wildcards are allowed to match a value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class Inspector: public Ui_Inspector {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSPECTOR_H
