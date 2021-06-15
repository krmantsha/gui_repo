/********************************************************************************
** Form generated from reading UI file 'magnitudeview_filter.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGNITUDEVIEW_FILTER_H
#define UI_MAGNITUDEVIEW_FILTER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MagnitudeRowFilter
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *labelInfo;
    QToolButton *btnRemove;
    QToolButton *btnAdd;
    QFrame *frameFilters;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *MagnitudeRowFilter)
    {
        if (MagnitudeRowFilter->objectName().isEmpty())
            MagnitudeRowFilter->setObjectName(QString::fromUtf8("MagnitudeRowFilter"));
        MagnitudeRowFilter->resize(405, 209);
        vboxLayout = new QVBoxLayout(MagnitudeRowFilter);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        labelInfo = new QLabel(MagnitudeRowFilter);
        labelInfo->setObjectName(QString::fromUtf8("labelInfo"));

        hboxLayout->addWidget(labelInfo);

        btnRemove = new QToolButton(MagnitudeRowFilter);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));

        hboxLayout->addWidget(btnRemove);

        btnAdd = new QToolButton(MagnitudeRowFilter);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        hboxLayout->addWidget(btnAdd);


        vboxLayout->addLayout(hboxLayout);

        frameFilters = new QFrame(MagnitudeRowFilter);
        frameFilters->setObjectName(QString::fromUtf8("frameFilters"));
        frameFilters->setFrameShape(QFrame::NoFrame);
        frameFilters->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frameFilters);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        okButton = new QPushButton(MagnitudeRowFilter);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(MagnitudeRowFilter);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(MagnitudeRowFilter);
        QObject::connect(okButton, SIGNAL(clicked()), MagnitudeRowFilter, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), MagnitudeRowFilter, SLOT(reject()));

        QMetaObject::connectSlotsByName(MagnitudeRowFilter);
    } // setupUi

    void retranslateUi(QDialog *MagnitudeRowFilter)
    {
        MagnitudeRowFilter->setWindowTitle(QApplication::translate("MagnitudeRowFilter", "Selection filter", 0, QApplication::UnicodeUTF8));
        labelInfo->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRemove->setToolTip(QApplication::translate("MagnitudeRowFilter", "Remove last filter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnRemove->setText(QApplication::translate("MagnitudeRowFilter", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnAdd->setToolTip(QApplication::translate("MagnitudeRowFilter", "Add another filter that is OR'ed with the others", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnAdd->setText(QApplication::translate("MagnitudeRowFilter", "+", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("MagnitudeRowFilter", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("MagnitudeRowFilter", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MagnitudeRowFilter: public Ui_MagnitudeRowFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGNITUDEVIEW_FILTER_H
