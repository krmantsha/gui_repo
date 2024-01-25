/********************************************************************************
** Form generated from reading UI file 'eventsummaryview_hypocenter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTSUMMARYVIEW_HYPOCENTER_H
#define UI_EVENTSUMMARYVIEW_HYPOCENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hypocenter
{
public:
    QGridLayout *gridLayout;
    QFrame *fmFrameInformation;
    QGridLayout *gridLayout1;
    QLabel *labelStatus;
    QLabel *labelLatitude;
    QLabel *labelNP0;
    QLabel *labelNP1;
    QLabel *labelLongitudeError;
    QLabel *labelPhasesTxt;
    QLabel *labelLongitude;
    QLabel *labelStatusTxt;
    QLabel *labelLongitudeUnit;
    QLabel *labelLatitudeTxt;
    QLabel *labelDepthUnit;
    QLabel *labelDepthTxt;
    QLabel *fmLabelVDistance;
    QLabel *labelAgencyTxt;
    QLabel *labelTypeTxt;
    QLabel *labelAgency;
    QLabel *labelLongitudeTxt;
    QLabel *labelMisfit;
    QLabel *labelMwTxt;
    QLabel *labelThisSolutionTxt;
    QLabel *labelDepth;
    QLabel *labelType;
    QLabel *labelNPTxt;
    QLabel *labelMisfitTxt;
    QLabel *labelLatitudeError;
    QLabel *labelMw;
    QLabel *labelPhases;
    QLabel *labelCLVD;
    QLabel *labelMinDist;
    QLabel *labelMinDistUnit;
    QLabel *labelMaxDist;
    QLabel *labelMaxDistUnit;
    QLabel *labelThisSolution;
    QLabel *labelDepthError;
    QLabel *labelCLVDTxt;
    QLabel *labelMinDistTxt;
    QLabel *labelMaxDistTxt;
    QLabel *labelLatitudeUnit;
    QLabel *labelMomentTxt;
    QLabel *labelMoment;
    QLabel *labelMomentUnit;
    QLabel *labelFMSeparator;
    QFrame *frameInformationAutomatic;
    QGridLayout *gridLayout2;
    QLabel *labelVDistanceAutomatic;
    QLabel *_lbRMSAutomatic;
    QLabel *_lbLatErrorAutomatic;
    QLabel *_lbLatitudeAutomatic;
    QLabel *_lbOriginStatusAutomatic;
    QLabel *_lbLongitudeUnitAutomatic;
    QLabel *_lbDepthUnitAutomatic;
    QLabel *_lbCommentAutomatic;
    QLabel *_lbNoPhasesAutomatic;
    QSpacerItem *spacerItem;
    QLabel *_lbAgencyAutomatic;
    QLabel *_lbLongitudeAutomatic;
    QLabel *_lbDepthErrorAutomatic;
    QLabel *_lbDepthAutomatic;
    QLabel *_lbLongErrorAutomatic;
    QLabel *_lbLatitudeUnitAutomatic;
    QLabel *_lbAzGapAutomatic;
    QLabel *label_2;
    QLabel *fmLabelFrameInfoSpacer;
    QFrame *fmFrameInformationAutomatic;
    QGridLayout *gridLayout3;
    QLabel *labelNP0Automatic;
    QLabel *labelNP1Automatic;
    QLabel *labelDepthErrorAutomatic;
    QLabel *labelCLVDAutomatic;
    QLabel *labelMinDistAutomatic;
    QLabel *labelMinDistUnitAutomatic;
    QLabel *labelMaxDistAutomatic;
    QLabel *labelMaxDistUnitAutomatic;
    QLabel *labelLongitudeAutomatic;
    QLabel *labelDepthAutomatic;
    QLabel *labelLongitudeUnitAutomatic;
    QLabel *labelLatitudeUnitAutomatic;
    QLabel *labelTypeAutomatic;
    QLabel *labelPhasesAutomatic;
    QLabel *fmLabelVDistanceAutomatic;
    QLabel *labelLongitudeErrorAutomatic;
    QLabel *labelAgencyAutomatic;
    QLabel *labelThisSolutionAutomatic;
    QLabel *labelDepthUnitAutomatic;
    QLabel *labelLatitudeAutomatic;
    QLabel *labelStatusAutomatic;
    QLabel *labelMwAutomatic;
    QLabel *labelLatitudeErrorAutomatic;
    QLabel *labelMisfitAutomatic;
    QLabel *labelMomentAutomatic;
    QLabel *labelMomentUnitAutomatic;
    QLabel *labelFrameInfoSpacer;
    QFrame *frameInformation;
    QGridLayout *gridLayout4;
    QLabel *_lbThisLocation;
    QSpacerItem *spacerItem1;
    QLabel *_lbAgencyTxt;
    QLabel *_lbDepthError;
    QLabel *_lbEventIDTxt;
    QLabel *_lbLongError;
    QLabel *_lbThisLocTxt;
    QLabel *_lbOriginStatusTxt;
    QLabel *_lbLongitude;
    QLabel *_lbLatitude;
    QLabel *labelVDistance;
    QLabel *_lbRMS;
    QLabel *_lbNoPhasesTxt;
    QLabel *_lbEventID;
    QLabel *_lbFirstLocation;
    QLabel *_lbAgency;
    QLabel *_lbOriginStatus;
    QLabel *_lbDepthTxt;
    QLabel *_lbLatitudeTxt;
    QLabel *_lbFirstLocTxt;
    QLabel *_lbLatError;
    QLabel *_lbNoPhases;
    QLabel *_lbLongitudeTxt;
    QLabel *_lbGapTxt;
    QLabel *label;
    QLabel *_lbRMSTxt;
    QLabel *_lbLongitudeUnit;
    QLabel *_lbLatitudeUnit;
    QLabel *_lbDepth;
    QLabel *_lbDepthUnit;
    QLabel *_lbCommentTxt;
    QLabel *_lbComment;
    QLabel *_lbAzGap;
    QLabel *label_3;
    QLabel *labelEventType;
    QSpacerItem *spacerItem2;

    void setupUi(QWidget *Hypocenter)
    {
        if (Hypocenter->objectName().isEmpty())
            Hypocenter->setObjectName(QStringLiteral("Hypocenter"));
        Hypocenter->resize(604, 1141);
        gridLayout = new QGridLayout(Hypocenter);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fmFrameInformation = new QFrame(Hypocenter);
        fmFrameInformation->setObjectName(QStringLiteral("fmFrameInformation"));
        fmFrameInformation->setFrameShape(QFrame::StyledPanel);
        fmFrameInformation->setFrameShadow(QFrame::Raised);
        gridLayout1 = new QGridLayout(fmFrameInformation);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        labelStatus = new QLabel(fmFrameInformation);
        labelStatus->setObjectName(QStringLiteral("labelStatus"));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(50);
        font.setStrikeOut(false);
        labelStatus->setFont(font);
        labelStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelStatus, 15, 1, 1, 3);

        labelLatitude = new QLabel(fmFrameInformation);
        labelLatitude->setObjectName(QStringLiteral("labelLatitude"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy);
        labelLatitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitude, 0, 1, 1, 1);

        labelNP0 = new QLabel(fmFrameInformation);
        labelNP0->setObjectName(QStringLiteral("labelNP0"));

        gridLayout1->addWidget(labelNP0, 11, 1, 1, 3);

        labelNP1 = new QLabel(fmFrameInformation);
        labelNP1->setObjectName(QStringLiteral("labelNP1"));

        gridLayout1->addWidget(labelNP1, 12, 1, 1, 3);

        labelLongitudeError = new QLabel(fmFrameInformation);
        labelLongitudeError->setObjectName(QStringLiteral("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeError, 1, 3, 1, 1);

        labelPhasesTxt = new QLabel(fmFrameInformation);
        labelPhasesTxt->setObjectName(QStringLiteral("labelPhasesTxt"));

        gridLayout1->addWidget(labelPhasesTxt, 7, 0, 1, 1);

        labelLongitude = new QLabel(fmFrameInformation);
        labelLongitude->setObjectName(QStringLiteral("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitude, 1, 1, 1, 1);

        labelStatusTxt = new QLabel(fmFrameInformation);
        labelStatusTxt->setObjectName(QStringLiteral("labelStatusTxt"));
        labelStatusTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelStatusTxt, 15, 0, 1, 1);

        labelLongitudeUnit = new QLabel(fmFrameInformation);
        labelLongitudeUnit->setObjectName(QStringLiteral("labelLongitudeUnit"));
        labelLongitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeUnit, 1, 2, 1, 1);

        labelLatitudeTxt = new QLabel(fmFrameInformation);
        labelLatitudeTxt->setObjectName(QStringLiteral("labelLatitudeTxt"));
        labelLatitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeTxt, 0, 0, 1, 1);

        labelDepthUnit = new QLabel(fmFrameInformation);
        labelDepthUnit->setObjectName(QStringLiteral("labelDepthUnit"));
        labelDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthUnit, 2, 2, 1, 1);

        labelDepthTxt = new QLabel(fmFrameInformation);
        labelDepthTxt->setObjectName(QStringLiteral("labelDepthTxt"));
        labelDepthTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthTxt, 2, 0, 1, 1);

        fmLabelVDistance = new QLabel(fmFrameInformation);
        fmLabelVDistance->setObjectName(QStringLiteral("fmLabelVDistance"));

        gridLayout1->addWidget(fmLabelVDistance, 10, 0, 1, 4);

        labelAgencyTxt = new QLabel(fmFrameInformation);
        labelAgencyTxt->setObjectName(QStringLiteral("labelAgencyTxt"));
        labelAgencyTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgencyTxt, 14, 0, 1, 1);

        labelTypeTxt = new QLabel(fmFrameInformation);
        labelTypeTxt->setObjectName(QStringLiteral("labelTypeTxt"));

        gridLayout1->addWidget(labelTypeTxt, 13, 0, 1, 1);

        labelAgency = new QLabel(fmFrameInformation);
        labelAgency->setObjectName(QStringLiteral("labelAgency"));
        labelAgency->setFont(font);
        labelAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgency, 14, 1, 1, 3);

        labelLongitudeTxt = new QLabel(fmFrameInformation);
        labelLongitudeTxt->setObjectName(QStringLiteral("labelLongitudeTxt"));
        labelLongitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeTxt, 1, 0, 1, 1);

        labelMisfit = new QLabel(fmFrameInformation);
        labelMisfit->setObjectName(QStringLiteral("labelMisfit"));
        labelMisfit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMisfit, 5, 1, 1, 1);

        labelMwTxt = new QLabel(fmFrameInformation);
        labelMwTxt->setObjectName(QStringLiteral("labelMwTxt"));

        gridLayout1->addWidget(labelMwTxt, 4, 0, 1, 1);

        labelThisSolutionTxt = new QLabel(fmFrameInformation);
        labelThisSolutionTxt->setObjectName(QStringLiteral("labelThisSolutionTxt"));
        labelThisSolutionTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelThisSolutionTxt, 16, 0, 1, 1);

        labelDepth = new QLabel(fmFrameInformation);
        labelDepth->setObjectName(QStringLiteral("labelDepth"));
        labelDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepth, 2, 1, 1, 1);

        labelType = new QLabel(fmFrameInformation);
        labelType->setObjectName(QStringLiteral("labelType"));

        gridLayout1->addWidget(labelType, 13, 1, 1, 3);

        labelNPTxt = new QLabel(fmFrameInformation);
        labelNPTxt->setObjectName(QStringLiteral("labelNPTxt"));

        gridLayout1->addWidget(labelNPTxt, 11, 0, 1, 1);

        labelMisfitTxt = new QLabel(fmFrameInformation);
        labelMisfitTxt->setObjectName(QStringLiteral("labelMisfitTxt"));
        labelMisfitTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMisfitTxt, 5, 0, 1, 1);

        labelLatitudeError = new QLabel(fmFrameInformation);
        labelLatitudeError->setObjectName(QStringLiteral("labelLatitudeError"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelLatitudeError->sizePolicy().hasHeightForWidth());
        labelLatitudeError->setSizePolicy(sizePolicy1);
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeError, 0, 3, 1, 1);

        labelMw = new QLabel(fmFrameInformation);
        labelMw->setObjectName(QStringLiteral("labelMw"));
        labelMw->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMw, 4, 1, 1, 1);

        labelPhases = new QLabel(fmFrameInformation);
        labelPhases->setObjectName(QStringLiteral("labelPhases"));
        labelPhases->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhases, 7, 1, 1, 1);

        labelCLVD = new QLabel(fmFrameInformation);
        labelCLVD->setObjectName(QStringLiteral("labelCLVD"));
        labelCLVD->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelCLVD, 6, 1, 1, 1);

        labelMinDist = new QLabel(fmFrameInformation);
        labelMinDist->setObjectName(QStringLiteral("labelMinDist"));
        labelMinDist->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMinDist, 8, 1, 1, 1);

        labelMinDistUnit = new QLabel(fmFrameInformation);
        labelMinDistUnit->setObjectName(QStringLiteral("labelMinDistUnit"));
        labelMinDistUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMinDistUnit, 8, 2, 1, 1);

        labelMaxDist = new QLabel(fmFrameInformation);
        labelMaxDist->setObjectName(QStringLiteral("labelMaxDist"));
        labelMaxDist->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMaxDist, 9, 1, 1, 1);

        labelMaxDistUnit = new QLabel(fmFrameInformation);
        labelMaxDistUnit->setObjectName(QStringLiteral("labelMaxDistUnit"));
        labelMaxDistUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMaxDistUnit, 9, 2, 1, 1);

        labelThisSolution = new QLabel(fmFrameInformation);
        labelThisSolution->setObjectName(QStringLiteral("labelThisSolution"));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(50);
        font1.setStrikeOut(false);
        labelThisSolution->setFont(font1);

        gridLayout1->addWidget(labelThisSolution, 16, 1, 1, 3);

        labelDepthError = new QLabel(fmFrameInformation);
        labelDepthError->setObjectName(QStringLiteral("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthError, 2, 3, 1, 1);

        labelCLVDTxt = new QLabel(fmFrameInformation);
        labelCLVDTxt->setObjectName(QStringLiteral("labelCLVDTxt"));

        gridLayout1->addWidget(labelCLVDTxt, 6, 0, 1, 1);

        labelMinDistTxt = new QLabel(fmFrameInformation);
        labelMinDistTxt->setObjectName(QStringLiteral("labelMinDistTxt"));

        gridLayout1->addWidget(labelMinDistTxt, 8, 0, 1, 1);

        labelMaxDistTxt = new QLabel(fmFrameInformation);
        labelMaxDistTxt->setObjectName(QStringLiteral("labelMaxDistTxt"));

        gridLayout1->addWidget(labelMaxDistTxt, 9, 0, 1, 1);

        labelLatitudeUnit = new QLabel(fmFrameInformation);
        labelLatitudeUnit->setObjectName(QStringLiteral("labelLatitudeUnit"));
        labelLatitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeUnit, 0, 2, 1, 1);

        labelMomentTxt = new QLabel(fmFrameInformation);
        labelMomentTxt->setObjectName(QStringLiteral("labelMomentTxt"));

        gridLayout1->addWidget(labelMomentTxt, 3, 0, 1, 1);

        labelMoment = new QLabel(fmFrameInformation);
        labelMoment->setObjectName(QStringLiteral("labelMoment"));
        labelMoment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelMoment, 3, 1, 1, 1);

        labelMomentUnit = new QLabel(fmFrameInformation);
        labelMomentUnit->setObjectName(QStringLiteral("labelMomentUnit"));

        gridLayout1->addWidget(labelMomentUnit, 3, 2, 1, 1);


        gridLayout->addWidget(fmFrameInformation, 2, 0, 1, 1);

        labelFMSeparator = new QLabel(Hypocenter);
        labelFMSeparator->setObjectName(QStringLiteral("labelFMSeparator"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelFMSeparator->sizePolicy().hasHeightForWidth());
        labelFMSeparator->setSizePolicy(sizePolicy2);
        labelFMSeparator->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout->addWidget(labelFMSeparator, 1, 0, 1, 3);

        frameInformationAutomatic = new QFrame(Hypocenter);
        frameInformationAutomatic->setObjectName(QStringLiteral("frameInformationAutomatic"));
        frameInformationAutomatic->setFrameShape(QFrame::StyledPanel);
        frameInformationAutomatic->setFrameShadow(QFrame::Raised);
        gridLayout2 = new QGridLayout(frameInformationAutomatic);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        labelVDistanceAutomatic = new QLabel(frameInformationAutomatic);
        labelVDistanceAutomatic->setObjectName(QStringLiteral("labelVDistanceAutomatic"));

        gridLayout2->addWidget(labelVDistanceAutomatic, 7, 0, 1, 3);

        _lbRMSAutomatic = new QLabel(frameInformationAutomatic);
        _lbRMSAutomatic->setObjectName(QStringLiteral("_lbRMSAutomatic"));
        _lbRMSAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbRMSAutomatic, 4, 0, 1, 1);

        _lbLatErrorAutomatic = new QLabel(frameInformationAutomatic);
        _lbLatErrorAutomatic->setObjectName(QStringLiteral("_lbLatErrorAutomatic"));
        sizePolicy1.setHeightForWidth(_lbLatErrorAutomatic->sizePolicy().hasHeightForWidth());
        _lbLatErrorAutomatic->setSizePolicy(sizePolicy1);
        _lbLatErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLatErrorAutomatic, 0, 2, 1, 1);

        _lbLatitudeAutomatic = new QLabel(frameInformationAutomatic);
        _lbLatitudeAutomatic->setObjectName(QStringLiteral("_lbLatitudeAutomatic"));
        sizePolicy.setHeightForWidth(_lbLatitudeAutomatic->sizePolicy().hasHeightForWidth());
        _lbLatitudeAutomatic->setSizePolicy(sizePolicy);
        _lbLatitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLatitudeAutomatic, 0, 0, 1, 1);

        _lbOriginStatusAutomatic = new QLabel(frameInformationAutomatic);
        _lbOriginStatusAutomatic->setObjectName(QStringLiteral("_lbOriginStatusAutomatic"));
        _lbOriginStatusAutomatic->setFont(font);
        _lbOriginStatusAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbOriginStatusAutomatic, 9, 0, 1, 3);

        _lbLongitudeUnitAutomatic = new QLabel(frameInformationAutomatic);
        _lbLongitudeUnitAutomatic->setObjectName(QStringLiteral("_lbLongitudeUnitAutomatic"));
        _lbLongitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLongitudeUnitAutomatic, 1, 1, 1, 1);

        _lbDepthUnitAutomatic = new QLabel(frameInformationAutomatic);
        _lbDepthUnitAutomatic->setObjectName(QStringLiteral("_lbDepthUnitAutomatic"));
        _lbDepthUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbDepthUnitAutomatic, 2, 1, 1, 1);

        _lbCommentAutomatic = new QLabel(frameInformationAutomatic);
        _lbCommentAutomatic->setObjectName(QStringLiteral("_lbCommentAutomatic"));
        _lbCommentAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbCommentAutomatic, 6, 0, 1, 1);

        _lbNoPhasesAutomatic = new QLabel(frameInformationAutomatic);
        _lbNoPhasesAutomatic->setObjectName(QStringLiteral("_lbNoPhasesAutomatic"));
        _lbNoPhasesAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbNoPhasesAutomatic, 3, 0, 1, 1);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem, 10, 0, 1, 2);

        _lbAgencyAutomatic = new QLabel(frameInformationAutomatic);
        _lbAgencyAutomatic->setObjectName(QStringLiteral("_lbAgencyAutomatic"));
        _lbAgencyAutomatic->setFont(font);
        _lbAgencyAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbAgencyAutomatic, 8, 0, 1, 3);

        _lbLongitudeAutomatic = new QLabel(frameInformationAutomatic);
        _lbLongitudeAutomatic->setObjectName(QStringLiteral("_lbLongitudeAutomatic"));
        _lbLongitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLongitudeAutomatic, 1, 0, 1, 1);

        _lbDepthErrorAutomatic = new QLabel(frameInformationAutomatic);
        _lbDepthErrorAutomatic->setObjectName(QStringLiteral("_lbDepthErrorAutomatic"));
        _lbDepthErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbDepthErrorAutomatic, 2, 2, 1, 1);

        _lbDepthAutomatic = new QLabel(frameInformationAutomatic);
        _lbDepthAutomatic->setObjectName(QStringLiteral("_lbDepthAutomatic"));
        _lbDepthAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbDepthAutomatic, 2, 0, 1, 1);

        _lbLongErrorAutomatic = new QLabel(frameInformationAutomatic);
        _lbLongErrorAutomatic->setObjectName(QStringLiteral("_lbLongErrorAutomatic"));
        _lbLongErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLongErrorAutomatic, 1, 2, 1, 1);

        _lbLatitudeUnitAutomatic = new QLabel(frameInformationAutomatic);
        _lbLatitudeUnitAutomatic->setObjectName(QStringLiteral("_lbLatitudeUnitAutomatic"));
        sizePolicy.setHeightForWidth(_lbLatitudeUnitAutomatic->sizePolicy().hasHeightForWidth());
        _lbLatitudeUnitAutomatic->setSizePolicy(sizePolicy);
        _lbLatitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbLatitudeUnitAutomatic, 0, 1, 1, 1);

        _lbAzGapAutomatic = new QLabel(frameInformationAutomatic);
        _lbAzGapAutomatic->setObjectName(QStringLiteral("_lbAzGapAutomatic"));
        _lbAzGapAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout2->addWidget(_lbAzGapAutomatic, 5, 0, 1, 1);

        label_2 = new QLabel(frameInformationAutomatic);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout2->addWidget(label_2, 5, 1, 1, 1);


        gridLayout->addWidget(frameInformationAutomatic, 0, 2, 1, 1);

        fmLabelFrameInfoSpacer = new QLabel(Hypocenter);
        fmLabelFrameInfoSpacer->setObjectName(QStringLiteral("fmLabelFrameInfoSpacer"));
        fmLabelFrameInfoSpacer->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(fmLabelFrameInfoSpacer, 2, 1, 1, 1);

        fmFrameInformationAutomatic = new QFrame(Hypocenter);
        fmFrameInformationAutomatic->setObjectName(QStringLiteral("fmFrameInformationAutomatic"));
        fmFrameInformationAutomatic->setFrameShape(QFrame::StyledPanel);
        fmFrameInformationAutomatic->setFrameShadow(QFrame::Raised);
        gridLayout3 = new QGridLayout(fmFrameInformationAutomatic);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        labelNP0Automatic = new QLabel(fmFrameInformationAutomatic);
        labelNP0Automatic->setObjectName(QStringLiteral("labelNP0Automatic"));

        gridLayout3->addWidget(labelNP0Automatic, 11, 0, 1, 3);

        labelNP1Automatic = new QLabel(fmFrameInformationAutomatic);
        labelNP1Automatic->setObjectName(QStringLiteral("labelNP1Automatic"));

        gridLayout3->addWidget(labelNP1Automatic, 12, 0, 1, 3);

        labelDepthErrorAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelDepthErrorAutomatic->setObjectName(QStringLiteral("labelDepthErrorAutomatic"));
        labelDepthErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelDepthErrorAutomatic, 2, 2, 1, 1);

        labelCLVDAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelCLVDAutomatic->setObjectName(QStringLiteral("labelCLVDAutomatic"));
        labelCLVDAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelCLVDAutomatic, 6, 0, 1, 1);

        labelMinDistAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMinDistAutomatic->setObjectName(QStringLiteral("labelMinDistAutomatic"));
        labelMinDistAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMinDistAutomatic, 8, 0, 1, 1);

        labelMinDistUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMinDistUnitAutomatic->setObjectName(QStringLiteral("labelMinDistUnitAutomatic"));
        labelMinDistUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMinDistUnitAutomatic, 8, 1, 1, 1);

        labelMaxDistAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMaxDistAutomatic->setObjectName(QStringLiteral("labelMaxDistAutomatic"));
        labelMaxDistAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMaxDistAutomatic, 9, 0, 1, 1);

        labelMaxDistUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMaxDistUnitAutomatic->setObjectName(QStringLiteral("labelMaxDistUnitAutomatic"));
        labelMaxDistUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMaxDistUnitAutomatic, 9, 1, 1, 1);

        labelLongitudeAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLongitudeAutomatic->setObjectName(QStringLiteral("labelLongitudeAutomatic"));
        labelLongitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLongitudeAutomatic, 1, 0, 1, 1);

        labelDepthAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelDepthAutomatic->setObjectName(QStringLiteral("labelDepthAutomatic"));
        labelDepthAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelDepthAutomatic, 2, 0, 1, 1);

        labelLongitudeUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLongitudeUnitAutomatic->setObjectName(QStringLiteral("labelLongitudeUnitAutomatic"));
        labelLongitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLongitudeUnitAutomatic, 1, 1, 1, 1);

        labelLatitudeUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLatitudeUnitAutomatic->setObjectName(QStringLiteral("labelLatitudeUnitAutomatic"));
        labelLatitudeUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLatitudeUnitAutomatic, 0, 1, 1, 1);

        labelTypeAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelTypeAutomatic->setObjectName(QStringLiteral("labelTypeAutomatic"));

        gridLayout3->addWidget(labelTypeAutomatic, 13, 0, 1, 3);

        labelPhasesAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelPhasesAutomatic->setObjectName(QStringLiteral("labelPhasesAutomatic"));
        labelPhasesAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelPhasesAutomatic, 7, 0, 1, 1);

        fmLabelVDistanceAutomatic = new QLabel(fmFrameInformationAutomatic);
        fmLabelVDistanceAutomatic->setObjectName(QStringLiteral("fmLabelVDistanceAutomatic"));

        gridLayout3->addWidget(fmLabelVDistanceAutomatic, 10, 0, 1, 3);

        labelLongitudeErrorAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLongitudeErrorAutomatic->setObjectName(QStringLiteral("labelLongitudeErrorAutomatic"));
        labelLongitudeErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLongitudeErrorAutomatic, 1, 2, 1, 1);

        labelAgencyAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelAgencyAutomatic->setObjectName(QStringLiteral("labelAgencyAutomatic"));
        labelAgencyAutomatic->setFont(font);
        labelAgencyAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelAgencyAutomatic, 14, 0, 1, 3);

        labelThisSolutionAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelThisSolutionAutomatic->setObjectName(QStringLiteral("labelThisSolutionAutomatic"));
        labelThisSolutionAutomatic->setFont(font1);

        gridLayout3->addWidget(labelThisSolutionAutomatic, 16, 0, 1, 3);

        labelDepthUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelDepthUnitAutomatic->setObjectName(QStringLiteral("labelDepthUnitAutomatic"));
        labelDepthUnitAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelDepthUnitAutomatic, 2, 1, 1, 1);

        labelLatitudeAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLatitudeAutomatic->setObjectName(QStringLiteral("labelLatitudeAutomatic"));
        sizePolicy.setHeightForWidth(labelLatitudeAutomatic->sizePolicy().hasHeightForWidth());
        labelLatitudeAutomatic->setSizePolicy(sizePolicy);
        labelLatitudeAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLatitudeAutomatic, 0, 0, 1, 1);

        labelStatusAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelStatusAutomatic->setObjectName(QStringLiteral("labelStatusAutomatic"));
        labelStatusAutomatic->setFont(font);
        labelStatusAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelStatusAutomatic, 15, 0, 1, 3);

        labelMwAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMwAutomatic->setObjectName(QStringLiteral("labelMwAutomatic"));
        labelMwAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMwAutomatic, 4, 0, 1, 1);

        labelLatitudeErrorAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelLatitudeErrorAutomatic->setObjectName(QStringLiteral("labelLatitudeErrorAutomatic"));
        sizePolicy1.setHeightForWidth(labelLatitudeErrorAutomatic->sizePolicy().hasHeightForWidth());
        labelLatitudeErrorAutomatic->setSizePolicy(sizePolicy1);
        labelLatitudeErrorAutomatic->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout3->addWidget(labelLatitudeErrorAutomatic, 0, 2, 1, 1);

        labelMisfitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMisfitAutomatic->setObjectName(QStringLiteral("labelMisfitAutomatic"));
        labelMisfitAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMisfitAutomatic, 5, 0, 1, 1);

        labelMomentAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMomentAutomatic->setObjectName(QStringLiteral("labelMomentAutomatic"));
        labelMomentAutomatic->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout3->addWidget(labelMomentAutomatic, 3, 0, 1, 1);

        labelMomentUnitAutomatic = new QLabel(fmFrameInformationAutomatic);
        labelMomentUnitAutomatic->setObjectName(QStringLiteral("labelMomentUnitAutomatic"));

        gridLayout3->addWidget(labelMomentUnitAutomatic, 3, 1, 1, 1);


        gridLayout->addWidget(fmFrameInformationAutomatic, 2, 2, 1, 1);

        labelFrameInfoSpacer = new QLabel(Hypocenter);
        labelFrameInfoSpacer->setObjectName(QStringLiteral("labelFrameInfoSpacer"));
        labelFrameInfoSpacer->setFrameShape(QFrame::NoFrame);

        gridLayout->addWidget(labelFrameInfoSpacer, 0, 1, 1, 1);

        frameInformation = new QFrame(Hypocenter);
        frameInformation->setObjectName(QStringLiteral("frameInformation"));
        frameInformation->setFrameShape(QFrame::StyledPanel);
        frameInformation->setFrameShadow(QFrame::Raised);
        gridLayout4 = new QGridLayout(frameInformation);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        _lbThisLocation = new QLabel(frameInformation);
        _lbThisLocation->setObjectName(QStringLiteral("_lbThisLocation"));
        _lbThisLocation->setFont(font1);

        gridLayout4->addWidget(_lbThisLocation, 12, 1, 1, 3);

        spacerItem1 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem1, 14, 0, 1, 1);

        _lbAgencyTxt = new QLabel(frameInformation);
        _lbAgencyTxt->setObjectName(QStringLiteral("_lbAgencyTxt"));
        _lbAgencyTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbAgencyTxt, 8, 0, 1, 1);

        _lbDepthError = new QLabel(frameInformation);
        _lbDepthError->setObjectName(QStringLiteral("_lbDepthError"));
        _lbDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepthError, 2, 3, 1, 1);

        _lbEventIDTxt = new QLabel(frameInformation);
        _lbEventIDTxt->setObjectName(QStringLiteral("_lbEventIDTxt"));

        gridLayout4->addWidget(_lbEventIDTxt, 13, 0, 1, 1);

        _lbLongError = new QLabel(frameInformation);
        _lbLongError->setObjectName(QStringLiteral("_lbLongError"));
        _lbLongError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongError, 1, 3, 1, 1);

        _lbThisLocTxt = new QLabel(frameInformation);
        _lbThisLocTxt->setObjectName(QStringLiteral("_lbThisLocTxt"));
        _lbThisLocTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbThisLocTxt, 12, 0, 1, 1);

        _lbOriginStatusTxt = new QLabel(frameInformation);
        _lbOriginStatusTxt->setObjectName(QStringLiteral("_lbOriginStatusTxt"));
        _lbOriginStatusTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbOriginStatusTxt, 9, 0, 1, 1);

        _lbLongitude = new QLabel(frameInformation);
        _lbLongitude->setObjectName(QStringLiteral("_lbLongitude"));
        _lbLongitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongitude, 1, 1, 1, 1);

        _lbLatitude = new QLabel(frameInformation);
        _lbLatitude->setObjectName(QStringLiteral("_lbLatitude"));
        sizePolicy.setHeightForWidth(_lbLatitude->sizePolicy().hasHeightForWidth());
        _lbLatitude->setSizePolicy(sizePolicy);
        _lbLatitude->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatitude, 0, 1, 1, 1);

        labelVDistance = new QLabel(frameInformation);
        labelVDistance->setObjectName(QStringLiteral("labelVDistance"));

        gridLayout4->addWidget(labelVDistance, 7, 0, 1, 4);

        _lbRMS = new QLabel(frameInformation);
        _lbRMS->setObjectName(QStringLiteral("_lbRMS"));
        _lbRMS->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbRMS, 4, 1, 1, 1);

        _lbNoPhasesTxt = new QLabel(frameInformation);
        _lbNoPhasesTxt->setObjectName(QStringLiteral("_lbNoPhasesTxt"));
        _lbNoPhasesTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbNoPhasesTxt, 3, 0, 1, 1);

        _lbEventID = new QLabel(frameInformation);
        _lbEventID->setObjectName(QStringLiteral("_lbEventID"));

        gridLayout4->addWidget(_lbEventID, 13, 1, 1, 3);

        _lbFirstLocation = new QLabel(frameInformation);
        _lbFirstLocation->setObjectName(QStringLiteral("_lbFirstLocation"));
        _lbFirstLocation->setFont(font1);

        gridLayout4->addWidget(_lbFirstLocation, 11, 1, 1, 3);

        _lbAgency = new QLabel(frameInformation);
        _lbAgency->setObjectName(QStringLiteral("_lbAgency"));
        _lbAgency->setFont(font);
        _lbAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbAgency, 8, 1, 1, 3);

        _lbOriginStatus = new QLabel(frameInformation);
        _lbOriginStatus->setObjectName(QStringLiteral("_lbOriginStatus"));
        _lbOriginStatus->setFont(font);
        _lbOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbOriginStatus, 9, 1, 1, 3);

        _lbDepthTxt = new QLabel(frameInformation);
        _lbDepthTxt->setObjectName(QStringLiteral("_lbDepthTxt"));
        _lbDepthTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepthTxt, 2, 0, 1, 1);

        _lbLatitudeTxt = new QLabel(frameInformation);
        _lbLatitudeTxt->setObjectName(QStringLiteral("_lbLatitudeTxt"));
        _lbLatitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatitudeTxt, 0, 0, 1, 1);

        _lbFirstLocTxt = new QLabel(frameInformation);
        _lbFirstLocTxt->setObjectName(QStringLiteral("_lbFirstLocTxt"));
        _lbFirstLocTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbFirstLocTxt, 11, 0, 1, 1);

        _lbLatError = new QLabel(frameInformation);
        _lbLatError->setObjectName(QStringLiteral("_lbLatError"));
        sizePolicy1.setHeightForWidth(_lbLatError->sizePolicy().hasHeightForWidth());
        _lbLatError->setSizePolicy(sizePolicy1);
        _lbLatError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatError, 0, 3, 1, 1);

        _lbNoPhases = new QLabel(frameInformation);
        _lbNoPhases->setObjectName(QStringLiteral("_lbNoPhases"));
        _lbNoPhases->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbNoPhases, 3, 1, 1, 1);

        _lbLongitudeTxt = new QLabel(frameInformation);
        _lbLongitudeTxt->setObjectName(QStringLiteral("_lbLongitudeTxt"));
        _lbLongitudeTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongitudeTxt, 1, 0, 1, 1);

        _lbGapTxt = new QLabel(frameInformation);
        _lbGapTxt->setObjectName(QStringLiteral("_lbGapTxt"));

        gridLayout4->addWidget(_lbGapTxt, 5, 0, 1, 1);

        label = new QLabel(frameInformation);
        label->setObjectName(QStringLiteral("label"));

        gridLayout4->addWidget(label, 5, 2, 1, 1);

        _lbRMSTxt = new QLabel(frameInformation);
        _lbRMSTxt->setObjectName(QStringLiteral("_lbRMSTxt"));
        _lbRMSTxt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbRMSTxt, 4, 0, 1, 1);

        _lbLongitudeUnit = new QLabel(frameInformation);
        _lbLongitudeUnit->setObjectName(QStringLiteral("_lbLongitudeUnit"));
        _lbLongitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLongitudeUnit, 1, 2, 1, 1);

        _lbLatitudeUnit = new QLabel(frameInformation);
        _lbLatitudeUnit->setObjectName(QStringLiteral("_lbLatitudeUnit"));
        sizePolicy.setHeightForWidth(_lbLatitudeUnit->sizePolicy().hasHeightForWidth());
        _lbLatitudeUnit->setSizePolicy(sizePolicy);
        _lbLatitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbLatitudeUnit, 0, 2, 1, 1);

        _lbDepth = new QLabel(frameInformation);
        _lbDepth->setObjectName(QStringLiteral("_lbDepth"));
        _lbDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepth, 2, 1, 1, 1);

        _lbDepthUnit = new QLabel(frameInformation);
        _lbDepthUnit->setObjectName(QStringLiteral("_lbDepthUnit"));
        _lbDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbDepthUnit, 2, 2, 1, 1);

        _lbCommentTxt = new QLabel(frameInformation);
        _lbCommentTxt->setObjectName(QStringLiteral("_lbCommentTxt"));

        gridLayout4->addWidget(_lbCommentTxt, 6, 0, 1, 1);

        _lbComment = new QLabel(frameInformation);
        _lbComment->setObjectName(QStringLiteral("_lbComment"));
        _lbComment->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbComment, 6, 1, 1, 1);

        _lbAzGap = new QLabel(frameInformation);
        _lbAzGap->setObjectName(QStringLiteral("_lbAzGap"));
        _lbAzGap->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(_lbAzGap, 5, 1, 1, 1);

        label_3 = new QLabel(frameInformation);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout4->addWidget(label_3, 10, 0, 1, 1);

        labelEventType = new QLabel(frameInformation);
        labelEventType->setObjectName(QStringLiteral("labelEventType"));

        gridLayout4->addWidget(labelEventType, 10, 1, 1, 3);


        gridLayout->addWidget(frameInformation, 0, 0, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 3, 1, 1, 1);


        retranslateUi(Hypocenter);

        QMetaObject::connectSlotsByName(Hypocenter);
    } // setupUi

    void retranslateUi(QWidget *Hypocenter)
    {
        Hypocenter->setWindowTitle(QApplication::translate("Hypocenter", "Hypocenter", Q_NULLPTR));
        labelStatus->setText(QString());
        labelLatitude->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        labelNP0->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", Q_NULLPTR));
        labelNP1->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", Q_NULLPTR));
        labelLongitudeError->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        labelPhasesTxt->setText(QApplication::translate("Hypocenter", "Phase Count:", Q_NULLPTR));
        labelLongitude->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        labelStatusTxt->setText(QApplication::translate("Hypocenter", "Status:", Q_NULLPTR));
        labelLongitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 E", Q_NULLPTR));
        labelLatitudeTxt->setText(QApplication::translate("Hypocenter", "Latitude:", Q_NULLPTR));
        labelDepthUnit->setText(QApplication::translate("Hypocenter", "km", Q_NULLPTR));
        labelDepthTxt->setText(QApplication::translate("Hypocenter", "Depth:", Q_NULLPTR));
        fmLabelVDistance->setText(QApplication::translate("Hypocenter", "<Spacer>", Q_NULLPTR));
        labelAgencyTxt->setText(QApplication::translate("Hypocenter", "Agency:", Q_NULLPTR));
        labelTypeTxt->setText(QApplication::translate("Hypocenter", "Type:", Q_NULLPTR));
        labelAgency->setText(QString());
        labelLongitudeTxt->setText(QApplication::translate("Hypocenter", "Longitude:", Q_NULLPTR));
        labelMisfit->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMwTxt->setText(QApplication::translate("Hypocenter", "Mw:", Q_NULLPTR));
        labelThisSolutionTxt->setText(QApplication::translate("Hypocenter", "This Solution:", Q_NULLPTR));
        labelDepth->setText(QApplication::translate("Hypocenter", "0", Q_NULLPTR));
        labelType->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelNPTxt->setText(QApplication::translate("Hypocenter", "Nodal planes:", Q_NULLPTR));
        labelMisfitTxt->setText(QApplication::translate("Hypocenter", "Misfit:", Q_NULLPTR));
        labelLatitudeError->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        labelMw->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelPhases->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelCLVD->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMinDist->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMinDistUnit->setText(QApplication::translate("Hypocenter", "\302\260", Q_NULLPTR));
        labelMaxDist->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMaxDistUnit->setText(QApplication::translate("Hypocenter", "\302\260", Q_NULLPTR));
        labelThisSolution->setText(QString());
        labelDepthError->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        labelCLVDTxt->setText(QApplication::translate("Hypocenter", "CLVD:", Q_NULLPTR));
        labelMinDistTxt->setText(QApplication::translate("Hypocenter", "Min dist:", Q_NULLPTR));
        labelMaxDistTxt->setText(QApplication::translate("Hypocenter", "Max dist:", Q_NULLPTR));
        labelLatitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 N", Q_NULLPTR));
        labelMomentTxt->setText(QApplication::translate("Hypocenter", "Moment:", Q_NULLPTR));
        labelMoment->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMomentUnit->setText(QApplication::translate("Hypocenter", "Nm", Q_NULLPTR));
        labelFMSeparator->setText(QApplication::translate("Hypocenter", "FocalMechanism", Q_NULLPTR));
        labelVDistanceAutomatic->setText(QApplication::translate("Hypocenter", "<Spacer>", Q_NULLPTR));
        _lbRMSAutomatic->setText(QApplication::translate("Hypocenter", "0.0", Q_NULLPTR));
        _lbLatErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        _lbLatitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        _lbOriginStatusAutomatic->setText(QString());
        _lbLongitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 E", Q_NULLPTR));
        _lbDepthUnitAutomatic->setText(QApplication::translate("Hypocenter", "km", Q_NULLPTR));
        _lbCommentAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        _lbNoPhasesAutomatic->setText(QApplication::translate("Hypocenter", "0", Q_NULLPTR));
        _lbAgencyAutomatic->setText(QString());
        _lbLongitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        _lbDepthErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        _lbDepthAutomatic->setText(QApplication::translate("Hypocenter", "0", Q_NULLPTR));
        _lbLongErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        _lbLatitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 N", Q_NULLPTR));
        _lbAzGapAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        label_2->setText(QApplication::translate("Hypocenter", "\302\260", Q_NULLPTR));
        fmLabelFrameInfoSpacer->setText(QApplication::translate("Hypocenter", "<spacer>", Q_NULLPTR));
        labelNP0Automatic->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", Q_NULLPTR));
        labelNP1Automatic->setText(QApplication::translate("Hypocenter", "S: -, D: -, R: -", Q_NULLPTR));
        labelDepthErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        labelCLVDAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMinDistAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMinDistUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260", Q_NULLPTR));
        labelMaxDistAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMaxDistUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260", Q_NULLPTR));
        labelLongitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        labelDepthAutomatic->setText(QApplication::translate("Hypocenter", "0", Q_NULLPTR));
        labelLongitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 E", Q_NULLPTR));
        labelLatitudeUnitAutomatic->setText(QApplication::translate("Hypocenter", "\302\260 N", Q_NULLPTR));
        labelTypeAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelPhasesAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        fmLabelVDistanceAutomatic->setText(QApplication::translate("Hypocenter", "<Spacer>", Q_NULLPTR));
        labelLongitudeErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        labelAgencyAutomatic->setText(QString());
        labelThisSolutionAutomatic->setText(QString());
        labelDepthUnitAutomatic->setText(QApplication::translate("Hypocenter", "km", Q_NULLPTR));
        labelLatitudeAutomatic->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        labelStatusAutomatic->setText(QString());
        labelMwAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelLatitudeErrorAutomatic->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        labelMisfitAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMomentAutomatic->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        labelMomentUnitAutomatic->setText(QApplication::translate("Hypocenter", "Nm", Q_NULLPTR));
        labelFrameInfoSpacer->setText(QApplication::translate("Hypocenter", "<spacer>", Q_NULLPTR));
        _lbThisLocation->setText(QString());
        _lbAgencyTxt->setText(QApplication::translate("Hypocenter", "Agency:", Q_NULLPTR));
        _lbDepthError->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        _lbEventIDTxt->setText(QApplication::translate("Hypocenter", "EventID:", Q_NULLPTR));
        _lbLongError->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        _lbThisLocTxt->setText(QApplication::translate("Hypocenter", "This Location:", Q_NULLPTR));
        _lbOriginStatusTxt->setText(QApplication::translate("Hypocenter", "Status:", Q_NULLPTR));
        _lbLongitude->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        _lbLatitude->setText(QApplication::translate("Hypocenter", "0.00", Q_NULLPTR));
        labelVDistance->setText(QApplication::translate("Hypocenter", "<Spacer>", Q_NULLPTR));
        _lbRMS->setText(QApplication::translate("Hypocenter", "0.0", Q_NULLPTR));
        _lbNoPhasesTxt->setText(QApplication::translate("Hypocenter", "Phase Count:", Q_NULLPTR));
        _lbEventID->setText(QString());
        _lbFirstLocation->setText(QString());
        _lbAgency->setText(QString());
        _lbOriginStatus->setText(QString());
        _lbDepthTxt->setText(QApplication::translate("Hypocenter", "Depth:", Q_NULLPTR));
        _lbLatitudeTxt->setText(QApplication::translate("Hypocenter", "Latitude:", Q_NULLPTR));
        _lbFirstLocTxt->setText(QApplication::translate("Hypocenter", "First Location:", Q_NULLPTR));
        _lbLatError->setText(QApplication::translate("Hypocenter", "+/- 0 km", Q_NULLPTR));
        _lbNoPhases->setText(QApplication::translate("Hypocenter", "0", Q_NULLPTR));
        _lbLongitudeTxt->setText(QApplication::translate("Hypocenter", "Longitude:", Q_NULLPTR));
        _lbGapTxt->setText(QApplication::translate("Hypocenter", "Azimuthal Gap:", Q_NULLPTR));
        label->setText(QApplication::translate("Hypocenter", "\302\260", Q_NULLPTR));
        _lbRMSTxt->setText(QApplication::translate("Hypocenter", "RMS Residual:", Q_NULLPTR));
        _lbLongitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 E", Q_NULLPTR));
        _lbLatitudeUnit->setText(QApplication::translate("Hypocenter", "\302\260 N", Q_NULLPTR));
        _lbDepth->setText(QApplication::translate("Hypocenter", "0", Q_NULLPTR));
        _lbDepthUnit->setText(QApplication::translate("Hypocenter", "km", Q_NULLPTR));
        _lbCommentTxt->setText(QApplication::translate("Hypocenter", "Custom:", Q_NULLPTR));
        _lbComment->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        _lbAzGap->setText(QApplication::translate("Hypocenter", "-", Q_NULLPTR));
        label_3->setText(QApplication::translate("Hypocenter", "Type:", Q_NULLPTR));
        labelEventType->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Hypocenter: public Ui_Hypocenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTSUMMARYVIEW_HYPOCENTER_H
