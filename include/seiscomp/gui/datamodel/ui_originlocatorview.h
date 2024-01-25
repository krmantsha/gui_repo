/********************************************************************************
** Form generated from reading UI file 'originlocatorview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINLOCATORVIEW_H
#define UI_ORIGINLOCATORVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OriginLocatorView
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QFrame *groupSummary;
    QVBoxLayout *vboxLayout1;
    QLabel *labelRegion;
    QFrame *frameMap;
    QFrame *groupBox;
    QGridLayout *gridLayout;
    QLabel *labelNumPhases;
    QLabel *labelAgency;
    QLabel *labelMinDistUnit;
    QLabel *labelDepth;
    QLabel *labelStdErrorUnit;
    QLabel *lbEventID;
    QLabel *labelLatitudeErrorUnit;
    QLabel *labelLatitudeError;
    QLabel *label_13;
    QLabel *labelLongitude;
    QLabel *labelCreated;
    QLabel *label_11;
    QLabel *labelLongitudeErrorUnit;
    QLabel *labelUser;
    QLabel *labelEarthModel;
    QFrame *frameInfoSeparator;
    QLabel *labelNumPhasesError;
    QLabel *labelLatitudeUnit;
    QLabel *labelStdError;
    QLabel *labelLatitude;
    QLabel *label_7;
    QLabel *labelEventID;
    QLabel *labelDepthErrorUnit;
    QLabel *labelTime;
    QLabel *label_12;
    QLabel *lbEarthModel;
    QLabel *lbMethod;
    QLabel *labelMinDist;
    QLabel *lbAgencyID;
    QLabel *label_8;
    QLabel *labelMethod;
    QLabel *label_10;
    QSpacerItem *spacerItem;
    QLabel *label_16;
    QLabel *labelNumPhasesUnit;
    QLabel *lbUser;
    QLabel *label_9;
    QLabel *labelLongitudeError;
    QLabel *labelDepthError;
    QLabel *labelEvaluation;
    QLabel *labelLongitudeUnit;
    QLabel *label_15;
    QLabel *labelAzimuthGap;
    QLabel *labelDepthUnit;
    QLabel *labelAzimuthGapUnit;
    QLabel *lbEvaluation;
    QLabel *lbComment;
    QLabel *labelComment;
    QFrame *groupResiduals;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QLabel *label_5;
    QLabel *labelPlotFilter;
    QTableView *tableArrivals;
    QFrame *toolButtonGroupBox;
    QGridLayout *gridLayout1;
    QFrame *frameDepthType;
    QHBoxLayout *hboxLayout2;
    QComboBox *cbDepthType;
    QFrame *frameActionsLeft;
    QHBoxLayout *hboxLayout3;
    QToolButton *btnRelocate;
    QToolButton *btnCustom0;
    QToolButton *btnCustom1;
    QSpacerItem *spacerItem2;
    QFrame *frameLocator;
    QHBoxLayout *hboxLayout4;
    QComboBox *cbLocator;
    QToolButton *btnLocatorSettings;
    QSpacerItem *spacerItem3;
    QLabel *label_2;
    QComboBox *cbLocatorProfile;
    QSpacerItem *spacerItem4;
    QFrame *frameFixDepth;
    QHBoxLayout *hboxLayout5;
    QCheckBox *cbFixedDepth;
    QLineEdit *editFixedDepth;
    QLabel *label_3;
    QSpacerItem *spacerItem5;
    QFrame *frame;
    QHBoxLayout *hboxLayout6;
    QCheckBox *cbDistanceCutOff;
    QLineEdit *editDistanceCutOff;
    QLabel *label;
    QSpacerItem *spacerItem6;
    QCheckBox *cbIgnoreInitialLocation;
    QSpacerItem *spacerItem7;
    QToolButton *buttonEditComment;
    QFrame *frameActionsRight;
    QHBoxLayout *hboxLayout7;
    QSpacerItem *spacerItem8;
    QToolButton *btnShowWaveforms;
    QToolButton *btnImportAllArrivals;
    QToolButton *btnMagnitudes;
    QToolButton *btnCommit;

    void setupUi(QWidget *OriginLocatorView)
    {
        if (OriginLocatorView->objectName().isEmpty())
            OriginLocatorView->setObjectName(QStringLiteral("OriginLocatorView"));
        OriginLocatorView->resize(1734, 1127);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OriginLocatorView->sizePolicy().hasHeightForWidth());
        OriginLocatorView->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(OriginLocatorView);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        groupSummary = new QFrame(OriginLocatorView);
        groupSummary->setObjectName(QStringLiteral("groupSummary"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupSummary->sizePolicy().hasHeightForWidth());
        groupSummary->setSizePolicy(sizePolicy1);
        groupSummary->setFrameShape(QFrame::NoFrame);
        groupSummary->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(groupSummary);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        labelRegion = new QLabel(groupSummary);
        labelRegion->setObjectName(QStringLiteral("labelRegion"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(4));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelRegion->sizePolicy().hasHeightForWidth());
        labelRegion->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        labelRegion->setFont(font);
        labelRegion->setFrameShape(QFrame::NoFrame);

        vboxLayout1->addWidget(labelRegion);

        frameMap = new QFrame(groupSummary);
        frameMap->setObjectName(QStringLiteral("frameMap"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(7));
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy3);
        frameMap->setMinimumSize(QSize(120, 200));
        frameMap->setMaximumSize(QSize(2000, 2000));
        QPalette palette;
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(10), QColor(239, 239, 239));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        palette.setColor(QPalette::Active, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(0), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(6), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(8), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(9), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(10), QColor(239, 239, 239));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(12), QColor(103, 141, 178));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        palette.setColor(QPalette::Inactive, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(0), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(1), QColor(221, 223, 228));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(2), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(3), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(4), QColor(85, 85, 85));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(5), QColor(199, 199, 199));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(6), QColor(199, 199, 199));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(7), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(8), QColor(128, 128, 128));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(9), QColor(239, 239, 239));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(10), QColor(239, 239, 239));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(11), QColor(0, 0, 0));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(12), QColor(86, 117, 148));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(13), QColor(255, 255, 255));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(14), QColor(0, 0, 238));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(15), QColor(82, 24, 139));
        palette.setColor(QPalette::Disabled, static_cast<QPalette::ColorRole>(16), QColor(232, 232, 232));
        frameMap->setPalette(palette);
        frameMap->setFrameShape(QFrame::NoFrame);
        frameMap->setFrameShadow(QFrame::Plain);

        vboxLayout1->addWidget(frameMap);


        hboxLayout->addWidget(groupSummary);

        groupBox = new QFrame(OriginLocatorView);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy4);
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(9, 9, 9, 9);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelNumPhases = new QLabel(groupBox);
        labelNumPhases->setObjectName(QStringLiteral("labelNumPhases"));
        labelNumPhases->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumPhases, 4, 1, 1, 1);

        labelAgency = new QLabel(groupBox);
        labelAgency->setObjectName(QStringLiteral("labelAgency"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelAgency->sizePolicy().hasHeightForWidth());
        labelAgency->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelAgency, 12, 1, 1, 4);

        labelMinDistUnit = new QLabel(groupBox);
        labelMinDistUnit->setObjectName(QStringLiteral("labelMinDistUnit"));

        gridLayout->addWidget(labelMinDistUnit, 8, 2, 1, 1);

        labelDepth = new QLabel(groupBox);
        labelDepth->setObjectName(QStringLiteral("labelDepth"));
        labelDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelDepth, 1, 1, 1, 1);

        labelStdErrorUnit = new QLabel(groupBox);
        labelStdErrorUnit->setObjectName(QStringLiteral("labelStdErrorUnit"));

        gridLayout->addWidget(labelStdErrorUnit, 5, 2, 1, 1);

        lbEventID = new QLabel(groupBox);
        lbEventID->setObjectName(QStringLiteral("lbEventID"));
        lbEventID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEventID, 11, 0, 1, 1);

        labelLatitudeErrorUnit = new QLabel(groupBox);
        labelLatitudeErrorUnit->setObjectName(QStringLiteral("labelLatitudeErrorUnit"));

        gridLayout->addWidget(labelLatitudeErrorUnit, 2, 4, 1, 1);

        labelLatitudeError = new QLabel(groupBox);
        labelLatitudeError->setObjectName(QStringLiteral("labelLatitudeError"));
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelLatitudeError, 2, 3, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        labelLongitude = new QLabel(groupBox);
        labelLongitude->setObjectName(QStringLiteral("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLongitude, 3, 1, 1, 1);

        labelCreated = new QLabel(groupBox);
        labelCreated->setObjectName(QStringLiteral("labelCreated"));

        gridLayout->addWidget(labelCreated, 17, 1, 1, 4);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        labelLongitudeErrorUnit = new QLabel(groupBox);
        labelLongitudeErrorUnit->setObjectName(QStringLiteral("labelLongitudeErrorUnit"));

        gridLayout->addWidget(labelLongitudeErrorUnit, 3, 4, 1, 1);

        labelUser = new QLabel(groupBox);
        labelUser->setObjectName(QStringLiteral("labelUser"));
        sizePolicy5.setHeightForWidth(labelUser->sizePolicy().hasHeightForWidth());
        labelUser->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelUser, 13, 1, 1, 4);

        labelEarthModel = new QLabel(groupBox);
        labelEarthModel->setObjectName(QStringLiteral("labelEarthModel"));
        sizePolicy5.setHeightForWidth(labelEarthModel->sizePolicy().hasHeightForWidth());
        labelEarthModel->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelEarthModel, 16, 1, 1, 4);

        frameInfoSeparator = new QFrame(groupBox);
        frameInfoSeparator->setObjectName(QStringLiteral("frameInfoSeparator"));
        frameInfoSeparator->setFrameShape(QFrame::HLine);
        frameInfoSeparator->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frameInfoSeparator, 10, 0, 1, 5);

        labelNumPhasesError = new QLabel(groupBox);
        labelNumPhasesError->setObjectName(QStringLiteral("labelNumPhasesError"));
        labelNumPhasesError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelNumPhasesError, 4, 3, 1, 1);

        labelLatitudeUnit = new QLabel(groupBox);
        labelLatitudeUnit->setObjectName(QStringLiteral("labelLatitudeUnit"));

        gridLayout->addWidget(labelLatitudeUnit, 2, 2, 1, 1);

        labelStdError = new QLabel(groupBox);
        labelStdError->setObjectName(QStringLiteral("labelStdError"));
        labelStdError->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelStdError, 5, 1, 1, 1);

        labelLatitude = new QLabel(groupBox);
        labelLatitude->setObjectName(QStringLiteral("labelLatitude"));
        labelLatitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelLatitude, 2, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        labelEventID = new QLabel(groupBox);
        labelEventID->setObjectName(QStringLiteral("labelEventID"));
        sizePolicy5.setHeightForWidth(labelEventID->sizePolicy().hasHeightForWidth());
        labelEventID->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelEventID, 11, 1, 1, 4);

        labelDepthErrorUnit = new QLabel(groupBox);
        labelDepthErrorUnit->setObjectName(QStringLiteral("labelDepthErrorUnit"));

        gridLayout->addWidget(labelDepthErrorUnit, 1, 4, 1, 1);

        labelTime = new QLabel(groupBox);
        labelTime->setObjectName(QStringLiteral("labelTime"));
        labelTime->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelTime, 0, 1, 1, 4);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_12, 1, 0, 1, 1);

        lbEarthModel = new QLabel(groupBox);
        lbEarthModel->setObjectName(QStringLiteral("lbEarthModel"));
        lbEarthModel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEarthModel, 16, 0, 1, 1);

        lbMethod = new QLabel(groupBox);
        lbMethod->setObjectName(QStringLiteral("lbMethod"));
        lbMethod->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbMethod, 15, 0, 1, 1);

        labelMinDist = new QLabel(groupBox);
        labelMinDist->setObjectName(QStringLiteral("labelMinDist"));
        labelMinDist->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelMinDist, 8, 1, 1, 1);

        lbAgencyID = new QLabel(groupBox);
        lbAgencyID->setObjectName(QStringLiteral("lbAgencyID"));
        lbAgencyID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbAgencyID, 12, 0, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        labelMethod = new QLabel(groupBox);
        labelMethod->setObjectName(QStringLiteral("labelMethod"));
        sizePolicy5.setHeightForWidth(labelMethod->sizePolicy().hasHeightForWidth());
        labelMethod->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(labelMethod, 15, 1, 1, 4);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_10, 2, 0, 1, 1);

        spacerItem = new QSpacerItem(201, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 9, 0, 1, 5);

        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_16, 17, 0, 1, 1);

        labelNumPhasesUnit = new QLabel(groupBox);
        labelNumPhasesUnit->setObjectName(QStringLiteral("labelNumPhasesUnit"));
        labelNumPhasesUnit->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelNumPhasesUnit, 4, 2, 1, 1);

        lbUser = new QLabel(groupBox);
        lbUser->setObjectName(QStringLiteral("lbUser"));
        lbUser->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbUser, 13, 0, 1, 1);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        labelLongitudeError = new QLabel(groupBox);
        labelLongitudeError->setObjectName(QStringLiteral("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelLongitudeError, 3, 3, 1, 1);

        labelDepthError = new QLabel(groupBox);
        labelDepthError->setObjectName(QStringLiteral("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(labelDepthError, 1, 3, 1, 1);

        labelEvaluation = new QLabel(groupBox);
        labelEvaluation->setObjectName(QStringLiteral("labelEvaluation"));

        gridLayout->addWidget(labelEvaluation, 14, 1, 1, 4);

        labelLongitudeUnit = new QLabel(groupBox);
        labelLongitudeUnit->setObjectName(QStringLiteral("labelLongitudeUnit"));

        gridLayout->addWidget(labelLongitudeUnit, 3, 2, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_15, 0, 0, 1, 1);

        labelAzimuthGap = new QLabel(groupBox);
        labelAzimuthGap->setObjectName(QStringLiteral("labelAzimuthGap"));
        labelAzimuthGap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelAzimuthGap, 7, 1, 1, 1);

        labelDepthUnit = new QLabel(groupBox);
        labelDepthUnit->setObjectName(QStringLiteral("labelDepthUnit"));

        gridLayout->addWidget(labelDepthUnit, 1, 2, 1, 1);

        labelAzimuthGapUnit = new QLabel(groupBox);
        labelAzimuthGapUnit->setObjectName(QStringLiteral("labelAzimuthGapUnit"));

        gridLayout->addWidget(labelAzimuthGapUnit, 7, 2, 1, 1);

        lbEvaluation = new QLabel(groupBox);
        lbEvaluation->setObjectName(QStringLiteral("lbEvaluation"));
        lbEvaluation->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbEvaluation, 14, 0, 1, 1);

        lbComment = new QLabel(groupBox);
        lbComment->setObjectName(QStringLiteral("lbComment"));
        lbComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(lbComment, 6, 0, 1, 1);

        labelComment = new QLabel(groupBox);
        labelComment->setObjectName(QStringLiteral("labelComment"));
        labelComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(labelComment, 6, 1, 1, 1);


        hboxLayout->addWidget(groupBox);

        groupResiduals = new QFrame(OriginLocatorView);
        groupResiduals->setObjectName(QStringLiteral("groupResiduals"));
        sizePolicy1.setHeightForWidth(groupResiduals->sizePolicy().hasHeightForWidth());
        groupResiduals->setSizePolicy(sizePolicy1);
        groupResiduals->setFrameShape(QFrame::NoFrame);
        vboxLayout2 = new QVBoxLayout(groupResiduals);
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem1 = new QSpacerItem(40, 4, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        label_5 = new QLabel(groupResiduals);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);

        hboxLayout1->addWidget(label_5);

        labelPlotFilter = new QLabel(groupResiduals);
        labelPlotFilter->setObjectName(QStringLiteral("labelPlotFilter"));
        sizePolicy6.setHeightForWidth(labelPlotFilter->sizePolicy().hasHeightForWidth());
        labelPlotFilter->setSizePolicy(sizePolicy6);

        hboxLayout1->addWidget(labelPlotFilter);


        vboxLayout2->addLayout(hboxLayout1);


        hboxLayout->addWidget(groupResiduals);


        vboxLayout->addLayout(hboxLayout);

        tableArrivals = new QTableView(OriginLocatorView);
        tableArrivals->setObjectName(QStringLiteral("tableArrivals"));
        tableArrivals->setFrameShape(QFrame::NoFrame);
        tableArrivals->setFrameShadow(QFrame::Plain);
        tableArrivals->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableArrivals->setAlternatingRowColors(true);
        tableArrivals->setSelectionMode(QAbstractItemView::SingleSelection);
        tableArrivals->setSelectionBehavior(QAbstractItemView::SelectRows);

        vboxLayout->addWidget(tableArrivals);

        toolButtonGroupBox = new QFrame(OriginLocatorView);
        toolButtonGroupBox->setObjectName(QStringLiteral("toolButtonGroupBox"));
        sizePolicy6.setHeightForWidth(toolButtonGroupBox->sizePolicy().hasHeightForWidth());
        toolButtonGroupBox->setSizePolicy(sizePolicy6);
        toolButtonGroupBox->setFrameShape(QFrame::NoFrame);
        gridLayout1 = new QGridLayout(toolButtonGroupBox);
        gridLayout1->setSpacing(6);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        frameDepthType = new QFrame(toolButtonGroupBox);
        frameDepthType->setObjectName(QStringLiteral("frameDepthType"));
        frameDepthType->setFrameShape(QFrame::NoFrame);
        frameDepthType->setFrameShadow(QFrame::Raised);
        hboxLayout2 = new QHBoxLayout(frameDepthType);
        hboxLayout2->setSpacing(6);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        cbDepthType = new QComboBox(frameDepthType);
        cbDepthType->setObjectName(QStringLiteral("cbDepthType"));
        cbDepthType->setEnabled(false);

        hboxLayout2->addWidget(cbDepthType);


        gridLayout1->addWidget(frameDepthType, 1, 1, 1, 1);

        frameActionsLeft = new QFrame(toolButtonGroupBox);
        frameActionsLeft->setObjectName(QStringLiteral("frameActionsLeft"));
        sizePolicy.setHeightForWidth(frameActionsLeft->sizePolicy().hasHeightForWidth());
        frameActionsLeft->setSizePolicy(sizePolicy);
        frameActionsLeft->setFrameShape(QFrame::NoFrame);
        frameActionsLeft->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameActionsLeft);
        hboxLayout3->setSpacing(6);
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        btnRelocate = new QToolButton(frameActionsLeft);
        btnRelocate->setObjectName(QStringLiteral("btnRelocate"));
        btnRelocate->setEnabled(false);

        hboxLayout3->addWidget(btnRelocate);

        btnCustom0 = new QToolButton(frameActionsLeft);
        btnCustom0->setObjectName(QStringLiteral("btnCustom0"));
        btnCustom0->setEnabled(false);

        hboxLayout3->addWidget(btnCustom0);

        btnCustom1 = new QToolButton(frameActionsLeft);
        btnCustom1->setObjectName(QStringLiteral("btnCustom1"));
        btnCustom1->setEnabled(false);

        hboxLayout3->addWidget(btnCustom1);

        spacerItem2 = new QSpacerItem(31, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem2);


        gridLayout1->addWidget(frameActionsLeft, 1, 0, 1, 1);

        frameLocator = new QFrame(toolButtonGroupBox);
        frameLocator->setObjectName(QStringLiteral("frameLocator"));
        sizePolicy.setHeightForWidth(frameLocator->sizePolicy().hasHeightForWidth());
        frameLocator->setSizePolicy(sizePolicy);
        frameLocator->setFrameShape(QFrame::NoFrame);
        frameLocator->setFrameShadow(QFrame::Raised);
        hboxLayout4 = new QHBoxLayout(frameLocator);
        hboxLayout4->setSpacing(6);
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        cbLocator = new QComboBox(frameLocator);
        cbLocator->setObjectName(QStringLiteral("cbLocator"));
        cbLocator->setEnabled(false);

        hboxLayout4->addWidget(cbLocator);

        btnLocatorSettings = new QToolButton(frameLocator);
        btnLocatorSettings->setObjectName(QStringLiteral("btnLocatorSettings"));
        btnLocatorSettings->setEnabled(false);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/configure.png"));
        btnLocatorSettings->setIcon(icon);
        btnLocatorSettings->setAutoRaise(true);

        hboxLayout4->addWidget(btnLocatorSettings);

        spacerItem3 = new QSpacerItem(20, 27, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);

        label_2 = new QLabel(frameLocator);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout4->addWidget(label_2);

        cbLocatorProfile = new QComboBox(frameLocator);
        cbLocatorProfile->setObjectName(QStringLiteral("cbLocatorProfile"));
        cbLocatorProfile->setEnabled(false);
        cbLocatorProfile->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        hboxLayout4->addWidget(cbLocatorProfile);

        spacerItem4 = new QSpacerItem(20, 27, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem4);


        gridLayout1->addWidget(frameLocator, 0, 0, 1, 1);

        frameFixDepth = new QFrame(toolButtonGroupBox);
        frameFixDepth->setObjectName(QStringLiteral("frameFixDepth"));
        frameFixDepth->setFrameShape(QFrame::NoFrame);
        frameFixDepth->setFrameShadow(QFrame::Raised);
        hboxLayout5 = new QHBoxLayout(frameFixDepth);
        hboxLayout5->setSpacing(6);
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        cbFixedDepth = new QCheckBox(frameFixDepth);
        cbFixedDepth->setObjectName(QStringLiteral("cbFixedDepth"));
        QSizePolicy sizePolicy7(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(cbFixedDepth->sizePolicy().hasHeightForWidth());
        cbFixedDepth->setSizePolicy(sizePolicy7);

        hboxLayout5->addWidget(cbFixedDepth);

        editFixedDepth = new QLineEdit(frameFixDepth);
        editFixedDepth->setObjectName(QStringLiteral("editFixedDepth"));
        editFixedDepth->setEnabled(false);
        QSizePolicy sizePolicy8(static_cast<QSizePolicy::Policy>(3), static_cast<QSizePolicy::Policy>(0));
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(editFixedDepth->sizePolicy().hasHeightForWidth());
        editFixedDepth->setSizePolicy(sizePolicy8);
        editFixedDepth->setMinimumSize(QSize(60, 0));
        editFixedDepth->setAlignment(Qt::AlignRight);

        hboxLayout5->addWidget(editFixedDepth);

        label_3 = new QLabel(frameFixDepth);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy9(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy9);

        hboxLayout5->addWidget(label_3);

        spacerItem5 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem5);


        gridLayout1->addWidget(frameFixDepth, 0, 1, 1, 1);

        frame = new QFrame(toolButtonGroupBox);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy10(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy10.setHorizontalStretch(1);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy10);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout6 = new QHBoxLayout(frame);
        hboxLayout6->setSpacing(6);
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        cbDistanceCutOff = new QCheckBox(frame);
        cbDistanceCutOff->setObjectName(QStringLiteral("cbDistanceCutOff"));

        hboxLayout6->addWidget(cbDistanceCutOff);

        editDistanceCutOff = new QLineEdit(frame);
        editDistanceCutOff->setObjectName(QStringLiteral("editDistanceCutOff"));
        editDistanceCutOff->setEnabled(false);
        editDistanceCutOff->setMinimumSize(QSize(60, 0));
        editDistanceCutOff->setMaximumSize(QSize(60, 16777215));
        editDistanceCutOff->setAlignment(Qt::AlignRight);

        hboxLayout6->addWidget(editDistanceCutOff);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout6->addWidget(label);

        spacerItem6 = new QSpacerItem(20, 27, QSizePolicy::Fixed, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem6);

        cbIgnoreInitialLocation = new QCheckBox(frame);
        cbIgnoreInitialLocation->setObjectName(QStringLiteral("cbIgnoreInitialLocation"));

        hboxLayout6->addWidget(cbIgnoreInitialLocation);

        spacerItem7 = new QSpacerItem(120, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem7);

        buttonEditComment = new QToolButton(frame);
        buttonEditComment->setObjectName(QStringLiteral("buttonEditComment"));
        buttonEditComment->setEnabled(false);
        buttonEditComment->setMaximumSize(QSize(25, 25));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/icons/comment.png"));
        buttonEditComment->setIcon(icon1);
        buttonEditComment->setIconSize(QSize(24, 24));
        buttonEditComment->setAutoRaise(true);

        hboxLayout6->addWidget(buttonEditComment);


        gridLayout1->addWidget(frame, 0, 2, 1, 1);

        frameActionsRight = new QFrame(toolButtonGroupBox);
        frameActionsRight->setObjectName(QStringLiteral("frameActionsRight"));
        sizePolicy10.setHeightForWidth(frameActionsRight->sizePolicy().hasHeightForWidth());
        frameActionsRight->setSizePolicy(sizePolicy10);
        frameActionsRight->setFrameShape(QFrame::NoFrame);
        frameActionsRight->setFrameShadow(QFrame::Raised);
        hboxLayout7 = new QHBoxLayout(frameActionsRight);
        hboxLayout7->setSpacing(6);
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem8);

        btnShowWaveforms = new QToolButton(frameActionsRight);
        btnShowWaveforms->setObjectName(QStringLiteral("btnShowWaveforms"));
        btnShowWaveforms->setEnabled(false);

        hboxLayout7->addWidget(btnShowWaveforms);

        btnImportAllArrivals = new QToolButton(frameActionsRight);
        btnImportAllArrivals->setObjectName(QStringLiteral("btnImportAllArrivals"));
        btnImportAllArrivals->setEnabled(false);

        hboxLayout7->addWidget(btnImportAllArrivals);

        btnMagnitudes = new QToolButton(frameActionsRight);
        btnMagnitudes->setObjectName(QStringLiteral("btnMagnitudes"));
        btnMagnitudes->setEnabled(false);

        hboxLayout7->addWidget(btnMagnitudes);

        btnCommit = new QToolButton(frameActionsRight);
        btnCommit->setObjectName(QStringLiteral("btnCommit"));
        btnCommit->setEnabled(false);

        hboxLayout7->addWidget(btnCommit);


        gridLayout1->addWidget(frameActionsRight, 1, 2, 1, 1);


        vboxLayout->addWidget(toolButtonGroupBox);

        QWidget::setTabOrder(tableArrivals, cbLocator);
        QWidget::setTabOrder(cbLocator, btnLocatorSettings);
        QWidget::setTabOrder(btnLocatorSettings, cbLocatorProfile);
        QWidget::setTabOrder(cbLocatorProfile, cbFixedDepth);
        QWidget::setTabOrder(cbFixedDepth, editFixedDepth);
        QWidget::setTabOrder(editFixedDepth, cbDistanceCutOff);
        QWidget::setTabOrder(cbDistanceCutOff, editDistanceCutOff);

        retranslateUi(OriginLocatorView);
        QObject::connect(cbFixedDepth, SIGNAL(toggled(bool)), editFixedDepth, SLOT(setEnabled(bool)));
        QObject::connect(cbFixedDepth, SIGNAL(toggled(bool)), cbDepthType, SLOT(setEnabled(bool)));
        QObject::connect(cbDistanceCutOff, SIGNAL(toggled(bool)), editDistanceCutOff, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(OriginLocatorView);
    } // setupUi

    void retranslateUi(QWidget *OriginLocatorView)
    {
        OriginLocatorView->setWindowTitle(QApplication::translate("OriginLocatorView", "OriginLocatorView", Q_NULLPTR));
        labelRegion->setText(QApplication::translate("OriginLocatorView", "Region", Q_NULLPTR));
        labelNumPhases->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        labelAgency->setText(QApplication::translate("OriginLocatorView", "GFZ Potsdam", Q_NULLPTR));
        labelMinDistUnit->setText(QApplication::translate("OriginLocatorView", "\302\260", Q_NULLPTR));
        labelDepth->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        labelStdErrorUnit->setText(QApplication::translate("OriginLocatorView", "s", Q_NULLPTR));
        lbEventID->setText(QApplication::translate("OriginLocatorView", "EventID:", Q_NULLPTR));
        labelLatitudeErrorUnit->setText(QApplication::translate("OriginLocatorView", "km", Q_NULLPTR));
        labelLatitudeError->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        label_13->setText(QApplication::translate("OriginLocatorView", "RMS Res.:", Q_NULLPTR));
        labelLongitude->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        labelCreated->setText(QString());
        label_11->setText(QApplication::translate("OriginLocatorView", "Lon:", Q_NULLPTR));
        labelLongitudeErrorUnit->setText(QApplication::translate("OriginLocatorView", "km", Q_NULLPTR));
        labelUser->setText(QString());
        labelEarthModel->setText(QString());
        labelNumPhasesError->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        labelLatitudeUnit->setText(QApplication::translate("OriginLocatorView", "\302\260", Q_NULLPTR));
        labelStdError->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        labelLatitude->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        label_7->setText(QApplication::translate("OriginLocatorView", " Az. Gap:", Q_NULLPTR));
        labelEventID->setText(QString());
        labelDepthErrorUnit->setText(QString());
        labelTime->setText(QString());
        label_12->setText(QApplication::translate("OriginLocatorView", "Depth:", Q_NULLPTR));
        lbEarthModel->setText(QApplication::translate("OriginLocatorView", "Earth model:", Q_NULLPTR));
        lbMethod->setText(QApplication::translate("OriginLocatorView", "Method:", Q_NULLPTR));
        labelMinDist->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        lbAgencyID->setText(QApplication::translate("OriginLocatorView", "Agency:", Q_NULLPTR));
        label_8->setText(QApplication::translate("OriginLocatorView", "Phases:", Q_NULLPTR));
        labelMethod->setText(QString());
        label_10->setText(QApplication::translate("OriginLocatorView", "Lat:", Q_NULLPTR));
        label_16->setText(QApplication::translate("OriginLocatorView", "Updated:", Q_NULLPTR));
        labelNumPhasesUnit->setText(QApplication::translate("OriginLocatorView", "/", Q_NULLPTR));
        lbUser->setText(QApplication::translate("OriginLocatorView", "Author:", Q_NULLPTR));
        label_9->setText(QApplication::translate("OriginLocatorView", "Min. Dist.:", Q_NULLPTR));
        labelLongitudeError->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        labelDepthError->setText(QString());
        labelEvaluation->setText(QApplication::translate("OriginLocatorView", "- (-)", Q_NULLPTR));
        labelLongitudeUnit->setText(QApplication::translate("OriginLocatorView", "\302\260", Q_NULLPTR));
        label_15->setText(QApplication::translate("OriginLocatorView", "Time:", Q_NULLPTR));
        labelAzimuthGap->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        labelDepthUnit->setText(QApplication::translate("OriginLocatorView", "km", Q_NULLPTR));
        labelAzimuthGapUnit->setText(QApplication::translate("OriginLocatorView", "\302\260", Q_NULLPTR));
        lbEvaluation->setText(QApplication::translate("OriginLocatorView", "Evaluation:", Q_NULLPTR));
        lbComment->setText(QApplication::translate("OriginLocatorView", "Custom:", Q_NULLPTR));
        labelComment->setText(QApplication::translate("OriginLocatorView", "-", Q_NULLPTR));
        label_5->setText(QApplication::translate("OriginLocatorView", "Filter is", Q_NULLPTR));
        labelPlotFilter->setText(QApplication::translate("OriginLocatorView", "<a href=\"filter\">not active</a>", Q_NULLPTR));
        btnRelocate->setText(QApplication::translate("OriginLocatorView", "Relocate", Q_NULLPTR));
        btnCustom0->setText(QApplication::translate("OriginLocatorView", "Custom1", Q_NULLPTR));
        btnCustom1->setText(QApplication::translate("OriginLocatorView", "Custom2", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnLocatorSettings->setToolTip(QApplication::translate("OriginLocatorView", "Change locator settings", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnLocatorSettings->setText(QApplication::translate("OriginLocatorView", "...", Q_NULLPTR));
        label_2->setText(QApplication::translate("OriginLocatorView", "Profile:", Q_NULLPTR));
        cbFixedDepth->setText(QApplication::translate("OriginLocatorView", "Fix depth", Q_NULLPTR));
        label_3->setText(QApplication::translate("OriginLocatorView", "km", Q_NULLPTR));
        cbDistanceCutOff->setText(QApplication::translate("OriginLocatorView", "Distance cutoff", Q_NULLPTR));
        label->setText(QApplication::translate("OriginLocatorView", "km", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbIgnoreInitialLocation->setToolTip(QApplication::translate("OriginLocatorView", "Instructs the locator to ignore the passed initial location and to try to locate the event based on the given phases only.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cbIgnoreInitialLocation->setWhatsThis(QApplication::translate("OriginLocatorView", "Instructs the locator to ignore the passed initial location and to try to locate the event based on the given phases only.", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        cbIgnoreInitialLocation->setText(QApplication::translate("OriginLocatorView", "Ignore initial location", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonEditComment->setToolTip(QApplication::translate("OriginLocatorView", "Create a new comment on this event or edit an existing one.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonEditComment->setText(QString());
        btnShowWaveforms->setText(QApplication::translate("OriginLocatorView", "Picker", Q_NULLPTR));
        btnImportAllArrivals->setText(QApplication::translate("OriginLocatorView", "Import picks", Q_NULLPTR));
        btnMagnitudes->setText(QApplication::translate("OriginLocatorView", "Compute magnitudes", Q_NULLPTR));
        btnCommit->setText(QApplication::translate("OriginLocatorView", "Commit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OriginLocatorView: public Ui_OriginLocatorView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINLOCATORVIEW_H
