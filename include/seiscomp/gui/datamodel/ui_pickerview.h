/********************************************************************************
** Form generated from reading UI file 'pickerview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKERVIEW_H
#define UI_PICKERVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "seiscomp/gui/datamodel/pickerzoomframe.h"

QT_BEGIN_NAMESPACE

class Ui_PickerView
{
public:
    QAction *actionIncreaseAmplitudeScale;
    QAction *actionDecreaseAmplitudeScale;
    QAction *actionTimeScaleUp;
    QAction *actionTimeScaleDown;
    QAction *actionScrollLeft;
    QAction *actionScrollRight;
    QAction *actionSelectNextTrace;
    QAction *actionSelectPreviousTrace;
    QAction *actionScrollFineLeft;
    QAction *actionScrollFineRight;
    QAction *actionIncreaseRowHeight;
    QAction *actionDecreaseRowHeight;
    QAction *actionIncreaseRowTimescale;
    QAction *actionDecreaseRowTimescale;
    QAction *actionSelectFirstRow;
    QAction *actionSelectLastRow;
    QAction *actionAlignOnPArrival;
    QAction *actionAlignOnSArrival;
    QAction *actionAlignOnOriginTime;
    QAction *actionDefaultView;
    QAction *actionSortAlphabetically;
    QAction *actionSortByDistance;
    QAction *actionToggleFilter;
    QAction *actionMaximizeAmplitudes;
    QAction *actionPickP;
    QAction *actionPickS;
    QAction *actionPickOther;
    QAction *actionDisablePicking;
    QAction *actionConfirmPick;
    QAction *actionDeletePick;
    QAction *actionRelocate;
    QAction *actionShowAllStations;
    QAction *actionShowUsedStations;
    QAction *actionSortByResidual;
    QAction *actionShowZComponent;
    QAction *actionShowNComponent;
    QAction *actionShowEComponent;
    QAction *actionGotoNextMarker;
    QAction *actionGotoPreviousMarker;
    QAction *actionCreatePick;
    QAction *actionSwitchFullscreen;
    QAction *actionAddStations;
    QAction *actionSearchStation;
    QAction *actionModifyOrigin;
    QAction *actionLimitFilterToZoomTrace;
    QAction *actionRepickAutomatically;
    QAction *actionShowTraceValuesInNmS;
    QAction *actionClipComponentsToViewport;
    QAction *actionSetPolarityPositive;
    QAction *actionSetPolarityNegative;
    QAction *actionSetPolarityUndecidable;
    QAction *actionSetPolarityUnset;
    QAction *actionSetPick;
    QAction *actionShowTheoreticalArrivals;
    QAction *actionShowUnassociatedPicks;
    QAction *actionNextFilter;
    QAction *actionPreviousFilter;
    QAction *actionShowSpectrogram;
    QAction *actionSortByAzimuth;
    QAction *actionOpenSpectrum;
    QAction *actionResetScale;
    QAction *actionShowAllComponents;
    QAction *actionSetPickOnsetEmergent;
    QAction *actionSetPickOnsetImpulsive;
    QAction *actionSetPickOnsetQuestionable;
    QAction *actionSetPickOnsetUnset;
    QWidget *centralwidget;
    QVBoxLayout *vboxLayout;
    QSplitter *splitter;
    QFrame *frameZoomWrapper;
    QVBoxLayout *vboxLayout1;
    Seiscomp::Gui::ZoomRecordFrame *frameZoom;
    QVBoxLayout *vboxLayout2;
    QFrame *frameCurrentRowLabel;
    QHBoxLayout *hboxLayout;
    QLabel *labelStationCode;
    QHBoxLayout *hboxLayout1;
    QLabel *labelCode;
    QLabel *label;
    QLabel *labelDistance;
    QLabel *label1;
    QLabel *labelAzimuth;
    QSpacerItem *spacerItem;
    QFrame *frameCurrentRow;
    QHBoxLayout *hboxLayout2;
    QFrame *frameZoomControls;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnRowAccept;
    QPushButton *btnRowRemove;
    QPushButton *btnRowReset;
    QFrame *frameTimeScale;
    QFrame *framePickList;
    QStatusBar *statusbar;
    QToolBar *toolBarScale;
    QToolBar *toolBarSort;
    QToolBar *toolBarAlign;
    QToolBar *toolBarComponent;
    QToolBar *toolBarStations;
    QToolBar *toolBarPicking;
    QToolBar *toolBarFilter;
    QToolBar *toolBarSpectrogram;
    QToolBar *toolBarTTT;
    QToolBar *toolBarRelocate;
    QMenuBar *menuBar;
    QMenu *menu_Filter;
    QMenu *menu_Locate;
    QMenu *menu_Tools;
    QMenu *menuPicking;
    QMenu *menu_Navigation;
    QMenu *menuView;
    QMenu *menuComponents;
    QMenu *menuTraces;
    QMenu *menuAlignArrival;
    QMenu *menu_Zoomtrace;

    void setupUi(QMainWindow *PickerView)
    {
        if (PickerView->objectName().isEmpty())
            PickerView->setObjectName(QStringLiteral("PickerView"));
        PickerView->resize(945, 738);
        PickerView->setIconSize(QSize(16, 16));
        actionIncreaseAmplitudeScale = new QAction(PickerView);
        actionIncreaseAmplitudeScale->setObjectName(QStringLiteral("actionIncreaseAmplitudeScale"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/vzoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncreaseAmplitudeScale->setIcon(icon);
        actionDecreaseAmplitudeScale = new QAction(PickerView);
        actionDecreaseAmplitudeScale->setObjectName(QStringLiteral("actionDecreaseAmplitudeScale"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/vzoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecreaseAmplitudeScale->setIcon(icon1);
        actionTimeScaleUp = new QAction(PickerView);
        actionTimeScaleUp->setObjectName(QStringLiteral("actionTimeScaleUp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleUp->setIcon(icon2);
        actionTimeScaleDown = new QAction(PickerView);
        actionTimeScaleDown->setObjectName(QStringLiteral("actionTimeScaleDown"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleDown->setIcon(icon3);
        actionScrollLeft = new QAction(PickerView);
        actionScrollLeft->setObjectName(QStringLiteral("actionScrollLeft"));
        actionScrollRight = new QAction(PickerView);
        actionScrollRight->setObjectName(QStringLiteral("actionScrollRight"));
        actionSelectNextTrace = new QAction(PickerView);
        actionSelectNextTrace->setObjectName(QStringLiteral("actionSelectNextTrace"));
        actionSelectPreviousTrace = new QAction(PickerView);
        actionSelectPreviousTrace->setObjectName(QStringLiteral("actionSelectPreviousTrace"));
        actionScrollFineLeft = new QAction(PickerView);
        actionScrollFineLeft->setObjectName(QStringLiteral("actionScrollFineLeft"));
        actionScrollFineRight = new QAction(PickerView);
        actionScrollFineRight->setObjectName(QStringLiteral("actionScrollFineRight"));
        actionIncreaseRowHeight = new QAction(PickerView);
        actionIncreaseRowHeight->setObjectName(QStringLiteral("actionIncreaseRowHeight"));
        actionIncreaseRowHeight->setIcon(icon);
        actionDecreaseRowHeight = new QAction(PickerView);
        actionDecreaseRowHeight->setObjectName(QStringLiteral("actionDecreaseRowHeight"));
        actionDecreaseRowHeight->setIcon(icon1);
        actionIncreaseRowTimescale = new QAction(PickerView);
        actionIncreaseRowTimescale->setObjectName(QStringLiteral("actionIncreaseRowTimescale"));
        actionIncreaseRowTimescale->setIcon(icon3);
        actionDecreaseRowTimescale = new QAction(PickerView);
        actionDecreaseRowTimescale->setObjectName(QStringLiteral("actionDecreaseRowTimescale"));
        actionDecreaseRowTimescale->setIcon(icon2);
        actionSelectFirstRow = new QAction(PickerView);
        actionSelectFirstRow->setObjectName(QStringLiteral("actionSelectFirstRow"));
        actionSelectLastRow = new QAction(PickerView);
        actionSelectLastRow->setObjectName(QStringLiteral("actionSelectLastRow"));
        actionAlignOnPArrival = new QAction(PickerView);
        actionAlignOnPArrival->setObjectName(QStringLiteral("actionAlignOnPArrival"));
        actionAlignOnPArrival->setCheckable(false);
        actionAlignOnPArrival->setChecked(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/align_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnPArrival->setIcon(icon4);
        actionAlignOnSArrival = new QAction(PickerView);
        actionAlignOnSArrival->setObjectName(QStringLiteral("actionAlignOnSArrival"));
        actionAlignOnSArrival->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/align_s.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnSArrival->setIcon(icon5);
        actionAlignOnOriginTime = new QAction(PickerView);
        actionAlignOnOriginTime->setObjectName(QStringLiteral("actionAlignOnOriginTime"));
        actionAlignOnOriginTime->setCheckable(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons/align_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnOriginTime->setIcon(icon6);
        actionDefaultView = new QAction(PickerView);
        actionDefaultView->setObjectName(QStringLiteral("actionDefaultView"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDefaultView->setIcon(icon7);
        actionSortAlphabetically = new QAction(PickerView);
        actionSortAlphabetically->setObjectName(QStringLiteral("actionSortAlphabetically"));
        actionSortAlphabetically->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/icons/sort_abc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortAlphabetically->setIcon(icon8);
        actionSortByDistance = new QAction(PickerView);
        actionSortByDistance->setObjectName(QStringLiteral("actionSortByDistance"));
        actionSortByDistance->setCheckable(true);
        actionSortByDistance->setChecked(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/icons/sort_dist.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByDistance->setIcon(icon9);
        actionToggleFilter = new QAction(PickerView);
        actionToggleFilter->setObjectName(QStringLiteral("actionToggleFilter"));
        actionToggleFilter->setCheckable(false);
        actionToggleFilter->setChecked(false);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/icons/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleFilter->setIcon(icon10);
        actionMaximizeAmplitudes = new QAction(PickerView);
        actionMaximizeAmplitudes->setObjectName(QStringLiteral("actionMaximizeAmplitudes"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/icons/vmax.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMaximizeAmplitudes->setIcon(icon11);
        actionPickP = new QAction(PickerView);
        actionPickP->setObjectName(QStringLiteral("actionPickP"));
        actionPickP->setCheckable(false);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/icons/pick_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickP->setIcon(icon12);
        actionPickS = new QAction(PickerView);
        actionPickS->setObjectName(QStringLiteral("actionPickS"));
        actionPickS->setCheckable(false);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/icons/pick_s.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickS->setIcon(icon13);
        actionPickOther = new QAction(PickerView);
        actionPickOther->setObjectName(QStringLiteral("actionPickOther"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/icons/pick_other.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickOther->setIcon(icon14);
        actionDisablePicking = new QAction(PickerView);
        actionDisablePicking->setObjectName(QStringLiteral("actionDisablePicking"));
        actionConfirmPick = new QAction(PickerView);
        actionConfirmPick->setObjectName(QStringLiteral("actionConfirmPick"));
        actionDeletePick = new QAction(PickerView);
        actionDeletePick->setObjectName(QStringLiteral("actionDeletePick"));
        actionRelocate = new QAction(PickerView);
        actionRelocate->setObjectName(QStringLiteral("actionRelocate"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icons/icons/locate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRelocate->setIcon(icon15);
        actionShowAllStations = new QAction(PickerView);
        actionShowAllStations->setObjectName(QStringLiteral("actionShowAllStations"));
        actionShowAllStations->setCheckable(false);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icons/icons/mindistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowAllStations->setIcon(icon16);
        actionShowUsedStations = new QAction(PickerView);
        actionShowUsedStations->setObjectName(QStringLiteral("actionShowUsedStations"));
        actionShowUsedStations->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icons/icons/withpick.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowUsedStations->setIcon(icon17);
        actionSortByResidual = new QAction(PickerView);
        actionSortByResidual->setObjectName(QStringLiteral("actionSortByResidual"));
        actionSortByResidual->setCheckable(true);
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icons/icons/sort_res.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByResidual->setIcon(icon18);
        actionShowZComponent = new QAction(PickerView);
        actionShowZComponent->setObjectName(QStringLiteral("actionShowZComponent"));
        actionShowZComponent->setCheckable(true);
        actionShowZComponent->setChecked(true);
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/icons/icons/channelZ.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowZComponent->setIcon(icon19);
        actionShowNComponent = new QAction(PickerView);
        actionShowNComponent->setObjectName(QStringLiteral("actionShowNComponent"));
        actionShowNComponent->setCheckable(true);
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/icons/icons/channelN.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowNComponent->setIcon(icon20);
        actionShowEComponent = new QAction(PickerView);
        actionShowEComponent->setObjectName(QStringLiteral("actionShowEComponent"));
        actionShowEComponent->setCheckable(true);
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/icons/icons/channelE.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowEComponent->setIcon(icon21);
        actionGotoNextMarker = new QAction(PickerView);
        actionGotoNextMarker->setObjectName(QStringLiteral("actionGotoNextMarker"));
        actionGotoPreviousMarker = new QAction(PickerView);
        actionGotoPreviousMarker->setObjectName(QStringLiteral("actionGotoPreviousMarker"));
        actionCreatePick = new QAction(PickerView);
        actionCreatePick->setObjectName(QStringLiteral("actionCreatePick"));
        actionSwitchFullscreen = new QAction(PickerView);
        actionSwitchFullscreen->setObjectName(QStringLiteral("actionSwitchFullscreen"));
        actionSwitchFullscreen->setCheckable(true);
        actionAddStations = new QAction(PickerView);
        actionAddStations->setObjectName(QStringLiteral("actionAddStations"));
        actionSearchStation = new QAction(PickerView);
        actionSearchStation->setObjectName(QStringLiteral("actionSearchStation"));
        actionModifyOrigin = new QAction(PickerView);
        actionModifyOrigin->setObjectName(QStringLiteral("actionModifyOrigin"));
        actionLimitFilterToZoomTrace = new QAction(PickerView);
        actionLimitFilterToZoomTrace->setObjectName(QStringLiteral("actionLimitFilterToZoomTrace"));
        actionLimitFilterToZoomTrace->setCheckable(true);
        actionRepickAutomatically = new QAction(PickerView);
        actionRepickAutomatically->setObjectName(QStringLiteral("actionRepickAutomatically"));
        actionShowTraceValuesInNmS = new QAction(PickerView);
        actionShowTraceValuesInNmS->setObjectName(QStringLiteral("actionShowTraceValuesInNmS"));
        actionShowTraceValuesInNmS->setCheckable(true);
        actionClipComponentsToViewport = new QAction(PickerView);
        actionClipComponentsToViewport->setObjectName(QStringLiteral("actionClipComponentsToViewport"));
        actionClipComponentsToViewport->setCheckable(true);
        actionClipComponentsToViewport->setChecked(false);
        actionSetPolarityPositive = new QAction(PickerView);
        actionSetPolarityPositive->setObjectName(QStringLiteral("actionSetPolarityPositive"));
        actionSetPolarityNegative = new QAction(PickerView);
        actionSetPolarityNegative->setObjectName(QStringLiteral("actionSetPolarityNegative"));
        actionSetPolarityUndecidable = new QAction(PickerView);
        actionSetPolarityUndecidable->setObjectName(QStringLiteral("actionSetPolarityUndecidable"));
        actionSetPolarityUnset = new QAction(PickerView);
        actionSetPolarityUnset->setObjectName(QStringLiteral("actionSetPolarityUnset"));
        actionSetPick = new QAction(PickerView);
        actionSetPick->setObjectName(QStringLiteral("actionSetPick"));
        actionShowTheoreticalArrivals = new QAction(PickerView);
        actionShowTheoreticalArrivals->setObjectName(QStringLiteral("actionShowTheoreticalArrivals"));
        actionShowTheoreticalArrivals->setCheckable(true);
        actionShowTheoreticalArrivals->setChecked(true);
        actionShowUnassociatedPicks = new QAction(PickerView);
        actionShowUnassociatedPicks->setObjectName(QStringLiteral("actionShowUnassociatedPicks"));
        actionShowUnassociatedPicks->setCheckable(true);
        actionNextFilter = new QAction(PickerView);
        actionNextFilter->setObjectName(QStringLiteral("actionNextFilter"));
        actionPreviousFilter = new QAction(PickerView);
        actionPreviousFilter->setObjectName(QStringLiteral("actionPreviousFilter"));
        actionShowSpectrogram = new QAction(PickerView);
        actionShowSpectrogram->setObjectName(QStringLiteral("actionShowSpectrogram"));
        actionShowSpectrogram->setCheckable(true);
        actionSortByAzimuth = new QAction(PickerView);
        actionSortByAzimuth->setObjectName(QStringLiteral("actionSortByAzimuth"));
        actionSortByAzimuth->setCheckable(true);
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/icons/icons/sort_az.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByAzimuth->setIcon(icon22);
        actionOpenSpectrum = new QAction(PickerView);
        actionOpenSpectrum->setObjectName(QStringLiteral("actionOpenSpectrum"));
        actionResetScale = new QAction(PickerView);
        actionResetScale->setObjectName(QStringLiteral("actionResetScale"));
        actionResetScale->setIcon(icon7);
        actionResetScale->setVisible(true);
        actionShowAllComponents = new QAction(PickerView);
        actionShowAllComponents->setObjectName(QStringLiteral("actionShowAllComponents"));
        actionShowAllComponents->setCheckable(true);
        actionSetPickOnsetEmergent = new QAction(PickerView);
        actionSetPickOnsetEmergent->setObjectName(QStringLiteral("actionSetPickOnsetEmergent"));
        actionSetPickOnsetImpulsive = new QAction(PickerView);
        actionSetPickOnsetImpulsive->setObjectName(QStringLiteral("actionSetPickOnsetImpulsive"));
        actionSetPickOnsetQuestionable = new QAction(PickerView);
        actionSetPickOnsetQuestionable->setObjectName(QStringLiteral("actionSetPickOnsetQuestionable"));
        actionSetPickOnsetUnset = new QAction(PickerView);
        actionSetPickOnsetUnset->setObjectName(QStringLiteral("actionSetPickOnsetUnset"));
        centralwidget = new QWidget(PickerView);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        vboxLayout = new QVBoxLayout(centralwidget);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(6, 6, 6, 6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        frameZoomWrapper = new QFrame(splitter);
        frameZoomWrapper->setObjectName(QStringLiteral("frameZoomWrapper"));
        frameZoomWrapper->setFrameShape(QFrame::StyledPanel);
        frameZoomWrapper->setFrameShadow(QFrame::Sunken);
        vboxLayout1 = new QVBoxLayout(frameZoomWrapper);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        frameZoom = new Seiscomp::Gui::ZoomRecordFrame(frameZoomWrapper);
        frameZoom->setObjectName(QStringLiteral("frameZoom"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameZoom->sizePolicy().hasHeightForWidth());
        frameZoom->setSizePolicy(sizePolicy);
        frameZoom->setFrameShape(QFrame::NoFrame);
        frameZoom->setFrameShadow(QFrame::Sunken);
        vboxLayout2 = new QVBoxLayout(frameZoom);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(6, 6, 6, 6);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        frameCurrentRowLabel = new QFrame(frameZoom);
        frameCurrentRowLabel->setObjectName(QStringLiteral("frameCurrentRowLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(5);
        sizePolicy1.setHeightForWidth(frameCurrentRowLabel->sizePolicy().hasHeightForWidth());
        frameCurrentRowLabel->setSizePolicy(sizePolicy1);
        frameCurrentRowLabel->setFrameShape(QFrame::NoFrame);
        frameCurrentRowLabel->setFrameShadow(QFrame::Plain);
        hboxLayout = new QHBoxLayout(frameCurrentRowLabel);
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        labelStationCode = new QLabel(frameCurrentRowLabel);
        labelStationCode->setObjectName(QStringLiteral("labelStationCode"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelStationCode->sizePolicy().hasHeightForWidth());
        labelStationCode->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(labelStationCode);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(0);
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        labelCode = new QLabel(frameCurrentRowLabel);
        labelCode->setObjectName(QStringLiteral("labelCode"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(labelCode->sizePolicy().hasHeightForWidth());
        labelCode->setSizePolicy(sizePolicy3);
        labelCode->setMinimumSize(QSize(20, 0));

        hboxLayout1->addWidget(labelCode);

        label = new QLabel(frameCurrentRowLabel);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout1->addWidget(label);

        labelDistance = new QLabel(frameCurrentRowLabel);
        labelDistance->setObjectName(QStringLiteral("labelDistance"));

        hboxLayout1->addWidget(labelDistance);

        label1 = new QLabel(frameCurrentRowLabel);
        label1->setObjectName(QStringLiteral("label1"));

        hboxLayout1->addWidget(label1);

        labelAzimuth = new QLabel(frameCurrentRowLabel);
        labelAzimuth->setObjectName(QStringLiteral("labelAzimuth"));

        hboxLayout1->addWidget(labelAzimuth);


        hboxLayout->addLayout(hboxLayout1);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout2->addWidget(frameCurrentRowLabel);

        frameCurrentRow = new QFrame(frameZoom);
        frameCurrentRow->setObjectName(QStringLiteral("frameCurrentRow"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frameCurrentRow->sizePolicy().hasHeightForWidth());
        frameCurrentRow->setSizePolicy(sizePolicy4);
        frameCurrentRow->setFrameShape(QFrame::NoFrame);
        frameCurrentRow->setFrameShadow(QFrame::Raised);

        vboxLayout2->addWidget(frameCurrentRow);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        frameZoomControls = new QFrame(frameZoom);
        frameZoomControls->setObjectName(QStringLiteral("frameZoomControls"));
        sizePolicy2.setHeightForWidth(frameZoomControls->sizePolicy().hasHeightForWidth());
        frameZoomControls->setSizePolicy(sizePolicy2);
        frameZoomControls->setFrameShape(QFrame::NoFrame);
        frameZoomControls->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameZoomControls);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        btnRowAccept = new QPushButton(frameZoomControls);
        btnRowAccept->setObjectName(QStringLiteral("btnRowAccept"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnRowAccept->sizePolicy().hasHeightForWidth());
        btnRowAccept->setSizePolicy(sizePolicy5);
        btnRowAccept->setMinimumSize(QSize(32, 32));
        btnRowAccept->setMaximumSize(QSize(32, 32));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/icons/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowAccept->setIcon(icon23);
        btnRowAccept->setIconSize(QSize(24, 24));
        btnRowAccept->setCheckable(true);
        btnRowAccept->setFlat(false);

        hboxLayout3->addWidget(btnRowAccept);

        btnRowRemove = new QPushButton(frameZoomControls);
        btnRowRemove->setObjectName(QStringLiteral("btnRowRemove"));
        sizePolicy5.setHeightForWidth(btnRowRemove->sizePolicy().hasHeightForWidth());
        btnRowRemove->setSizePolicy(sizePolicy5);
        btnRowRemove->setMinimumSize(QSize(32, 32));
        btnRowRemove->setMaximumSize(QSize(32, 32));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/icons/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowRemove->setIcon(icon24);
        btnRowRemove->setIconSize(QSize(24, 24));
        btnRowRemove->setCheckable(true);

        hboxLayout3->addWidget(btnRowRemove);

        btnRowReset = new QPushButton(frameZoomControls);
        btnRowReset->setObjectName(QStringLiteral("btnRowReset"));
        sizePolicy5.setHeightForWidth(btnRowReset->sizePolicy().hasHeightForWidth());
        btnRowReset->setSizePolicy(sizePolicy5);
        btnRowReset->setMinimumSize(QSize(32, 32));
        btnRowReset->setMaximumSize(QSize(32, 32));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/icons/icons/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowReset->setIcon(icon25);
        btnRowReset->setIconSize(QSize(24, 24));

        hboxLayout3->addWidget(btnRowReset);


        hboxLayout2->addWidget(frameZoomControls);

        frameTimeScale = new QFrame(frameZoom);
        frameTimeScale->setObjectName(QStringLiteral("frameTimeScale"));
        frameTimeScale->setFrameShape(QFrame::NoFrame);
        frameTimeScale->setFrameShadow(QFrame::Raised);

        hboxLayout2->addWidget(frameTimeScale);


        vboxLayout2->addLayout(hboxLayout2);


        vboxLayout1->addWidget(frameZoom);

        splitter->addWidget(frameZoomWrapper);
        framePickList = new QFrame(splitter);
        framePickList->setObjectName(QStringLiteral("framePickList"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(framePickList->sizePolicy().hasHeightForWidth());
        framePickList->setSizePolicy(sizePolicy6);
        framePickList->setFrameShape(QFrame::StyledPanel);
        framePickList->setFrameShadow(QFrame::Sunken);
        splitter->addWidget(framePickList);

        vboxLayout->addWidget(splitter);

        PickerView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(PickerView);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        PickerView->setStatusBar(statusbar);
        toolBarScale = new QToolBar(PickerView);
        toolBarScale->setObjectName(QStringLiteral("toolBarScale"));
        toolBarScale->setOrientation(Qt::Horizontal);
        toolBarScale->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarScale);
        toolBarSort = new QToolBar(PickerView);
        toolBarSort->setObjectName(QStringLiteral("toolBarSort"));
        toolBarSort->setOrientation(Qt::Horizontal);
        toolBarSort->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarSort);
        toolBarAlign = new QToolBar(PickerView);
        toolBarAlign->setObjectName(QStringLiteral("toolBarAlign"));
        toolBarAlign->setOrientation(Qt::Horizontal);
        toolBarAlign->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarAlign);
        toolBarComponent = new QToolBar(PickerView);
        toolBarComponent->setObjectName(QStringLiteral("toolBarComponent"));
        toolBarComponent->setOrientation(Qt::Horizontal);
        toolBarComponent->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarComponent);
        toolBarStations = new QToolBar(PickerView);
        toolBarStations->setObjectName(QStringLiteral("toolBarStations"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(toolBarStations->sizePolicy().hasHeightForWidth());
        toolBarStations->setSizePolicy(sizePolicy7);
        toolBarStations->setOrientation(Qt::Horizontal);
        toolBarStations->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarStations);
        toolBarPicking = new QToolBar(PickerView);
        toolBarPicking->setObjectName(QStringLiteral("toolBarPicking"));
        toolBarPicking->setMovable(true);
        toolBarPicking->setOrientation(Qt::Horizontal);
        toolBarPicking->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarPicking);
        toolBarFilter = new QToolBar(PickerView);
        toolBarFilter->setObjectName(QStringLiteral("toolBarFilter"));
        toolBarFilter->setOrientation(Qt::Horizontal);
        toolBarFilter->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarFilter);
        toolBarSpectrogram = new QToolBar(PickerView);
        toolBarSpectrogram->setObjectName(QStringLiteral("toolBarSpectrogram"));
        toolBarSpectrogram->setOrientation(Qt::Horizontal);
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarSpectrogram);
        toolBarTTT = new QToolBar(PickerView);
        toolBarTTT->setObjectName(QStringLiteral("toolBarTTT"));
        toolBarTTT->setOrientation(Qt::Horizontal);
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarTTT);
        toolBarRelocate = new QToolBar(PickerView);
        toolBarRelocate->setObjectName(QStringLiteral("toolBarRelocate"));
        toolBarRelocate->setOrientation(Qt::Horizontal);
        toolBarRelocate->setIconSize(QSize(24, 24));
        PickerView->addToolBar(Qt::TopToolBarArea, toolBarRelocate);
        menuBar = new QMenuBar(PickerView);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 945, 38));
        menu_Filter = new QMenu(menuBar);
        menu_Filter->setObjectName(QStringLiteral("menu_Filter"));
        menu_Locate = new QMenu(menuBar);
        menu_Locate->setObjectName(QStringLiteral("menu_Locate"));
        menu_Tools = new QMenu(menuBar);
        menu_Tools->setObjectName(QStringLiteral("menu_Tools"));
        menuPicking = new QMenu(menuBar);
        menuPicking->setObjectName(QStringLiteral("menuPicking"));
        menu_Navigation = new QMenu(menuBar);
        menu_Navigation->setObjectName(QStringLiteral("menu_Navigation"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuComponents = new QMenu(menuView);
        menuComponents->setObjectName(QStringLiteral("menuComponents"));
        menuTraces = new QMenu(menuView);
        menuTraces->setObjectName(QStringLiteral("menuTraces"));
        menuAlignArrival = new QMenu(menuTraces);
        menuAlignArrival->setObjectName(QStringLiteral("menuAlignArrival"));
        menu_Zoomtrace = new QMenu(menuView);
        menu_Zoomtrace->setObjectName(QStringLiteral("menu_Zoomtrace"));
        PickerView->setMenuBar(menuBar);

        toolBarScale->addAction(actionDefaultView);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionIncreaseRowHeight);
        toolBarScale->addAction(actionDecreaseRowHeight);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionIncreaseRowTimescale);
        toolBarScale->addAction(actionDecreaseRowTimescale);
        toolBarScale->addSeparator();
        toolBarScale->addAction(actionMaximizeAmplitudes);
        toolBarSort->addAction(actionSortByDistance);
        toolBarSort->addAction(actionSortByAzimuth);
        toolBarSort->addAction(actionSortAlphabetically);
        toolBarSort->addAction(actionSortByResidual);
        toolBarAlign->addAction(actionAlignOnPArrival);
        toolBarAlign->addAction(actionAlignOnSArrival);
        toolBarAlign->addAction(actionAlignOnOriginTime);
        toolBarComponent->addAction(actionShowZComponent);
        toolBarComponent->addAction(actionShowNComponent);
        toolBarComponent->addAction(actionShowEComponent);
        toolBarStations->addAction(actionShowAllStations);
        toolBarStations->addAction(actionShowUsedStations);
        toolBarPicking->addAction(actionPickP);
        toolBarPicking->addAction(actionPickS);
        toolBarRelocate->addAction(actionRelocate);
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menu_Navigation->menuAction());
        menuBar->addAction(menuPicking->menuAction());
        menuBar->addAction(menu_Filter->menuAction());
        menuBar->addAction(menu_Tools->menuAction());
        menuBar->addAction(menu_Locate->menuAction());
        menu_Filter->addAction(actionToggleFilter);
        menu_Filter->addAction(actionLimitFilterToZoomTrace);
        menu_Locate->addAction(actionRelocate);
        menu_Locate->addAction(actionModifyOrigin);
        menu_Tools->addAction(actionOpenSpectrum);
        menuPicking->addAction(actionRepickAutomatically);
        menuPicking->addSeparator();
        menu_Navigation->addAction(actionScrollLeft);
        menu_Navigation->addAction(actionScrollRight);
        menu_Navigation->addAction(actionScrollFineLeft);
        menu_Navigation->addAction(actionScrollFineRight);
        menuView->addAction(actionDefaultView);
        menuView->addAction(actionShowAllComponents);
        menuView->addAction(actionShowUsedStations);
        menuView->addAction(actionShowTraceValuesInNmS);
        menuView->addAction(actionShowUnassociatedPicks);
        menuView->addAction(actionShowTheoreticalArrivals);
        menuView->addAction(actionShowSpectrogram);
        menuView->addSeparator();
        menuView->addAction(menu_Zoomtrace->menuAction());
        menuView->addAction(menuTraces->menuAction());
        menuView->addAction(menuComponents->menuAction());
        menuComponents->addAction(actionShowZComponent);
        menuComponents->addAction(actionShowNComponent);
        menuComponents->addAction(actionShowEComponent);
        menuTraces->addAction(actionIncreaseRowHeight);
        menuTraces->addAction(actionDecreaseRowHeight);
        menuTraces->addAction(actionIncreaseRowTimescale);
        menuTraces->addAction(actionDecreaseRowTimescale);
        menuTraces->addAction(actionMaximizeAmplitudes);
        menuTraces->addSeparator();
        menuTraces->addAction(menuAlignArrival->menuAction());
        menuAlignArrival->addAction(actionAlignOnOriginTime);
        menu_Zoomtrace->addAction(actionIncreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionDecreaseAmplitudeScale);
        menu_Zoomtrace->addAction(actionTimeScaleUp);
        menu_Zoomtrace->addAction(actionTimeScaleDown);
        menu_Zoomtrace->addAction(actionResetScale);
        menu_Zoomtrace->addSeparator();
        menu_Zoomtrace->addAction(actionClipComponentsToViewport);

        retranslateUi(PickerView);

        QMetaObject::connectSlotsByName(PickerView);
    } // setupUi

    void retranslateUi(QMainWindow *PickerView)
    {
        PickerView->setWindowTitle(QApplication::translate("PickerView", "Picker", Q_NULLPTR));
        actionIncreaseAmplitudeScale->setText(QApplication::translate("PickerView", "Scale amplitudes up", Q_NULLPTR));
        actionIncreaseAmplitudeScale->setIconText(QApplication::translate("PickerView", "Scale amplitudes up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionIncreaseAmplitudeScale->setToolTip(QApplication::translate("PickerView", "Increase amplitude scale of current trace", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionIncreaseAmplitudeScale->setShortcut(QApplication::translate("PickerView", "Ctrl+Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDecreaseAmplitudeScale->setText(QApplication::translate("PickerView", "Scale amplitudes down", Q_NULLPTR));
        actionDecreaseAmplitudeScale->setIconText(QApplication::translate("PickerView", "Scale amplitudes down", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDecreaseAmplitudeScale->setToolTip(QApplication::translate("PickerView", "Descrease amplitude scale of current trace", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDecreaseAmplitudeScale->setShortcut(QApplication::translate("PickerView", "Ctrl+Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionTimeScaleUp->setText(QApplication::translate("PickerView", "Increase visible timespan", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleUp->setToolTip(QApplication::translate("PickerView", "Increase visible timespan", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionTimeScaleUp->setShortcut(QApplication::translate("PickerView", "Ctrl+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionTimeScaleDown->setText(QApplication::translate("PickerView", "Decrease visible timespan", Q_NULLPTR));
        actionTimeScaleDown->setIconText(QApplication::translate("PickerView", "Decrease visible timespan", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleDown->setToolTip(QApplication::translate("PickerView", "Decrease visible timespan", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionTimeScaleDown->setShortcut(QApplication::translate("PickerView", "Ctrl+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollLeft->setText(QApplication::translate("PickerView", "Scroll left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollLeft->setToolTip(QApplication::translate("PickerView", "Scroll current trace left", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollLeft->setShortcut(QApplication::translate("PickerView", "Shift+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollRight->setText(QApplication::translate("PickerView", "Scroll right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollRight->setToolTip(QApplication::translate("PickerView", "Scroll current trace right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollRight->setShortcut(QApplication::translate("PickerView", "Shift+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectNextTrace->setText(QApplication::translate("PickerView", "Next trace", Q_NULLPTR));
        actionSelectNextTrace->setIconText(QApplication::translate("PickerView", "Next trace", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectNextTrace->setShortcut(QApplication::translate("PickerView", "Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectPreviousTrace->setText(QApplication::translate("PickerView", "Previous trace", Q_NULLPTR));
        actionSelectPreviousTrace->setIconText(QApplication::translate("PickerView", "Previous trace", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectPreviousTrace->setShortcut(QApplication::translate("PickerView", "Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollFineLeft->setText(QApplication::translate("PickerView", "Scroll fine left", Q_NULLPTR));
        actionScrollFineLeft->setIconText(QApplication::translate("PickerView", "Scroll fine left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollFineLeft->setToolTip(QApplication::translate("PickerView", "Scroll current trace left with finer steps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollFineLeft->setShortcut(QApplication::translate("PickerView", "Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollFineRight->setText(QApplication::translate("PickerView", "Scroll fine right", Q_NULLPTR));
        actionScrollFineRight->setIconText(QApplication::translate("PickerView", "Scroll fine right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollFineRight->setToolTip(QApplication::translate("PickerView", "Scroll current trace right with finer steps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollFineRight->setShortcut(QApplication::translate("PickerView", "Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionIncreaseRowHeight->setText(QApplication::translate("PickerView", "Increase row height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowHeight->setToolTip(QApplication::translate("PickerView", "Increases the row height in traceview (Shift+Y)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionIncreaseRowHeight->setShortcut(QApplication::translate("PickerView", "Shift+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDecreaseRowHeight->setText(QApplication::translate("PickerView", "Decrease row height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowHeight->setToolTip(QApplication::translate("PickerView", "Decreases the row height in traceview (Y)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDecreaseRowHeight->setShortcut(QApplication::translate("PickerView", "Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionIncreaseRowTimescale->setText(QApplication::translate("PickerView", "Increase row timescale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowTimescale->setToolTip(QApplication::translate("PickerView", "Increases the timescale in traceview (>)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionIncreaseRowTimescale->setShortcut(QApplication::translate("PickerView", ">", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDecreaseRowTimescale->setText(QApplication::translate("PickerView", "Decrease row timescale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowTimescale->setToolTip(QApplication::translate("PickerView", "Decreases the timescale in traceview (<)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDecreaseRowTimescale->setShortcut(QApplication::translate("PickerView", "<", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectFirstRow->setText(QApplication::translate("PickerView", "Select first row", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectFirstRow->setShortcut(QApplication::translate("PickerView", "Home", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectLastRow->setText(QApplication::translate("PickerView", "Select last row", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectLastRow->setShortcut(QApplication::translate("PickerView", "End", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAlignOnPArrival->setText(QApplication::translate("PickerView", "Align on P arrival", Q_NULLPTR));
        actionAlignOnPArrival->setIconText(QApplication::translate("PickerView", "Align on P arrival", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAlignOnPArrival->setToolTip(QApplication::translate("PickerView", "Align on P arrival", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAlignOnPArrival->setShortcut(QApplication::translate("PickerView", "Ctrl+F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAlignOnSArrival->setText(QApplication::translate("PickerView", "Align on S arrival", Q_NULLPTR));
        actionAlignOnSArrival->setIconText(QApplication::translate("PickerView", "Align on S arrival", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAlignOnSArrival->setToolTip(QApplication::translate("PickerView", "Align on S arrival", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAlignOnSArrival->setShortcut(QApplication::translate("PickerView", "Ctrl+F2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAlignOnOriginTime->setText(QApplication::translate("PickerView", "Align on origin time", Q_NULLPTR));
        actionAlignOnOriginTime->setIconText(QApplication::translate("PickerView", "Align on origin time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAlignOnOriginTime->setToolTip(QApplication::translate("PickerView", "Align on origin time (Ctrl+0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAlignOnOriginTime->setShortcut(QApplication::translate("PickerView", "Ctrl+0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDefaultView->setText(QApplication::translate("PickerView", "&Default view", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDefaultView->setToolTip(QApplication::translate("PickerView", "Default view (Shift+N)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDefaultView->setShortcut(QApplication::translate("PickerView", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSortAlphabetically->setText(QApplication::translate("PickerView", "Sort by names", Q_NULLPTR));
        actionSortAlphabetically->setIconText(QApplication::translate("PickerView", "Sort by names", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSortAlphabetically->setToolTip(QApplication::translate("PickerView", "Sorts the traces by name (Alt+A)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSortAlphabetically->setShortcut(QApplication::translate("PickerView", "Alt+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSortByDistance->setText(QApplication::translate("PickerView", "Sort by distance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSortByDistance->setToolTip(QApplication::translate("PickerView", "Sort by distance (Alt+D)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSortByDistance->setShortcut(QApplication::translate("PickerView", "Alt+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionToggleFilter->setText(QApplication::translate("PickerView", "&Toggle filter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionToggleFilter->setToolTip(QApplication::translate("PickerView", "Toggles using a filter before displaying the traces (F)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionToggleFilter->setShortcut(QApplication::translate("PickerView", "F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionMaximizeAmplitudes->setText(QApplication::translate("PickerView", "Maximize visible amplitudes", Q_NULLPTR));
        actionMaximizeAmplitudes->setIconText(QApplication::translate("PickerView", "Maximize visible amplitudes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMaximizeAmplitudes->setToolTip(QApplication::translate("PickerView", "Maximize visible amplitudes (S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionMaximizeAmplitudes->setShortcut(QApplication::translate("PickerView", "S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPickP->setText(QApplication::translate("PickerView", "Pick P phase", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPickP->setShortcut(QApplication::translate("PickerView", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPickS->setText(QApplication::translate("PickerView", "Pick S phase", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPickS->setShortcut(QApplication::translate("PickerView", "F2", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPickOther->setText(QApplication::translate("PickerView", "Pick other phase", Q_NULLPTR));
        actionDisablePicking->setText(QApplication::translate("PickerView", "Leave picking mode", Q_NULLPTR));
        actionDisablePicking->setIconText(QApplication::translate("PickerView", "Leave picking mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisablePicking->setToolTip(QApplication::translate("PickerView", "Leaves the picking mode (Esc)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDisablePicking->setShortcut(QApplication::translate("PickerView", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConfirmPick->setText(QApplication::translate("PickerView", "Confirm pick", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConfirmPick->setToolTip(QApplication::translate("PickerView", "Confirm pick (Shift+Return)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionConfirmPick->setShortcut(QApplication::translate("PickerView", "Shift+Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDeletePick->setText(QApplication::translate("PickerView", "Delete pick", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDeletePick->setToolTip(QApplication::translate("PickerView", "Delete pick (Del)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDeletePick->setShortcut(QApplication::translate("PickerView", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRelocate->setText(QApplication::translate("PickerView", "&Apply", Q_NULLPTR));
        actionRelocate->setIconText(QApplication::translate("PickerView", "Apply", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRelocate->setToolTip(QApplication::translate("PickerView", "Apply the changed picks to the origin and update the residuals. \"Relocate\" has to be done manually! (F5)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionRelocate->setStatusTip(QApplication::translate("PickerView", "Apply the changed picks to the origin and update the residuals. \"Relocate\" has to be done manually! (F5)", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionRelocate->setShortcut(QApplication::translate("PickerView", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowAllStations->setText(QApplication::translate("PickerView", "Add stations in range", Q_NULLPTR));
        actionShowAllStations->setIconText(QApplication::translate("PickerView", "Add stations in range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowAllStations->setToolTip(QApplication::translate("PickerView", "Adds all stations next to the origin with distance lower or equal than the entered value that haven't triggered. When view mode is \"used stations only\" you won't see the new stations until leaving this mode.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowUsedStations->setText(QApplication::translate("PickerView", "&Show used stations only", Q_NULLPTR));
        actionShowUsedStations->setIconText(QApplication::translate("PickerView", "Used stations only", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowUsedStations->setToolTip(QApplication::translate("PickerView", "Toggles between hiding unpicked and deactivated stations and showing all stations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSortByResidual->setText(QApplication::translate("PickerView", "Sort by residual", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSortByResidual->setShortcut(QApplication::translate("PickerView", "Alt+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowZComponent->setText(QApplication::translate("PickerView", "Vertical", Q_NULLPTR));
        actionShowZComponent->setIconText(QApplication::translate("PickerView", "Vertical", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowZComponent->setToolTip(QApplication::translate("PickerView", "Show Vertical Component (Z)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowZComponent->setShortcut(QApplication::translate("PickerView", "Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowNComponent->setText(QApplication::translate("PickerView", "North", Q_NULLPTR));
        actionShowNComponent->setIconText(QApplication::translate("PickerView", "North", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowNComponent->setToolTip(QApplication::translate("PickerView", "Show North Component (N)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowNComponent->setShortcut(QApplication::translate("PickerView", "N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowEComponent->setText(QApplication::translate("PickerView", "East", Q_NULLPTR));
        actionShowEComponent->setIconText(QApplication::translate("PickerView", "East", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowEComponent->setToolTip(QApplication::translate("PickerView", "Show East Component (E)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowEComponent->setShortcut(QApplication::translate("PickerView", "E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGotoNextMarker->setText(QApplication::translate("PickerView", "Goto next marker", Q_NULLPTR));
        actionGotoNextMarker->setIconText(QApplication::translate("PickerView", "Goto next marker", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionGotoNextMarker->setToolTip(QApplication::translate("PickerView", "Goto next marker", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGotoNextMarker->setShortcut(QApplication::translate("PickerView", "Alt+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGotoPreviousMarker->setText(QApplication::translate("PickerView", "Goto previous marker", Q_NULLPTR));
        actionGotoPreviousMarker->setIconText(QApplication::translate("PickerView", "Goto previous marker", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionGotoPreviousMarker->setToolTip(QApplication::translate("PickerView", "Goto previous marker", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGotoPreviousMarker->setShortcut(QApplication::translate("PickerView", "Alt+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCreatePick->setText(QApplication::translate("PickerView", "Create pick", Q_NULLPTR));
        actionCreatePick->setIconText(QApplication::translate("PickerView", "Create pick", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCreatePick->setToolTip(QApplication::translate("PickerView", "Create pick (Return)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCreatePick->setShortcut(QApplication::translate("PickerView", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSwitchFullscreen->setText(QApplication::translate("PickerView", "Toggle fullscreen", Q_NULLPTR));
        actionSwitchFullscreen->setIconText(QApplication::translate("PickerView", "Toggle fullscreen", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSwitchFullscreen->setToolTip(QApplication::translate("PickerView", "Toggle fullscreen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSwitchFullscreen->setShortcut(QApplication::translate("PickerView", "F11", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAddStations->setText(QApplication::translate("PickerView", "Add stations", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAddStations->setShortcut(QApplication::translate("PickerView", "F3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSearchStation->setText(QApplication::translate("PickerView", "Search station", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSearchStation->setShortcut(QApplication::translate("PickerView", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionModifyOrigin->setText(QApplication::translate("PickerView", "&Modify origin", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionModifyOrigin->setToolTip(QApplication::translate("PickerView", "Modify origin", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionModifyOrigin->setStatusTip(QApplication::translate("PickerView", "Modify the location and origin time of the current origin and recalculate the theoretical arrivals and the residuals.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setText(QApplication::translate("PickerView", "&Limit filter to zoom trace", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLimitFilterToZoomTrace->setToolTip(QApplication::translate("PickerView", "Limit filter to zoom trace", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setStatusTip(QApplication::translate("PickerView", "Limits filtering to zoom trace. All other traces are not filtered. This is mostly used to gain performance.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionLimitFilterToZoomTrace->setShortcut(QApplication::translate("PickerView", "Shift+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRepickAutomatically->setText(QApplication::translate("PickerView", "Repick automatically", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionRepickAutomatically->setShortcut(QApplication::translate("PickerView", "R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowTraceValuesInNmS->setText(QApplication::translate("PickerView", "Show trace values in nano sensor units", Q_NULLPTR));
        actionClipComponentsToViewport->setText(QApplication::translate("PickerView", "Clip components to viewport", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionClipComponentsToViewport->setShortcut(QApplication::translate("PickerView", "C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPolarityPositive->setText(QApplication::translate("PickerView", "positive", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPolarityPositive->setShortcut(QApplication::translate("PickerView", "Shift+Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPolarityNegative->setText(QApplication::translate("PickerView", "negative", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPolarityNegative->setShortcut(QApplication::translate("PickerView", "Shift+Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPolarityUndecidable->setText(QApplication::translate("PickerView", "undecidable", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPolarityUndecidable->setShortcut(QApplication::translate("PickerView", "Shift+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPolarityUnset->setText(QApplication::translate("PickerView", "unset", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPolarityUnset->setShortcut(QApplication::translate("PickerView", "Shift+Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPick->setText(QApplication::translate("PickerView", "Set pick", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPick->setShortcut(QApplication::translate("PickerView", "Space", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowTheoreticalArrivals->setText(QApplication::translate("PickerView", "Show theoretical arrivals", Q_NULLPTR));
        actionShowTheoreticalArrivals->setIconText(QApplication::translate("PickerView", "Show theoretical arrivals", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowTheoreticalArrivals->setToolTip(QApplication::translate("PickerView", "Shows theoretical arrivals as blue bars in the traces", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowTheoreticalArrivals->setShortcut(QApplication::translate("PickerView", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowUnassociatedPicks->setText(QApplication::translate("PickerView", "Show unassociated picks", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionShowUnassociatedPicks->setShortcut(QApplication::translate("PickerView", "Ctrl+P", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionNextFilter->setText(QApplication::translate("PickerView", "Next filter", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionNextFilter->setShortcut(QApplication::translate("PickerView", "G", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPreviousFilter->setText(QApplication::translate("PickerView", "Previous filter", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionPreviousFilter->setShortcut(QApplication::translate("PickerView", "D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowSpectrogram->setText(QApplication::translate("PickerView", "Show spectrogram", Q_NULLPTR));
#ifndef QT_NO_STATUSTIP
        actionShowSpectrogram->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionShowSpectrogram->setShortcut(QApplication::translate("PickerView", "Shift+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSortByAzimuth->setText(QApplication::translate("PickerView", "Sort by azimuth", Q_NULLPTR));
        actionOpenSpectrum->setText(QApplication::translate("PickerView", "Spectrum for current component", Q_NULLPTR));
        actionOpenSpectrum->setIconText(QApplication::translate("PickerView", "Spectrum for current component", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenSpectrum->setToolTip(QApplication::translate("PickerView", "Spectrum for current component. This can be also achieved by pressing Space while not in picking mode. (SPACE)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpenSpectrum->setShortcut(QApplication::translate("PickerView", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionResetScale->setText(QApplication::translate("PickerView", "Reset scale", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionResetScale->setShortcut(QApplication::translate("PickerView", "W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowAllComponents->setText(QApplication::translate("PickerView", "Show all components", Q_NULLPTR));
        actionShowAllComponents->setIconText(QApplication::translate("PickerView", "Show all components", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowAllComponents->setToolTip(QApplication::translate("PickerView", "Toggles between showing all three components or the active component only", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowAllComponents->setShortcut(QApplication::translate("PickerView", "T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPickOnsetEmergent->setText(QApplication::translate("PickerView", "emergent", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPickOnsetEmergent->setShortcut(QApplication::translate("PickerView", "Shift+E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPickOnsetImpulsive->setText(QApplication::translate("PickerView", "impulsive", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPickOnsetImpulsive->setShortcut(QApplication::translate("PickerView", "Shift+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPickOnsetQuestionable->setText(QApplication::translate("PickerView", "questionable", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetPickOnsetQuestionable->setShortcut(QApplication::translate("PickerView", "Shift+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetPickOnsetUnset->setText(QApplication::translate("PickerView", "unset", Q_NULLPTR));
        labelStationCode->setText(QApplication::translate("PickerView", "ABCD", Q_NULLPTR));
        labelCode->setText(QApplication::translate("PickerView", "AB  BHZ", Q_NULLPTR));
        label->setText(QApplication::translate("PickerView", ", distance: ", Q_NULLPTR));
        labelDistance->setText(QApplication::translate("PickerView", "-1\302\260", Q_NULLPTR));
        label1->setText(QApplication::translate("PickerView", ", azimuth: ", Q_NULLPTR));
        labelAzimuth->setText(QApplication::translate("PickerView", "-1\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRowAccept->setToolTip(QApplication::translate("PickerView", "Accept picked phase", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRowAccept->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRowRemove->setToolTip(QApplication::translate("PickerView", "Deactivate current pick or trace depending on the picking mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRowRemove->setText(QString());
#ifndef QT_NO_SHORTCUT
        btnRowRemove->setShortcut(QApplication::translate("PickerView", "X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        btnRowReset->setToolTip(QApplication::translate("PickerView", "Reset manual picks", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRowReset->setText(QString());
        toolBarScale->setWindowTitle(QApplication::translate("PickerView", "Zooming", Q_NULLPTR));
        toolBarSort->setWindowTitle(QApplication::translate("PickerView", "Sort", Q_NULLPTR));
        toolBarAlign->setWindowTitle(QApplication::translate("PickerView", "Alignment", Q_NULLPTR));
        toolBarComponent->setWindowTitle(QApplication::translate("PickerView", "Components", Q_NULLPTR));
        toolBarStations->setWindowTitle(QApplication::translate("PickerView", "Add stations", Q_NULLPTR));
        toolBarPicking->setWindowTitle(QApplication::translate("PickerView", "Picking", Q_NULLPTR));
        toolBarFilter->setWindowTitle(QApplication::translate("PickerView", "Filter", Q_NULLPTR));
        toolBarSpectrogram->setWindowTitle(QApplication::translate("PickerView", "Spectrogram", Q_NULLPTR));
        toolBarTTT->setWindowTitle(QApplication::translate("PickerView", "Travel times", Q_NULLPTR));
        toolBarRelocate->setWindowTitle(QApplication::translate("PickerView", "Apply", Q_NULLPTR));
        menu_Filter->setTitle(QApplication::translate("PickerView", "&Filter", Q_NULLPTR));
        menu_Locate->setTitle(QApplication::translate("PickerView", "&Locator", Q_NULLPTR));
        menu_Tools->setTitle(QApplication::translate("PickerView", "&Tools", Q_NULLPTR));
        menuPicking->setTitle(QApplication::translate("PickerView", "&Picking", Q_NULLPTR));
        menu_Navigation->setTitle(QApplication::translate("PickerView", "&Navigation", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("PickerView", "&View", Q_NULLPTR));
        menuComponents->setTitle(QApplication::translate("PickerView", "&Components", Q_NULLPTR));
        menuTraces->setTitle(QApplication::translate("PickerView", "&Traces", Q_NULLPTR));
        menuAlignArrival->setTitle(QApplication::translate("PickerView", "Align", Q_NULLPTR));
        menu_Zoomtrace->setTitle(QApplication::translate("PickerView", "&Zoomtrace", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PickerView: public Ui_PickerView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKERVIEW_H
