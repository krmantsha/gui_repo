/********************************************************************************
** Form generated from reading UI file 'origintime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINTIME_H
#define UI_ORIGINTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginTimeDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *vboxLayout2;
    QLabel *labelLatitude;
    QLabel *labelLongitude;
    QGroupBox *groupBox_2;
    QHBoxLayout *hboxLayout1;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginTimeDialog)
    {
        if (OriginTimeDialog->objectName().isEmpty())
            OriginTimeDialog->setObjectName(QStringLiteral("OriginTimeDialog"));
        OriginTimeDialog->resize(229, 209);
        vboxLayout = new QVBoxLayout(OriginTimeDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(OriginTimeDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        hboxLayout = new QHBoxLayout(groupBox);
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
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout1->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        vboxLayout1->addWidget(label_2);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        labelLatitude = new QLabel(groupBox);
        labelLatitude->setObjectName(QStringLiteral("labelLatitude"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        labelLatitude->setFont(font1);

        vboxLayout2->addWidget(labelLatitude);

        labelLongitude = new QLabel(groupBox);
        labelLongitude->setObjectName(QStringLiteral("labelLongitude"));
        sizePolicy.setHeightForWidth(labelLongitude->sizePolicy().hasHeightForWidth());
        labelLongitude->setSizePolicy(sizePolicy);
        labelLongitude->setFont(font1);

        vboxLayout2->addWidget(labelLongitude);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(OriginTimeDialog);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        hboxLayout1 = new QHBoxLayout(groupBox_2);
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        timeEdit = new QTimeEdit(groupBox_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        hboxLayout1->addWidget(timeEdit);

        dateEdit = new QDateEdit(groupBox_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setCurrentSection(QDateTimeEdit::DaySection);

        hboxLayout1->addWidget(dateEdit);


        vboxLayout->addWidget(groupBox_2);

        spacerItem = new QSpacerItem(211, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        okButton = new QPushButton(OriginTimeDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(OriginTimeDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(OriginTimeDialog);
        QObject::connect(okButton, SIGNAL(clicked()), OriginTimeDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginTimeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginTimeDialog);
    } // setupUi

    void retranslateUi(QDialog *OriginTimeDialog)
    {
        OriginTimeDialog->setWindowTitle(QApplication::translate("OriginTimeDialog", "OriginTime", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OriginTimeDialog", "Location", Q_NULLPTR));
        label->setText(QApplication::translate("OriginTimeDialog", "Latitude:", Q_NULLPTR));
        label_2->setText(QApplication::translate("OriginTimeDialog", "Longitude:", Q_NULLPTR));
        labelLatitude->setText(QApplication::translate("OriginTimeDialog", "--.- \302\260", Q_NULLPTR));
        labelLongitude->setText(QApplication::translate("OriginTimeDialog", "--.- \302\260", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("OriginTimeDialog", "Time", Q_NULLPTR));
        timeEdit->setDisplayFormat(QApplication::translate("OriginTimeDialog", "hh:mm:ss", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("OriginTimeDialog", "dd-MM-yyyy", Q_NULLPTR));
        okButton->setText(QApplication::translate("OriginTimeDialog", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("OriginTimeDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OriginTimeDialog: public Ui_OriginTimeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINTIME_H
