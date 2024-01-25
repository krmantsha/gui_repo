/********************************************************************************
** Form generated from reading UI file 'renamephases.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RENAMEPHASES_H
#define UI_RENAMEPHASES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RenamePhases
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QListWidget *listSourcePhases;
    QLabel *label_3;
    QVBoxLayout *vboxLayout2;
    QLabel *label_2;
    QListWidget *listTargetPhase;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *RenamePhases)
    {
        if (RenamePhases->objectName().isEmpty())
            RenamePhases->setObjectName(QStringLiteral("RenamePhases"));
        RenamePhases->resize(378, 213);
        vboxLayout = new QVBoxLayout(RenamePhases);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
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
        label = new QLabel(RenamePhases);
        label->setObjectName(QStringLiteral("label"));

        vboxLayout1->addWidget(label);

        listSourcePhases = new QListWidget(RenamePhases);
        listSourcePhases->setObjectName(QStringLiteral("listSourcePhases"));
        listSourcePhases->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout1->addWidget(listSourcePhases);


        hboxLayout->addLayout(vboxLayout1);

        label_3 = new QLabel(RenamePhases);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout->addWidget(label_3);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        label_2 = new QLabel(RenamePhases);
        label_2->setObjectName(QStringLiteral("label_2"));

        vboxLayout2->addWidget(label_2);

        listTargetPhase = new QListWidget(RenamePhases);
        listTargetPhase->setObjectName(QStringLiteral("listTargetPhase"));

        vboxLayout2->addWidget(listTargetPhase);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        okButton = new QPushButton(RenamePhases);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(RenamePhases);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(RenamePhases);
        QObject::connect(okButton, SIGNAL(clicked()), RenamePhases, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), RenamePhases, SLOT(reject()));

        QMetaObject::connectSlotsByName(RenamePhases);
    } // setupUi

    void retranslateUi(QDialog *RenamePhases)
    {
        RenamePhases->setWindowTitle(QApplication::translate("RenamePhases", "Rename phases", Q_NULLPTR));
        label->setText(QApplication::translate("RenamePhases", "Source:", Q_NULLPTR));
        label_3->setText(QApplication::translate("RenamePhases", ">", Q_NULLPTR));
        label_2->setText(QApplication::translate("RenamePhases", "Target:", Q_NULLPTR));
        okButton->setText(QApplication::translate("RenamePhases", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("RenamePhases", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RenamePhases: public Ui_RenamePhases {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RENAMEPHASES_H
