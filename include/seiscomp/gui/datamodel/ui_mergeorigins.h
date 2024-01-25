/********************************************************************************
** Form generated from reading UI file 'mergeorigins.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERGEORIGINS_H
#define UI_MERGEORIGINS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MergeOrigins
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelInfo;
    QCheckBox *checkAllAgencies;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *MergeOrigins)
    {
        if (MergeOrigins->objectName().isEmpty())
            MergeOrigins->setObjectName(QStringLiteral("MergeOrigins"));
        MergeOrigins->resize(411, 182);
        vboxLayout = new QVBoxLayout(MergeOrigins);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        labelInfo = new QLabel(MergeOrigins);
        labelInfo->setObjectName(QStringLiteral("labelInfo"));
        labelInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelInfo->setWordWrap(true);

        vboxLayout->addWidget(labelInfo);

        checkAllAgencies = new QCheckBox(MergeOrigins);
        checkAllAgencies->setObjectName(QStringLiteral("checkAllAgencies"));

        vboxLayout->addWidget(checkAllAgencies);

        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        okButton = new QPushButton(MergeOrigins);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(MergeOrigins);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(MergeOrigins);
        QObject::connect(okButton, SIGNAL(clicked()), MergeOrigins, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), MergeOrigins, SLOT(reject()));

        QMetaObject::connectSlotsByName(MergeOrigins);
    } // setupUi

    void retranslateUi(QDialog *MergeOrigins)
    {
        MergeOrigins->setWindowTitle(QApplication::translate("MergeOrigins", "Merge origins", Q_NULLPTR));
        labelInfo->setText(QApplication::translate("MergeOrigins", "%1 origins are selected to be merged. Picks are not associated with the result more than once. The first associated pick and its defined phase is taken. If the same pick is associated with a successive origin in the merge list it is ignored. In a drag and drop operation the drop target is always the first element in the merge list. ", Q_NULLPTR));
        checkAllAgencies->setText(QApplication::translate("MergeOrigins", "Merge picks from all agencies instead of using only own picks.", Q_NULLPTR));
        okButton->setText(QApplication::translate("MergeOrigins", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("MergeOrigins", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MergeOrigins: public Ui_MergeOrigins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERGEORIGINS_H
