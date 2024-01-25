/********************************************************************************
** Form generated from reading UI file 'amplitudeview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMPLITUDEVIEW_H
#define UI_AMPLITUDEVIEW_H

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

class Ui_AmplitudeView
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
    QAction *actionResetDefaultConfig;
    QAction *actionAlignOnPArrival;
    QAction *actionAlignOnOriginTime;
    QAction *actionDefaultView;
    QAction *actionSortAlphabetically;
    QAction *actionSortByDistance;
    QAction *actionToggleFilter;
    QAction *actionMaximizeAmplitudes;
    QAction *actionComputeMagnitudes;
    QAction *actionShowTheoreticalArrivals;
    QAction *actionShowAllStations;
    QAction *actionShowUsedStations;
    QAction *actionShowZComponent;
    QAction *actionShowNComponent;
    QAction *actionShowEComponent;
    QAction *actionGotoNextMarker;
    QAction *actionGotoPreviousMarker;
    QAction *actionSwitchFullscreen;
    QAction *actionAddStations;
    QAction *actionSearchStation;
    QAction *actionLimitFilterToZoomTrace;
    QAction *actionShowTraceValuesInNmS;
    QAction *actionClipComponentsToViewport;
    QAction *actionCreateAmplitude;
    QAction *actionConfirmAmplitude;
    QAction *actionDeleteAmplitude;
    QAction *actionDisablePicking;
    QAction *actionRecalculateAmplitudes;
    QAction *actionPickAmplitude;
    QAction *actionRecalculateAmplitude;
    QAction *actionSetAmplitude;
    QAction *actionResetScale;
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
    QLabel *label_2;
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
    QFrame *frameTraces;
    QStatusBar *statusbar;
    QToolBar *toolBarScale;
    QToolBar *toolBarSort;
    QToolBar *toolBarAlign;
    QToolBar *toolBarComponent;
    QToolBar *toolBarStations;
    QToolBar *toolBarPicking;
    QMenuBar *menuBar;
    QMenu *menuView;
    QMenu *menuZoomtrace;
    QMenu *menuTraces;
    QMenu *menuAlignArrival;
    QMenu *menuComponents;
    QMenu *menuNavigation;
    QMenu *menuLocate;
    QMenu *menuFilter;
    QToolBar *toolBarTTT;
    QToolBar *toolBarFilter;
    QToolBar *toolBarSetup;
    QToolBar *toolBarComputeMagnitudes;

    void setupUi(QMainWindow *AmplitudeView)
    {
        if (AmplitudeView->objectName().isEmpty())
            AmplitudeView->setObjectName(QStringLiteral("AmplitudeView"));
        AmplitudeView->resize(917, 690);
        AmplitudeView->setIconSize(QSize(16, 16));
        actionIncreaseAmplitudeScale = new QAction(AmplitudeView);
        actionIncreaseAmplitudeScale->setObjectName(QStringLiteral("actionIncreaseAmplitudeScale"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icons/vzoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncreaseAmplitudeScale->setIcon(icon);
        actionDecreaseAmplitudeScale = new QAction(AmplitudeView);
        actionDecreaseAmplitudeScale->setObjectName(QStringLiteral("actionDecreaseAmplitudeScale"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/icons/vzoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecreaseAmplitudeScale->setIcon(icon1);
        actionTimeScaleUp = new QAction(AmplitudeView);
        actionTimeScaleUp->setObjectName(QStringLiteral("actionTimeScaleUp"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/icons/zoomout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleUp->setIcon(icon2);
        actionTimeScaleDown = new QAction(AmplitudeView);
        actionTimeScaleDown->setObjectName(QStringLiteral("actionTimeScaleDown"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/icons/zoomin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTimeScaleDown->setIcon(icon3);
        actionScrollLeft = new QAction(AmplitudeView);
        actionScrollLeft->setObjectName(QStringLiteral("actionScrollLeft"));
        actionScrollRight = new QAction(AmplitudeView);
        actionScrollRight->setObjectName(QStringLiteral("actionScrollRight"));
        actionSelectNextTrace = new QAction(AmplitudeView);
        actionSelectNextTrace->setObjectName(QStringLiteral("actionSelectNextTrace"));
        actionSelectPreviousTrace = new QAction(AmplitudeView);
        actionSelectPreviousTrace->setObjectName(QStringLiteral("actionSelectPreviousTrace"));
        actionScrollFineLeft = new QAction(AmplitudeView);
        actionScrollFineLeft->setObjectName(QStringLiteral("actionScrollFineLeft"));
        actionScrollFineRight = new QAction(AmplitudeView);
        actionScrollFineRight->setObjectName(QStringLiteral("actionScrollFineRight"));
        actionIncreaseRowHeight = new QAction(AmplitudeView);
        actionIncreaseRowHeight->setObjectName(QStringLiteral("actionIncreaseRowHeight"));
        actionIncreaseRowHeight->setIcon(icon);
        actionDecreaseRowHeight = new QAction(AmplitudeView);
        actionDecreaseRowHeight->setObjectName(QStringLiteral("actionDecreaseRowHeight"));
        actionDecreaseRowHeight->setIcon(icon1);
        actionIncreaseRowTimescale = new QAction(AmplitudeView);
        actionIncreaseRowTimescale->setObjectName(QStringLiteral("actionIncreaseRowTimescale"));
        actionIncreaseRowTimescale->setIcon(icon3);
        actionDecreaseRowTimescale = new QAction(AmplitudeView);
        actionDecreaseRowTimescale->setObjectName(QStringLiteral("actionDecreaseRowTimescale"));
        actionDecreaseRowTimescale->setIcon(icon2);
        actionSelectFirstRow = new QAction(AmplitudeView);
        actionSelectFirstRow->setObjectName(QStringLiteral("actionSelectFirstRow"));
        actionSelectLastRow = new QAction(AmplitudeView);
        actionSelectLastRow->setObjectName(QStringLiteral("actionSelectLastRow"));
        actionResetDefaultConfig = new QAction(AmplitudeView);
        actionResetDefaultConfig->setObjectName(QStringLiteral("actionResetDefaultConfig"));
        actionAlignOnPArrival = new QAction(AmplitudeView);
        actionAlignOnPArrival->setObjectName(QStringLiteral("actionAlignOnPArrival"));
        actionAlignOnPArrival->setCheckable(false);
        actionAlignOnPArrival->setChecked(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/icons/align_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnPArrival->setIcon(icon4);
        actionAlignOnOriginTime = new QAction(AmplitudeView);
        actionAlignOnOriginTime->setObjectName(QStringLiteral("actionAlignOnOriginTime"));
        actionAlignOnOriginTime->setCheckable(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/icons/align_t.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAlignOnOriginTime->setIcon(icon5);
        actionDefaultView = new QAction(AmplitudeView);
        actionDefaultView->setObjectName(QStringLiteral("actionDefaultView"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/icons/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDefaultView->setIcon(icon6);
        actionSortAlphabetically = new QAction(AmplitudeView);
        actionSortAlphabetically->setObjectName(QStringLiteral("actionSortAlphabetically"));
        actionSortAlphabetically->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/icons/sort_abc.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortAlphabetically->setIcon(icon7);
        actionSortByDistance = new QAction(AmplitudeView);
        actionSortByDistance->setObjectName(QStringLiteral("actionSortByDistance"));
        actionSortByDistance->setCheckable(true);
        actionSortByDistance->setChecked(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/icons/sort_dist.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByDistance->setIcon(icon8);
        actionToggleFilter = new QAction(AmplitudeView);
        actionToggleFilter->setObjectName(QStringLiteral("actionToggleFilter"));
        actionToggleFilter->setCheckable(false);
        actionToggleFilter->setChecked(false);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/icons/filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionToggleFilter->setIcon(icon9);
        actionMaximizeAmplitudes = new QAction(AmplitudeView);
        actionMaximizeAmplitudes->setObjectName(QStringLiteral("actionMaximizeAmplitudes"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/icons/vmax.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMaximizeAmplitudes->setIcon(icon10);
        actionComputeMagnitudes = new QAction(AmplitudeView);
        actionComputeMagnitudes->setObjectName(QStringLiteral("actionComputeMagnitudes"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icons/icons/locate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComputeMagnitudes->setIcon(icon11);
        actionShowTheoreticalArrivals = new QAction(AmplitudeView);
        actionShowTheoreticalArrivals->setObjectName(QStringLiteral("actionShowTheoreticalArrivals"));
        actionShowTheoreticalArrivals->setCheckable(true);
        actionShowTheoreticalArrivals->setChecked(true);
        actionShowAllStations = new QAction(AmplitudeView);
        actionShowAllStations->setObjectName(QStringLiteral("actionShowAllStations"));
        actionShowAllStations->setCheckable(false);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icons/icons/mindistance.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowAllStations->setIcon(icon12);
        actionShowUsedStations = new QAction(AmplitudeView);
        actionShowUsedStations->setObjectName(QStringLiteral("actionShowUsedStations"));
        actionShowUsedStations->setCheckable(true);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icons/icons/withpick.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowUsedStations->setIcon(icon13);
        actionShowZComponent = new QAction(AmplitudeView);
        actionShowZComponent->setObjectName(QStringLiteral("actionShowZComponent"));
        actionShowZComponent->setCheckable(true);
        actionShowZComponent->setChecked(true);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icons/icons/channelZ.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowZComponent->setIcon(icon14);
        actionShowNComponent = new QAction(AmplitudeView);
        actionShowNComponent->setObjectName(QStringLiteral("actionShowNComponent"));
        actionShowNComponent->setCheckable(true);
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icons/icons/channelN.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowNComponent->setIcon(icon15);
        actionShowEComponent = new QAction(AmplitudeView);
        actionShowEComponent->setObjectName(QStringLiteral("actionShowEComponent"));
        actionShowEComponent->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icons/icons/channelE.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowEComponent->setIcon(icon16);
        actionGotoNextMarker = new QAction(AmplitudeView);
        actionGotoNextMarker->setObjectName(QStringLiteral("actionGotoNextMarker"));
        actionGotoPreviousMarker = new QAction(AmplitudeView);
        actionGotoPreviousMarker->setObjectName(QStringLiteral("actionGotoPreviousMarker"));
        actionSwitchFullscreen = new QAction(AmplitudeView);
        actionSwitchFullscreen->setObjectName(QStringLiteral("actionSwitchFullscreen"));
        actionSwitchFullscreen->setCheckable(true);
        actionAddStations = new QAction(AmplitudeView);
        actionAddStations->setObjectName(QStringLiteral("actionAddStations"));
        actionSearchStation = new QAction(AmplitudeView);
        actionSearchStation->setObjectName(QStringLiteral("actionSearchStation"));
        actionLimitFilterToZoomTrace = new QAction(AmplitudeView);
        actionLimitFilterToZoomTrace->setObjectName(QStringLiteral("actionLimitFilterToZoomTrace"));
        actionLimitFilterToZoomTrace->setCheckable(true);
        actionLimitFilterToZoomTrace->setEnabled(false);
        actionShowTraceValuesInNmS = new QAction(AmplitudeView);
        actionShowTraceValuesInNmS->setObjectName(QStringLiteral("actionShowTraceValuesInNmS"));
        actionShowTraceValuesInNmS->setCheckable(true);
        actionClipComponentsToViewport = new QAction(AmplitudeView);
        actionClipComponentsToViewport->setObjectName(QStringLiteral("actionClipComponentsToViewport"));
        actionClipComponentsToViewport->setCheckable(true);
        actionClipComponentsToViewport->setChecked(false);
        actionCreateAmplitude = new QAction(AmplitudeView);
        actionCreateAmplitude->setObjectName(QStringLiteral("actionCreateAmplitude"));
        actionConfirmAmplitude = new QAction(AmplitudeView);
        actionConfirmAmplitude->setObjectName(QStringLiteral("actionConfirmAmplitude"));
        actionDeleteAmplitude = new QAction(AmplitudeView);
        actionDeleteAmplitude->setObjectName(QStringLiteral("actionDeleteAmplitude"));
        actionDisablePicking = new QAction(AmplitudeView);
        actionDisablePicking->setObjectName(QStringLiteral("actionDisablePicking"));
        actionRecalculateAmplitudes = new QAction(AmplitudeView);
        actionRecalculateAmplitudes->setObjectName(QStringLiteral("actionRecalculateAmplitudes"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icons/icons/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecalculateAmplitudes->setIcon(icon17);
        actionPickAmplitude = new QAction(AmplitudeView);
        actionPickAmplitude->setObjectName(QStringLiteral("actionPickAmplitude"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icons/icons/pick_p.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPickAmplitude->setIcon(icon18);
        actionRecalculateAmplitude = new QAction(AmplitudeView);
        actionRecalculateAmplitude->setObjectName(QStringLiteral("actionRecalculateAmplitude"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/icons/icons/ok_single.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecalculateAmplitude->setIcon(icon19);
        actionSetAmplitude = new QAction(AmplitudeView);
        actionSetAmplitude->setObjectName(QStringLiteral("actionSetAmplitude"));
        actionResetScale = new QAction(AmplitudeView);
        actionResetScale->setObjectName(QStringLiteral("actionResetScale"));
        actionResetScale->setIcon(icon6);
        centralwidget = new QWidget(AmplitudeView);
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

        label_2 = new QLabel(frameCurrentRowLabel);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout1->addWidget(label_2);

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
        btnRowAccept->setIcon(icon17);
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
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/icons/icons/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowRemove->setIcon(icon20);
        btnRowRemove->setIconSize(QSize(24, 24));
        btnRowRemove->setCheckable(true);

        hboxLayout3->addWidget(btnRowRemove);

        btnRowReset = new QPushButton(frameZoomControls);
        btnRowReset->setObjectName(QStringLiteral("btnRowReset"));
        sizePolicy5.setHeightForWidth(btnRowReset->sizePolicy().hasHeightForWidth());
        btnRowReset->setSizePolicy(sizePolicy5);
        btnRowReset->setMinimumSize(QSize(32, 32));
        btnRowReset->setMaximumSize(QSize(32, 32));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/icons/icons/erase.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRowReset->setIcon(icon21);
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
        frameTraces = new QFrame(splitter);
        frameTraces->setObjectName(QStringLiteral("frameTraces"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(frameTraces->sizePolicy().hasHeightForWidth());
        frameTraces->setSizePolicy(sizePolicy6);
        frameTraces->setFrameShape(QFrame::StyledPanel);
        frameTraces->setFrameShadow(QFrame::Sunken);
        splitter->addWidget(frameTraces);

        vboxLayout->addWidget(splitter);

        AmplitudeView->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AmplitudeView);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AmplitudeView->setStatusBar(statusbar);
        toolBarScale = new QToolBar(AmplitudeView);
        toolBarScale->setObjectName(QStringLiteral("toolBarScale"));
        toolBarScale->setOrientation(Qt::Horizontal);
        toolBarScale->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarScale);
        toolBarSort = new QToolBar(AmplitudeView);
        toolBarSort->setObjectName(QStringLiteral("toolBarSort"));
        toolBarSort->setOrientation(Qt::Horizontal);
        toolBarSort->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarSort);
        toolBarAlign = new QToolBar(AmplitudeView);
        toolBarAlign->setObjectName(QStringLiteral("toolBarAlign"));
        toolBarAlign->setOrientation(Qt::Horizontal);
        toolBarAlign->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarAlign);
        toolBarComponent = new QToolBar(AmplitudeView);
        toolBarComponent->setObjectName(QStringLiteral("toolBarComponent"));
        toolBarComponent->setOrientation(Qt::Horizontal);
        toolBarComponent->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarComponent);
        toolBarStations = new QToolBar(AmplitudeView);
        toolBarStations->setObjectName(QStringLiteral("toolBarStations"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(toolBarStations->sizePolicy().hasHeightForWidth());
        toolBarStations->setSizePolicy(sizePolicy7);
        toolBarStations->setOrientation(Qt::Horizontal);
        toolBarStations->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarStations);
        toolBarPicking = new QToolBar(AmplitudeView);
        toolBarPicking->setObjectName(QStringLiteral("toolBarPicking"));
        toolBarPicking->setOrientation(Qt::Horizontal);
        toolBarPicking->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarPicking);
        menuBar = new QMenuBar(AmplitudeView);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 917, 38));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuZoomtrace = new QMenu(menuView);
        menuZoomtrace->setObjectName(QStringLiteral("menuZoomtrace"));
        menuTraces = new QMenu(menuView);
        menuTraces->setObjectName(QStringLiteral("menuTraces"));
        menuAlignArrival = new QMenu(menuTraces);
        menuAlignArrival->setObjectName(QStringLiteral("menuAlignArrival"));
        menuComponents = new QMenu(menuView);
        menuComponents->setObjectName(QStringLiteral("menuComponents"));
        menuNavigation = new QMenu(menuBar);
        menuNavigation->setObjectName(QStringLiteral("menuNavigation"));
        menuLocate = new QMenu(menuBar);
        menuLocate->setObjectName(QStringLiteral("menuLocate"));
        menuFilter = new QMenu(menuBar);
        menuFilter->setObjectName(QStringLiteral("menuFilter"));
        AmplitudeView->setMenuBar(menuBar);
        toolBarTTT = new QToolBar(AmplitudeView);
        toolBarTTT->setObjectName(QStringLiteral("toolBarTTT"));
        toolBarTTT->setOrientation(Qt::Horizontal);
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarTTT);
        toolBarFilter = new QToolBar(AmplitudeView);
        toolBarFilter->setObjectName(QStringLiteral("toolBarFilter"));
        toolBarFilter->setOrientation(Qt::Horizontal);
        toolBarFilter->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarFilter);
        toolBarSetup = new QToolBar(AmplitudeView);
        toolBarSetup->setObjectName(QStringLiteral("toolBarSetup"));
        toolBarSetup->setOrientation(Qt::Horizontal);
        toolBarSetup->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarSetup);
        toolBarComputeMagnitudes = new QToolBar(AmplitudeView);
        toolBarComputeMagnitudes->setObjectName(QStringLiteral("toolBarComputeMagnitudes"));
        toolBarComputeMagnitudes->setOrientation(Qt::Horizontal);
        toolBarComputeMagnitudes->setIconSize(QSize(24, 24));
        AmplitudeView->addToolBar(Qt::TopToolBarArea, toolBarComputeMagnitudes);

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
        toolBarSort->addAction(actionSortAlphabetically);
        toolBarAlign->addAction(actionAlignOnPArrival);
        toolBarAlign->addAction(actionAlignOnOriginTime);
        toolBarComponent->addAction(actionShowZComponent);
        toolBarComponent->addAction(actionShowNComponent);
        toolBarComponent->addAction(actionShowEComponent);
        toolBarStations->addAction(actionShowAllStations);
        toolBarStations->addAction(actionShowUsedStations);
        toolBarPicking->addAction(actionPickAmplitude);
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuNavigation->menuAction());
        menuBar->addAction(menuFilter->menuAction());
        menuBar->addAction(menuLocate->menuAction());
        menuView->addAction(actionDefaultView);
        menuView->addAction(actionShowUsedStations);
        menuView->addAction(actionShowTraceValuesInNmS);
        menuView->addAction(actionShowTheoreticalArrivals);
        menuView->addSeparator();
        menuView->addAction(menuZoomtrace->menuAction());
        menuView->addAction(menuTraces->menuAction());
        menuView->addAction(menuComponents->menuAction());
        menuZoomtrace->addAction(actionIncreaseAmplitudeScale);
        menuZoomtrace->addAction(actionDecreaseAmplitudeScale);
        menuZoomtrace->addAction(actionTimeScaleUp);
        menuZoomtrace->addAction(actionTimeScaleDown);
        menuZoomtrace->addAction(actionResetScale);
        menuZoomtrace->addSeparator();
        menuZoomtrace->addAction(actionClipComponentsToViewport);
        menuTraces->addAction(actionIncreaseRowHeight);
        menuTraces->addAction(actionDecreaseRowHeight);
        menuTraces->addAction(actionIncreaseRowTimescale);
        menuTraces->addAction(actionDecreaseRowTimescale);
        menuTraces->addAction(actionMaximizeAmplitudes);
        menuTraces->addSeparator();
        menuTraces->addAction(actionResetDefaultConfig);
        menuTraces->addSeparator();
        menuTraces->addAction(menuAlignArrival->menuAction());
        menuAlignArrival->addAction(actionAlignOnPArrival);
        menuAlignArrival->addAction(actionAlignOnOriginTime);
        menuComponents->addAction(actionShowZComponent);
        menuComponents->addAction(actionShowNComponent);
        menuComponents->addAction(actionShowEComponent);
        menuNavigation->addAction(actionScrollLeft);
        menuNavigation->addAction(actionScrollRight);
        menuNavigation->addAction(actionScrollFineLeft);
        menuNavigation->addAction(actionScrollFineRight);
        menuLocate->addAction(actionPickAmplitude);
        menuLocate->addAction(actionDisablePicking);
        menuLocate->addSeparator();
        menuLocate->addAction(actionComputeMagnitudes);
        menuFilter->addAction(actionToggleFilter);
        toolBarFilter->addAction(actionToggleFilter);
        toolBarSetup->addAction(actionRecalculateAmplitude);
        toolBarSetup->addAction(actionRecalculateAmplitudes);
        toolBarComputeMagnitudes->addAction(actionComputeMagnitudes);

        retranslateUi(AmplitudeView);

        QMetaObject::connectSlotsByName(AmplitudeView);
    } // setupUi

    void retranslateUi(QMainWindow *AmplitudeView)
    {
        AmplitudeView->setWindowTitle(QApplication::translate("AmplitudeView", "Amplitude picker", Q_NULLPTR));
        actionIncreaseAmplitudeScale->setText(QApplication::translate("AmplitudeView", "Scale amplitudes up", Q_NULLPTR));
        actionIncreaseAmplitudeScale->setIconText(QApplication::translate("AmplitudeView", "Scale amplitudes up", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionIncreaseAmplitudeScale->setToolTip(QApplication::translate("AmplitudeView", "Increase amplitude scale of current trace", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionIncreaseAmplitudeScale->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDecreaseAmplitudeScale->setText(QApplication::translate("AmplitudeView", "Scale amplitudes down", Q_NULLPTR));
        actionDecreaseAmplitudeScale->setIconText(QApplication::translate("AmplitudeView", "Scale amplitudes down", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDecreaseAmplitudeScale->setToolTip(QApplication::translate("AmplitudeView", "Descrease amplitude scale of current trace", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDecreaseAmplitudeScale->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionTimeScaleUp->setText(QApplication::translate("AmplitudeView", "Increase visible timespan", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleUp->setToolTip(QApplication::translate("AmplitudeView", "Increase visible timespan", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionTimeScaleUp->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionTimeScaleDown->setText(QApplication::translate("AmplitudeView", "Decrease visible timespan", Q_NULLPTR));
        actionTimeScaleDown->setIconText(QApplication::translate("AmplitudeView", "Decrease visible timespan", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTimeScaleDown->setToolTip(QApplication::translate("AmplitudeView", "Decrease visible timespan", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionTimeScaleDown->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollLeft->setText(QApplication::translate("AmplitudeView", "Scroll left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollLeft->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace left", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollLeft->setShortcut(QApplication::translate("AmplitudeView", "Shift+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollRight->setText(QApplication::translate("AmplitudeView", "Scroll right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollRight->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace right", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollRight->setShortcut(QApplication::translate("AmplitudeView", "Shift+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectNextTrace->setText(QApplication::translate("AmplitudeView", "Next trace", Q_NULLPTR));
        actionSelectNextTrace->setIconText(QApplication::translate("AmplitudeView", "Next trace", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectNextTrace->setShortcut(QApplication::translate("AmplitudeView", "Down", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectPreviousTrace->setText(QApplication::translate("AmplitudeView", "Previous trace", Q_NULLPTR));
        actionSelectPreviousTrace->setIconText(QApplication::translate("AmplitudeView", "Previous trace", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectPreviousTrace->setShortcut(QApplication::translate("AmplitudeView", "Up", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollFineLeft->setText(QApplication::translate("AmplitudeView", "Scroll fine left", Q_NULLPTR));
        actionScrollFineLeft->setIconText(QApplication::translate("AmplitudeView", "Scroll fine left", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollFineLeft->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace left with finer steps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollFineLeft->setShortcut(QApplication::translate("AmplitudeView", "Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionScrollFineRight->setText(QApplication::translate("AmplitudeView", "Scroll fine right", Q_NULLPTR));
        actionScrollFineRight->setIconText(QApplication::translate("AmplitudeView", "Scroll fine right", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionScrollFineRight->setToolTip(QApplication::translate("AmplitudeView", "Scroll current trace right with finer steps", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionScrollFineRight->setShortcut(QApplication::translate("AmplitudeView", "Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionIncreaseRowHeight->setText(QApplication::translate("AmplitudeView", "Increase row height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowHeight->setToolTip(QApplication::translate("AmplitudeView", "Increases the row height in traceview (Shift+Y)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionIncreaseRowHeight->setShortcut(QApplication::translate("AmplitudeView", "Shift+Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDecreaseRowHeight->setText(QApplication::translate("AmplitudeView", "Decrease row height", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowHeight->setToolTip(QApplication::translate("AmplitudeView", "Decreases the row height in traceview (Y)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDecreaseRowHeight->setShortcut(QApplication::translate("AmplitudeView", "Y", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionIncreaseRowTimescale->setText(QApplication::translate("AmplitudeView", "Increase row timescale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionIncreaseRowTimescale->setToolTip(QApplication::translate("AmplitudeView", "Increases the timescale in traceview (>)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionIncreaseRowTimescale->setShortcut(QApplication::translate("AmplitudeView", ">", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDecreaseRowTimescale->setText(QApplication::translate("AmplitudeView", "Decrease row timescale", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDecreaseRowTimescale->setToolTip(QApplication::translate("AmplitudeView", "Decreases the timescale in traceview (<)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDecreaseRowTimescale->setShortcut(QApplication::translate("AmplitudeView", "<", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectFirstRow->setText(QApplication::translate("AmplitudeView", "Select first row", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectFirstRow->setShortcut(QApplication::translate("AmplitudeView", "Home", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSelectLastRow->setText(QApplication::translate("AmplitudeView", "Select last row", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSelectLastRow->setShortcut(QApplication::translate("AmplitudeView", "End", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionResetDefaultConfig->setText(QApplication::translate("AmplitudeView", "Reset default time windows", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionResetDefaultConfig->setShortcut(QApplication::translate("AmplitudeView", "Shift+W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAlignOnPArrival->setText(QApplication::translate("AmplitudeView", "Align on trigger time", Q_NULLPTR));
        actionAlignOnPArrival->setIconText(QApplication::translate("AmplitudeView", "Align on trigger time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAlignOnPArrival->setToolTip(QApplication::translate("AmplitudeView", "Align on trigger time", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAlignOnPArrival->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAlignOnOriginTime->setText(QApplication::translate("AmplitudeView", "Align on origin time", Q_NULLPTR));
        actionAlignOnOriginTime->setIconText(QApplication::translate("AmplitudeView", "Align on origin time", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAlignOnOriginTime->setToolTip(QApplication::translate("AmplitudeView", "Align on origin time (Ctrl+0)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAlignOnOriginTime->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+0", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDefaultView->setText(QApplication::translate("AmplitudeView", "&Default view", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDefaultView->setToolTip(QApplication::translate("AmplitudeView", "Default view (Shift+N)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDefaultView->setShortcut(QApplication::translate("AmplitudeView", "Shift+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSortAlphabetically->setText(QApplication::translate("AmplitudeView", "Sort by names", Q_NULLPTR));
        actionSortAlphabetically->setIconText(QApplication::translate("AmplitudeView", "Sort by names", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSortAlphabetically->setToolTip(QApplication::translate("AmplitudeView", "Sorts the traces by name (Alt+A)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSortAlphabetically->setShortcut(QApplication::translate("AmplitudeView", "Alt+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSortByDistance->setText(QApplication::translate("AmplitudeView", "Sort by distance", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSortByDistance->setToolTip(QApplication::translate("AmplitudeView", "Sort by distance (Alt+D)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSortByDistance->setShortcut(QApplication::translate("AmplitudeView", "Alt+D", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionToggleFilter->setText(QApplication::translate("AmplitudeView", "&Toggle filter", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionToggleFilter->setToolTip(QApplication::translate("AmplitudeView", "Toggles using a filter before displaying the traces (F)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionToggleFilter->setShortcut(QApplication::translate("AmplitudeView", "F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionMaximizeAmplitudes->setText(QApplication::translate("AmplitudeView", "Maximize visible amplitudes", Q_NULLPTR));
        actionMaximizeAmplitudes->setIconText(QApplication::translate("AmplitudeView", "Maximize visible amplitudes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMaximizeAmplitudes->setToolTip(QApplication::translate("AmplitudeView", "Maximize visible amplitudes (S)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionMaximizeAmplitudes->setShortcut(QApplication::translate("AmplitudeView", "S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionComputeMagnitudes->setText(QApplication::translate("AmplitudeView", "&Apply", Q_NULLPTR));
        actionComputeMagnitudes->setIconText(QApplication::translate("AmplitudeView", "Apply", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionComputeMagnitudes->setToolTip(QApplication::translate("AmplitudeView", "Compute the magnitude and update it in the origin.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionComputeMagnitudes->setStatusTip(QApplication::translate("AmplitudeView", "Compute the magnitude and update it in the origin.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionComputeMagnitudes->setShortcut(QApplication::translate("AmplitudeView", "F5", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowTheoreticalArrivals->setText(QApplication::translate("AmplitudeView", "Show theoretical arrivals", Q_NULLPTR));
        actionShowTheoreticalArrivals->setIconText(QApplication::translate("AmplitudeView", "Show theoretical arrivals", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowTheoreticalArrivals->setToolTip(QApplication::translate("AmplitudeView", "Shows theoretical arrivals as blue bars in the traces", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowTheoreticalArrivals->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+T", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowAllStations->setText(QApplication::translate("AmplitudeView", "Add stations in range", Q_NULLPTR));
        actionShowAllStations->setIconText(QApplication::translate("AmplitudeView", "Add stations in range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowAllStations->setToolTip(QApplication::translate("AmplitudeView", "Adds all stations next to the origin with distance lower or equal than the entered value that haven't triggered. When view mode is \"used stations only\" you won't see the new stations until leaving this mode.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowUsedStations->setText(QApplication::translate("AmplitudeView", "&Show used stations only", Q_NULLPTR));
        actionShowUsedStations->setIconText(QApplication::translate("AmplitudeView", "Used stations only", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowUsedStations->setToolTip(QApplication::translate("AmplitudeView", "Toggles between hiding unpicked and deactivated stations and showing all stations", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowZComponent->setText(QApplication::translate("AmplitudeView", "Vertical", Q_NULLPTR));
        actionShowZComponent->setIconText(QApplication::translate("AmplitudeView", "Vertical", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowZComponent->setToolTip(QApplication::translate("AmplitudeView", "Show Vertical Component (Z)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowZComponent->setShortcut(QApplication::translate("AmplitudeView", "Z", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowNComponent->setText(QApplication::translate("AmplitudeView", "North", Q_NULLPTR));
        actionShowNComponent->setIconText(QApplication::translate("AmplitudeView", "North", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowNComponent->setToolTip(QApplication::translate("AmplitudeView", "Show North Component (N)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowNComponent->setShortcut(QApplication::translate("AmplitudeView", "N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowEComponent->setText(QApplication::translate("AmplitudeView", "East", Q_NULLPTR));
        actionShowEComponent->setIconText(QApplication::translate("AmplitudeView", "East", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionShowEComponent->setToolTip(QApplication::translate("AmplitudeView", "Show East Component (E)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowEComponent->setShortcut(QApplication::translate("AmplitudeView", "E", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGotoNextMarker->setText(QApplication::translate("AmplitudeView", "Goto next marker", Q_NULLPTR));
        actionGotoNextMarker->setIconText(QApplication::translate("AmplitudeView", "Goto next marker", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionGotoNextMarker->setToolTip(QApplication::translate("AmplitudeView", "Goto next marker", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGotoNextMarker->setShortcut(QApplication::translate("AmplitudeView", "Alt+Right", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionGotoPreviousMarker->setText(QApplication::translate("AmplitudeView", "Goto previous marker", Q_NULLPTR));
        actionGotoPreviousMarker->setIconText(QApplication::translate("AmplitudeView", "Goto previous marker", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionGotoPreviousMarker->setToolTip(QApplication::translate("AmplitudeView", "Goto previous marker", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGotoPreviousMarker->setShortcut(QApplication::translate("AmplitudeView", "Alt+Left", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSwitchFullscreen->setText(QApplication::translate("AmplitudeView", "Toggle fullscreen", Q_NULLPTR));
        actionSwitchFullscreen->setIconText(QApplication::translate("AmplitudeView", "Toggle fullscreen", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSwitchFullscreen->setToolTip(QApplication::translate("AmplitudeView", "Toggle fullscreen", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSwitchFullscreen->setShortcut(QApplication::translate("AmplitudeView", "F11", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAddStations->setText(QApplication::translate("AmplitudeView", "Add stations", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionAddStations->setShortcut(QApplication::translate("AmplitudeView", "F3", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSearchStation->setText(QApplication::translate("AmplitudeView", "Search station", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSearchStation->setShortcut(QApplication::translate("AmplitudeView", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionLimitFilterToZoomTrace->setText(QApplication::translate("AmplitudeView", "&Limit filter to zoom trace", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionLimitFilterToZoomTrace->setToolTip(QApplication::translate("AmplitudeView", "Limit filter to zoom trace", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLimitFilterToZoomTrace->setStatusTip(QApplication::translate("AmplitudeView", "Limits filtering to zoom trace. All other traces are not filtered. This is mostly used to gain performance.", Q_NULLPTR));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionLimitFilterToZoomTrace->setShortcut(QApplication::translate("AmplitudeView", "Shift+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionShowTraceValuesInNmS->setText(QApplication::translate("AmplitudeView", "Show trace values in nm/s", Q_NULLPTR));
        actionClipComponentsToViewport->setText(QApplication::translate("AmplitudeView", "Clip components to viewport", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionClipComponentsToViewport->setShortcut(QApplication::translate("AmplitudeView", "C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCreateAmplitude->setText(QApplication::translate("AmplitudeView", "Create amplitude", Q_NULLPTR));
        actionCreateAmplitude->setIconText(QApplication::translate("AmplitudeView", "Create amplitude", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCreateAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Create amplitude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCreateAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Enter", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionConfirmAmplitude->setText(QApplication::translate("AmplitudeView", "Confirm amplitude", Q_NULLPTR));
        actionConfirmAmplitude->setIconText(QApplication::translate("AmplitudeView", "Confirm amplitude", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionConfirmAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Confirm amplitude", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionConfirmAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Shift+Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDeleteAmplitude->setText(QApplication::translate("AmplitudeView", "Delete amplitude", Q_NULLPTR));
        actionDeleteAmplitude->setIconText(QApplication::translate("AmplitudeView", "Delete amplitude", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDeleteAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Delete amplitude (Del)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDeleteAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Del", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionDisablePicking->setText(QApplication::translate("AmplitudeView", "Leave picking mode", Q_NULLPTR));
        actionDisablePicking->setIconText(QApplication::translate("AmplitudeView", "Leave picking mode", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDisablePicking->setToolTip(QApplication::translate("AmplitudeView", "Leave picking mode (Esc)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionDisablePicking->setShortcut(QApplication::translate("AmplitudeView", "Esc", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRecalculateAmplitudes->setText(QApplication::translate("AmplitudeView", "Remeasure all amplitudes", Q_NULLPTR));
        actionRecalculateAmplitudes->setIconText(QApplication::translate("AmplitudeView", "Remeasure all amplitudes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRecalculateAmplitudes->setToolTip(QApplication::translate("AmplitudeView", "Remeasure all amplitudes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRecalculateAmplitudes->setShortcut(QApplication::translate("AmplitudeView", "Shift+R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPickAmplitude->setText(QApplication::translate("AmplitudeView", "Pick amplitudes", Q_NULLPTR));
        actionPickAmplitude->setIconText(QApplication::translate("AmplitudeView", "Pick amplitudes", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPickAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Drag time window for measuring amplitudes", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPickAmplitude->setShortcut(QApplication::translate("AmplitudeView", "1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionRecalculateAmplitude->setText(QApplication::translate("AmplitudeView", "Remeasure amplitude of selected waveform", Q_NULLPTR));
        actionRecalculateAmplitude->setIconText(QApplication::translate("AmplitudeView", "Remeasure amplitude of selected waveform", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionRecalculateAmplitude->setToolTip(QApplication::translate("AmplitudeView", "Remeasure amplitude of selected waveform", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionRecalculateAmplitude->setShortcut(QApplication::translate("AmplitudeView", "R", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSetAmplitude->setText(QApplication::translate("AmplitudeView", "Set amplitude", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionSetAmplitude->setShortcut(QApplication::translate("AmplitudeView", "Space", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionResetScale->setText(QApplication::translate("AmplitudeView", "Reset Scale", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionResetScale->setShortcut(QApplication::translate("AmplitudeView", "W", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        labelStationCode->setText(QApplication::translate("AmplitudeView", "ABCD", Q_NULLPTR));
        labelCode->setText(QApplication::translate("AmplitudeView", "AB  BHZ", Q_NULLPTR));
        label->setText(QApplication::translate("AmplitudeView", ", distance: ", Q_NULLPTR));
        labelDistance->setText(QApplication::translate("AmplitudeView", "-1\302\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("AmplitudeView", ", azimuth: ", Q_NULLPTR));
        labelAzimuth->setText(QApplication::translate("AmplitudeView", "-1\302\260", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRowAccept->setToolTip(QApplication::translate("AmplitudeView", "Accept picked phase", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRowAccept->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRowRemove->setToolTip(QApplication::translate("AmplitudeView", "Deactivate current pick or trace depending on the picking mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRowRemove->setText(QString());
#ifndef QT_NO_SHORTCUT
        btnRowRemove->setShortcut(QApplication::translate("AmplitudeView", "X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        btnRowReset->setToolTip(QApplication::translate("AmplitudeView", "Reset manual picks", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRowReset->setText(QString());
        toolBarScale->setWindowTitle(QApplication::translate("AmplitudeView", "Zooming", Q_NULLPTR));
        toolBarSort->setWindowTitle(QApplication::translate("AmplitudeView", "Sort", Q_NULLPTR));
        toolBarAlign->setWindowTitle(QApplication::translate("AmplitudeView", "Alignment", Q_NULLPTR));
        toolBarComponent->setWindowTitle(QApplication::translate("AmplitudeView", "Components", Q_NULLPTR));
        toolBarStations->setWindowTitle(QApplication::translate("AmplitudeView", "Add stations", Q_NULLPTR));
        toolBarPicking->setWindowTitle(QApplication::translate("AmplitudeView", "Picking", Q_NULLPTR));
        menuView->setTitle(QApplication::translate("AmplitudeView", "&View", Q_NULLPTR));
        menuZoomtrace->setTitle(QApplication::translate("AmplitudeView", "&Zoomtrace", Q_NULLPTR));
        menuTraces->setTitle(QApplication::translate("AmplitudeView", "&Traces", Q_NULLPTR));
        menuAlignArrival->setTitle(QApplication::translate("AmplitudeView", "Align", Q_NULLPTR));
        menuComponents->setTitle(QApplication::translate("AmplitudeView", "&Components", Q_NULLPTR));
        menuNavigation->setTitle(QApplication::translate("AmplitudeView", "&Navigation", Q_NULLPTR));
        menuLocate->setTitle(QApplication::translate("AmplitudeView", "&Amplitudes", Q_NULLPTR));
        menuFilter->setTitle(QApplication::translate("AmplitudeView", "&Filter", Q_NULLPTR));
        toolBarTTT->setWindowTitle(QApplication::translate("AmplitudeView", "Travel times", Q_NULLPTR));
        toolBarSetup->setWindowTitle(QApplication::translate("AmplitudeView", "Calculate", Q_NULLPTR));
        toolBarComputeMagnitudes->setWindowTitle(QApplication::translate("AmplitudeView", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AmplitudeView: public Ui_AmplitudeView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMPLITUDEVIEW_H
