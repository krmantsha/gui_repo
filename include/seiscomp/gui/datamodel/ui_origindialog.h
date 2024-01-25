/********************************************************************************
** Form generated from reading UI file 'origindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINDIALOG_H
#define UI_ORIGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *depthLabel;
    QLabel *lonLabel;
    QLabel *latLabel;
    QLabel *timeLabel;
    QDateTimeEdit *dateTimeEdit;
    QLineEdit *latLineEdit;
    QLabel *latUnitLabel;
    QLabel *lonUnitLabel;
    QLabel *depthUnitLabel;
    QLineEdit *lonLineEdit;
    QLineEdit *depthLineEdit;
    QGroupBox *advancedGroupBox;
    QGridLayout *gridLayout1;
    QLabel *magTypeLabel;
    QLabel *magLabel;
    QLabel *phaseCountLabel;
    QLineEdit *phaseCountLineEdit;
    QLineEdit *magLineEdit;
    QComboBox *magTypeComboBox;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *sendButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginDialog)
    {
        if (OriginDialog->objectName().isEmpty())
            OriginDialog->setObjectName(QStringLiteral("OriginDialog"));
        OriginDialog->resize(284, 346);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OriginDialog->sizePolicy().hasHeightForWidth());
        OriginDialog->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(OriginDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        groupBox = new QGroupBox(OriginDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        depthLabel = new QLabel(groupBox);
        depthLabel->setObjectName(QStringLiteral("depthLabel"));

        gridLayout->addWidget(depthLabel, 3, 0, 1, 1);

        lonLabel = new QLabel(groupBox);
        lonLabel->setObjectName(QStringLiteral("lonLabel"));

        gridLayout->addWidget(lonLabel, 2, 0, 1, 1);

        latLabel = new QLabel(groupBox);
        latLabel->setObjectName(QStringLiteral("latLabel"));

        gridLayout->addWidget(latLabel, 1, 0, 1, 1);

        timeLabel = new QLabel(groupBox);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(timeLabel->sizePolicy().hasHeightForWidth());
        timeLabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(timeLabel, 0, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(groupBox);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setAlignment(Qt::AlignRight);
        dateTimeEdit->setCurrentSection(QDateTimeEdit::YearSection);

        gridLayout->addWidget(dateTimeEdit, 0, 1, 1, 1);

        latLineEdit = new QLineEdit(groupBox);
        latLineEdit->setObjectName(QStringLiteral("latLineEdit"));

        gridLayout->addWidget(latLineEdit, 1, 1, 1, 1);

        latUnitLabel = new QLabel(groupBox);
        latUnitLabel->setObjectName(QStringLiteral("latUnitLabel"));

        gridLayout->addWidget(latUnitLabel, 1, 2, 1, 1);

        lonUnitLabel = new QLabel(groupBox);
        lonUnitLabel->setObjectName(QStringLiteral("lonUnitLabel"));

        gridLayout->addWidget(lonUnitLabel, 2, 2, 1, 1);

        depthUnitLabel = new QLabel(groupBox);
        depthUnitLabel->setObjectName(QStringLiteral("depthUnitLabel"));

        gridLayout->addWidget(depthUnitLabel, 3, 2, 1, 1);

        lonLineEdit = new QLineEdit(groupBox);
        lonLineEdit->setObjectName(QStringLiteral("lonLineEdit"));

        gridLayout->addWidget(lonLineEdit, 2, 1, 1, 1);

        depthLineEdit = new QLineEdit(groupBox);
        depthLineEdit->setObjectName(QStringLiteral("depthLineEdit"));

        gridLayout->addWidget(depthLineEdit, 3, 1, 1, 1);


        vboxLayout->addWidget(groupBox);

        advancedGroupBox = new QGroupBox(OriginDialog);
        advancedGroupBox->setObjectName(QStringLiteral("advancedGroupBox"));
        advancedGroupBox->setEnabled(true);
        advancedGroupBox->setCheckable(true);
        advancedGroupBox->setChecked(false);
        gridLayout1 = new QGridLayout(advancedGroupBox);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        magTypeLabel = new QLabel(advancedGroupBox);
        magTypeLabel->setObjectName(QStringLiteral("magTypeLabel"));
        sizePolicy1.setHeightForWidth(magTypeLabel->sizePolicy().hasHeightForWidth());
        magTypeLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(magTypeLabel, 2, 0, 1, 1);

        magLabel = new QLabel(advancedGroupBox);
        magLabel->setObjectName(QStringLiteral("magLabel"));
        sizePolicy1.setHeightForWidth(magLabel->sizePolicy().hasHeightForWidth());
        magLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(magLabel, 1, 0, 1, 1);

        phaseCountLabel = new QLabel(advancedGroupBox);
        phaseCountLabel->setObjectName(QStringLiteral("phaseCountLabel"));
        sizePolicy1.setHeightForWidth(phaseCountLabel->sizePolicy().hasHeightForWidth());
        phaseCountLabel->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(phaseCountLabel, 0, 0, 1, 1);

        phaseCountLineEdit = new QLineEdit(advancedGroupBox);
        phaseCountLineEdit->setObjectName(QStringLiteral("phaseCountLineEdit"));

        gridLayout1->addWidget(phaseCountLineEdit, 0, 1, 1, 1);

        magLineEdit = new QLineEdit(advancedGroupBox);
        magLineEdit->setObjectName(QStringLiteral("magLineEdit"));

        gridLayout1->addWidget(magLineEdit, 1, 1, 1, 1);

        magTypeComboBox = new QComboBox(advancedGroupBox);
        magTypeComboBox->setObjectName(QStringLiteral("magTypeComboBox"));
        magTypeComboBox->setEditable(true);
        magTypeComboBox->setMaxVisibleItems(30);

        gridLayout1->addWidget(magTypeComboBox, 2, 1, 1, 1);


        vboxLayout->addWidget(advancedGroupBox);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        sendButton = new QPushButton(OriginDialog);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(221, 223, 228, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(85, 85, 85, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(199, 199, 199, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush5(QColor(239, 239, 239, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush6(QColor(103, 141, 178, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush7(QColor(0, 0, 238, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Link, brush7);
        QBrush brush8(QColor(82, 24, 139, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::LinkVisited, brush8);
        QBrush brush9(QColor(232, 232, 232, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush9);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Link, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush9);
        QBrush brush10(QColor(128, 128, 128, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush10);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush11(QColor(86, 117, 148, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush11);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Link, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::LinkVisited, brush8);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush9);
        sendButton->setPalette(palette);

        hboxLayout->addWidget(sendButton);

        cancelButton = new QPushButton(OriginDialog);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(dateTimeEdit, latLineEdit);
        QWidget::setTabOrder(latLineEdit, lonLineEdit);
        QWidget::setTabOrder(lonLineEdit, depthLineEdit);
        QWidget::setTabOrder(depthLineEdit, advancedGroupBox);
        QWidget::setTabOrder(advancedGroupBox, phaseCountLineEdit);
        QWidget::setTabOrder(phaseCountLineEdit, magLineEdit);
        QWidget::setTabOrder(magLineEdit, magTypeComboBox);
        QWidget::setTabOrder(magTypeComboBox, sendButton);
        QWidget::setTabOrder(sendButton, cancelButton);

        retranslateUi(OriginDialog);
        QObject::connect(sendButton, SIGNAL(clicked()), OriginDialog, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginDialog);
    } // setupUi

    void retranslateUi(QDialog *OriginDialog)
    {
        OriginDialog->setWindowTitle(QApplication::translate("OriginDialog", "Artificial Origin", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OriginDialog", "Origin", Q_NULLPTR));
        depthLabel->setText(QApplication::translate("OriginDialog", "Depth:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        lonLabel->setToolTip(QApplication::translate("OriginDialog", "Longitude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        lonLabel->setText(QApplication::translate("OriginDialog", "Lon:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        latLabel->setToolTip(QApplication::translate("OriginDialog", "Latitude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        latLabel->setText(QApplication::translate("OriginDialog", "Lat:", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("OriginDialog", "Time:", Q_NULLPTR));
        dateTimeEdit->setDisplayFormat(QApplication::translate("OriginDialog", "yyyy-MM-dd hh:mm:ss", Q_NULLPTR));
        latUnitLabel->setText(QApplication::translate("OriginDialog", "deg", Q_NULLPTR));
        lonUnitLabel->setText(QApplication::translate("OriginDialog", "deg", Q_NULLPTR));
        depthUnitLabel->setText(QApplication::translate("OriginDialog", "km", Q_NULLPTR));
        advancedGroupBox->setTitle(QApplication::translate("OriginDialog", "Advanced", Q_NULLPTR));
        magTypeLabel->setText(QApplication::translate("OriginDialog", "Magnitude Type", Q_NULLPTR));
        magLabel->setText(QApplication::translate("OriginDialog", "Magnitude", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        phaseCountLabel->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        phaseCountLabel->setText(QApplication::translate("OriginDialog", "PhaseCount", Q_NULLPTR));
        sendButton->setText(QApplication::translate("OriginDialog", "Create", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("OriginDialog", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OriginDialog: public Ui_OriginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINDIALOG_H
