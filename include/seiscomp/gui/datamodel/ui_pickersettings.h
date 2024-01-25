/********************************************************************************
** Form generated from reading UI file 'pickersettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICKERSETTINGS_H
#define UI_PICKERSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PickerSettings
{
public:
    QVBoxLayout *vboxLayout;
    QToolBox *toolBox;
    QWidget *pageLocator;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *label_4;
    QDoubleSpinBox *spinPVel;
    QLabel *label_6;
    QSpacerItem *spacerItem;
    QFrame *line_2;
    QCheckBox *cbComputeMagnitudesAfterRelocate;
    QHBoxLayout *hboxLayout1;
    QCheckBox *cbComputeMagnitudesSilently;
    QCheckBox *cbAskForMagnitudeTypes;
    QCheckBox *cbComputeMissingTakeOffAngles;
    QCheckBox *cbMaplines;
    QCheckBox *cbPlotGridlines;
    QFrame *line_4;
    QHBoxLayout *hboxLayout2;
    QLabel *label_5;
    QLineEdit *editRecordSource;
    QHBoxLayout *hboxLayout3;
    QLabel *label_9;
    QDoubleSpinBox *spinAddStationsDistance;
    QLabel *labelDefaultDistanceUnit;
    QSpacerItem *spacerItem1;
    QCheckBox *cbHideStationsWithoutData;
    QCheckBox *cbHideDisabledStations;
    QCheckBox *cbIgnoreDisabledStations;
    QSpacerItem *spacerItem2;
    QWidget *pagePickSettings;
    QVBoxLayout *vboxLayout2;
    QCheckBox *cbShowCrossHair;
    QHBoxLayout *hboxLayout4;
    QLabel *labelPickUncertainties;
    QComboBox *listPickUncertainties;
    QSpacerItem *spacerItem3;
    QFrame *line_5;
    QVBoxLayout *vboxLayout3;
    QCheckBox *cbIgnoreUnconfiguredStations;
    QCheckBox *cbAllComponents;
    QCheckBox *cbLoadAllPicks;
    QCheckBox *cbStrongMotion;
    QHBoxLayout *hboxLayout5;
    QCheckBox *cbLimitStationCount;
    QSpinBox *spinLimitStationCount;
    QLabel *labelLimitStations;
    QSpacerItem *spacerItem4;
    QCheckBox *cbShowAllComponents;
    QFrame *frameMaximumDistance;
    QHBoxLayout *hboxLayout6;
    QSpacerItem *spacerItem5;
    QLabel *label_7;
    QDoubleSpinBox *maximumDistanceEdit;
    QLabel *label_8;
    QSpacerItem *spacerItem6;
    QCheckBox *cbRemoveAllAutomaticStationPicks;
    QLabel *labelRemoveStationPicksInfo;
    QCheckBox *cbRemoveAllAutomaticPicks;
    QLabel *labelRemoveAllPicksInfo;
    QFrame *line_3;
    QLabel *label_10;
    QHBoxLayout *hboxLayout7;
    QCheckBox *cbRepickerStart;
    QSpacerItem *spacerItem7;
    QDoubleSpinBox *editRepickerStart;
    QHBoxLayout *hboxLayout8;
    QCheckBox *cbRepickerEnd;
    QSpacerItem *spacerItem8;
    QDoubleSpinBox *editRepickerEnd;
    QFrame *line_6;
    QVBoxLayout *vboxLayout4;
    QCheckBox *cbUsePerStreamTimeWindow;
    QLabel *label;
    QHBoxLayout *hboxLayout9;
    QSlider *slPreOffset;
    QTimeEdit *preTimeEdit;
    QLabel *label_2;
    QHBoxLayout *hboxLayout10;
    QSlider *slPostOffset;
    QTimeEdit *postTimeEdit;
    QLabel *label_3;
    QHBoxLayout *hboxLayout11;
    QSlider *slMinimumLength;
    QTimeEdit *minimumLengthTimeEdit;
    QLabel *label_13;
    QHBoxLayout *hboxLayout12;
    QSlider *slWaveformAlignment;
    QSpinBox *waveformAlignmentEdit;
    QSpacerItem *spacerItem9;
    QWidget *pagePickFilters;
    QVBoxLayout *vboxLayout5;
    QHBoxLayout *hboxLayout13;
    QTableView *tableFilter;
    QVBoxLayout *vboxLayout6;
    QPushButton *btnAddPickFilter;
    QPushButton *btnRemovePickFilter;
    QSpacerItem *spacerItem10;
    QPushButton *btnMovePickFilterUp;
    QPushButton *btnMovePickFilterDown;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_15;
    QCheckBox *checkIntegrationPreFilterOnce;
    QLabel *label_14;
    QLineEdit *editIntegrationPreFilter;
    QWidget *pageAmplitudeSettings;
    QVBoxLayout *vboxLayout7;
    QLabel *label_11;
    QHBoxLayout *hboxLayout14;
    QSpacerItem *spacerItem11;
    QSlider *slAmplitudePreOffset;
    QTimeEdit *preAmplitudeTimeEdit;
    QLabel *label_12;
    QHBoxLayout *hboxLayout15;
    QSpacerItem *spacerItem12;
    QSlider *slAmplitudePostOffset;
    QTimeEdit *postAmplitudeTimeEdit;
    QSpacerItem *spacerItem13;
    QWidget *pageAmplitudeFilters;
    QHBoxLayout *hboxLayout16;
    QTableView *tableAFilter;
    QVBoxLayout *vboxLayout8;
    QPushButton *btnAddAmplitudeFilter;
    QPushButton *btnRemoveAmplitudeFilter;
    QSpacerItem *spacerItem14;
    QPushButton *btnMoveAmplitudeFilterUp;
    QPushButton *btnMoveAmplitudeFilterDown;
    QHBoxLayout *hboxLayout17;
    QPushButton *saveButton;
    QSpacerItem *spacerItem15;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *PickerSettings)
    {
        if (PickerSettings->objectName().isEmpty())
            PickerSettings->setObjectName(QStringLiteral("PickerSettings"));
        PickerSettings->resize(571, 771);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(4));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PickerSettings->sizePolicy().hasHeightForWidth());
        PickerSettings->setSizePolicy(sizePolicy);
        vboxLayout = new QVBoxLayout(PickerSettings);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        toolBox = new QToolBox(PickerSettings);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        pageLocator = new QWidget();
        pageLocator->setObjectName(QStringLiteral("pageLocator"));
        pageLocator->setGeometry(QRect(0, 0, 553, 543));
        pageLocator->setAutoFillBackground(true);
        vboxLayout1 = new QVBoxLayout(pageLocator);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label_4 = new QLabel(pageLocator);
        label_4->setObjectName(QStringLiteral("label_4"));

        hboxLayout->addWidget(label_4);

        spinPVel = new QDoubleSpinBox(pageLocator);
        spinPVel->setObjectName(QStringLiteral("spinPVel"));
        spinPVel->setMinimum(0.1);
        spinPVel->setSingleStep(0.5);
        spinPVel->setValue(6);

        hboxLayout->addWidget(spinPVel);

        label_6 = new QLabel(pageLocator);
        label_6->setObjectName(QStringLiteral("label_6"));

        hboxLayout->addWidget(label_6);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        vboxLayout1->addLayout(hboxLayout);

        line_2 = new QFrame(pageLocator);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_2);

        cbComputeMagnitudesAfterRelocate = new QCheckBox(pageLocator);
        cbComputeMagnitudesAfterRelocate->setObjectName(QStringLiteral("cbComputeMagnitudesAfterRelocate"));

        vboxLayout1->addWidget(cbComputeMagnitudesAfterRelocate);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        cbComputeMagnitudesSilently = new QCheckBox(pageLocator);
        cbComputeMagnitudesSilently->setObjectName(QStringLiteral("cbComputeMagnitudesSilently"));

        hboxLayout1->addWidget(cbComputeMagnitudesSilently);


        vboxLayout1->addLayout(hboxLayout1);

        cbAskForMagnitudeTypes = new QCheckBox(pageLocator);
        cbAskForMagnitudeTypes->setObjectName(QStringLiteral("cbAskForMagnitudeTypes"));

        vboxLayout1->addWidget(cbAskForMagnitudeTypes);

        cbComputeMissingTakeOffAngles = new QCheckBox(pageLocator);
        cbComputeMissingTakeOffAngles->setObjectName(QStringLiteral("cbComputeMissingTakeOffAngles"));

        vboxLayout1->addWidget(cbComputeMissingTakeOffAngles);

        cbMaplines = new QCheckBox(pageLocator);
        cbMaplines->setObjectName(QStringLiteral("cbMaplines"));

        vboxLayout1->addWidget(cbMaplines);

        cbPlotGridlines = new QCheckBox(pageLocator);
        cbPlotGridlines->setObjectName(QStringLiteral("cbPlotGridlines"));

        vboxLayout1->addWidget(cbPlotGridlines);

        line_4 = new QFrame(pageLocator);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_4);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        label_5 = new QLabel(pageLocator);
        label_5->setObjectName(QStringLiteral("label_5"));

        hboxLayout2->addWidget(label_5);

        editRecordSource = new QLineEdit(pageLocator);
        editRecordSource->setObjectName(QStringLiteral("editRecordSource"));

        hboxLayout2->addWidget(editRecordSource);


        vboxLayout1->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        label_9 = new QLabel(pageLocator);
        label_9->setObjectName(QStringLiteral("label_9"));

        hboxLayout3->addWidget(label_9);

        spinAddStationsDistance = new QDoubleSpinBox(pageLocator);
        spinAddStationsDistance->setObjectName(QStringLiteral("spinAddStationsDistance"));
        spinAddStationsDistance->setMaximum(180);
        spinAddStationsDistance->setValue(15);

        hboxLayout3->addWidget(spinAddStationsDistance);

        labelDefaultDistanceUnit = new QLabel(pageLocator);
        labelDefaultDistanceUnit->setObjectName(QStringLiteral("labelDefaultDistanceUnit"));

        hboxLayout3->addWidget(labelDefaultDistanceUnit);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem1);


        vboxLayout1->addLayout(hboxLayout3);

        cbHideStationsWithoutData = new QCheckBox(pageLocator);
        cbHideStationsWithoutData->setObjectName(QStringLiteral("cbHideStationsWithoutData"));

        vboxLayout1->addWidget(cbHideStationsWithoutData);

        cbHideDisabledStations = new QCheckBox(pageLocator);
        cbHideDisabledStations->setObjectName(QStringLiteral("cbHideDisabledStations"));

        vboxLayout1->addWidget(cbHideDisabledStations);

        cbIgnoreDisabledStations = new QCheckBox(pageLocator);
        cbIgnoreDisabledStations->setObjectName(QStringLiteral("cbIgnoreDisabledStations"));

        vboxLayout1->addWidget(cbIgnoreDisabledStations);

        spacerItem2 = new QSpacerItem(20, 71, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem2);

        toolBox->addItem(pageLocator, QStringLiteral("Global settings"));
        pagePickSettings = new QWidget();
        pagePickSettings->setObjectName(QStringLiteral("pagePickSettings"));
        pagePickSettings->setGeometry(QRect(0, 0, 96, 26));
        pagePickSettings->setAutoFillBackground(true);
        vboxLayout2 = new QVBoxLayout(pagePickSettings);
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        cbShowCrossHair = new QCheckBox(pagePickSettings);
        cbShowCrossHair->setObjectName(QStringLiteral("cbShowCrossHair"));

        vboxLayout2->addWidget(cbShowCrossHair);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        labelPickUncertainties = new QLabel(pagePickSettings);
        labelPickUncertainties->setObjectName(QStringLiteral("labelPickUncertainties"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPickUncertainties->sizePolicy().hasHeightForWidth());
        labelPickUncertainties->setSizePolicy(sizePolicy1);

        hboxLayout4->addWidget(labelPickUncertainties);

        listPickUncertainties = new QComboBox(pagePickSettings);
        listPickUncertainties->setObjectName(QStringLiteral("listPickUncertainties"));

        hboxLayout4->addWidget(listPickUncertainties);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem3);


        vboxLayout2->addLayout(hboxLayout4);

        line_5 = new QFrame(pagePickSettings);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        vboxLayout2->addWidget(line_5);

        vboxLayout3 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout3->setSpacing(6);
#endif
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        cbIgnoreUnconfiguredStations = new QCheckBox(pagePickSettings);
        cbIgnoreUnconfiguredStations->setObjectName(QStringLiteral("cbIgnoreUnconfiguredStations"));

        vboxLayout3->addWidget(cbIgnoreUnconfiguredStations);

        cbAllComponents = new QCheckBox(pagePickSettings);
        cbAllComponents->setObjectName(QStringLiteral("cbAllComponents"));

        vboxLayout3->addWidget(cbAllComponents);

        cbLoadAllPicks = new QCheckBox(pagePickSettings);
        cbLoadAllPicks->setObjectName(QStringLiteral("cbLoadAllPicks"));

        vboxLayout3->addWidget(cbLoadAllPicks);

        cbStrongMotion = new QCheckBox(pagePickSettings);
        cbStrongMotion->setObjectName(QStringLiteral("cbStrongMotion"));

        vboxLayout3->addWidget(cbStrongMotion);

        hboxLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        cbLimitStationCount = new QCheckBox(pagePickSettings);
        cbLimitStationCount->setObjectName(QStringLiteral("cbLimitStationCount"));

        hboxLayout5->addWidget(cbLimitStationCount);

        spinLimitStationCount = new QSpinBox(pagePickSettings);
        spinLimitStationCount->setObjectName(QStringLiteral("spinLimitStationCount"));
        spinLimitStationCount->setMaximum(1000000);
        spinLimitStationCount->setValue(10);

        hboxLayout5->addWidget(spinLimitStationCount);

        labelLimitStations = new QLabel(pagePickSettings);
        labelLimitStations->setObjectName(QStringLiteral("labelLimitStations"));

        hboxLayout5->addWidget(labelLimitStations);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem4);


        vboxLayout3->addLayout(hboxLayout5);

        cbShowAllComponents = new QCheckBox(pagePickSettings);
        cbShowAllComponents->setObjectName(QStringLiteral("cbShowAllComponents"));

        vboxLayout3->addWidget(cbShowAllComponents);

        frameMaximumDistance = new QFrame(pagePickSettings);
        frameMaximumDistance->setObjectName(QStringLiteral("frameMaximumDistance"));
        frameMaximumDistance->setFrameShape(QFrame::NoFrame);
        frameMaximumDistance->setFrameShadow(QFrame::Raised);
        hboxLayout6 = new QHBoxLayout(frameMaximumDistance);
#ifndef Q_OS_MAC
        hboxLayout6->setSpacing(6);
#endif
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        spacerItem5 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem5);

        label_7 = new QLabel(frameMaximumDistance);
        label_7->setObjectName(QStringLiteral("label_7"));

        hboxLayout6->addWidget(label_7);

        maximumDistanceEdit = new QDoubleSpinBox(frameMaximumDistance);
        maximumDistanceEdit->setObjectName(QStringLiteral("maximumDistanceEdit"));
        maximumDistanceEdit->setMaximum(360);
        maximumDistanceEdit->setValue(10);

        hboxLayout6->addWidget(maximumDistanceEdit);

        label_8 = new QLabel(frameMaximumDistance);
        label_8->setObjectName(QStringLiteral("label_8"));

        hboxLayout6->addWidget(label_8);

        spacerItem6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout6->addItem(spacerItem6);


        vboxLayout3->addWidget(frameMaximumDistance);

        cbRemoveAllAutomaticStationPicks = new QCheckBox(pagePickSettings);
        cbRemoveAllAutomaticStationPicks->setObjectName(QStringLiteral("cbRemoveAllAutomaticStationPicks"));

        vboxLayout3->addWidget(cbRemoveAllAutomaticStationPicks);

        labelRemoveStationPicksInfo = new QLabel(pagePickSettings);
        labelRemoveStationPicksInfo->setObjectName(QStringLiteral("labelRemoveStationPicksInfo"));
        labelRemoveStationPicksInfo->setWordWrap(true);
        labelRemoveStationPicksInfo->setIndent(20);

        vboxLayout3->addWidget(labelRemoveStationPicksInfo);

        cbRemoveAllAutomaticPicks = new QCheckBox(pagePickSettings);
        cbRemoveAllAutomaticPicks->setObjectName(QStringLiteral("cbRemoveAllAutomaticPicks"));

        vboxLayout3->addWidget(cbRemoveAllAutomaticPicks);

        labelRemoveAllPicksInfo = new QLabel(pagePickSettings);
        labelRemoveAllPicksInfo->setObjectName(QStringLiteral("labelRemoveAllPicksInfo"));
        labelRemoveAllPicksInfo->setWordWrap(true);
        labelRemoveAllPicksInfo->setIndent(20);

        vboxLayout3->addWidget(labelRemoveAllPicksInfo);


        vboxLayout2->addLayout(vboxLayout3);

        line_3 = new QFrame(pagePickSettings);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout2->addWidget(line_3);

        label_10 = new QLabel(pagePickSettings);
        label_10->setObjectName(QStringLiteral("label_10"));

        vboxLayout2->addWidget(label_10);

        hboxLayout7 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout7->setSpacing(6);
#endif
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        cbRepickerStart = new QCheckBox(pagePickSettings);
        cbRepickerStart->setObjectName(QStringLiteral("cbRepickerStart"));

        hboxLayout7->addWidget(cbRepickerStart);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout7->addItem(spacerItem7);

        editRepickerStart = new QDoubleSpinBox(pagePickSettings);
        editRepickerStart->setObjectName(QStringLiteral("editRepickerStart"));
        editRepickerStart->setEnabled(false);
        editRepickerStart->setAlignment(Qt::AlignRight);
        editRepickerStart->setMaximum(100);
        editRepickerStart->setMinimum(-100);
        editRepickerStart->setValue(-30);

        hboxLayout7->addWidget(editRepickerStart);


        vboxLayout2->addLayout(hboxLayout7);

        hboxLayout8 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout8->setSpacing(6);
#endif
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        cbRepickerEnd = new QCheckBox(pagePickSettings);
        cbRepickerEnd->setObjectName(QStringLiteral("cbRepickerEnd"));

        hboxLayout8->addWidget(cbRepickerEnd);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout8->addItem(spacerItem8);

        editRepickerEnd = new QDoubleSpinBox(pagePickSettings);
        editRepickerEnd->setObjectName(QStringLiteral("editRepickerEnd"));
        editRepickerEnd->setEnabled(false);
        editRepickerEnd->setAlignment(Qt::AlignRight);
        editRepickerEnd->setMaximum(100);
        editRepickerEnd->setMinimum(-100);
        editRepickerEnd->setValue(10);

        hboxLayout8->addWidget(editRepickerEnd);


        vboxLayout2->addLayout(hboxLayout8);

        line_6 = new QFrame(pagePickSettings);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        vboxLayout2->addWidget(line_6);

        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        cbUsePerStreamTimeWindow = new QCheckBox(pagePickSettings);
        cbUsePerStreamTimeWindow->setObjectName(QStringLiteral("cbUsePerStreamTimeWindow"));

        vboxLayout4->addWidget(cbUsePerStreamTimeWindow);

        label = new QLabel(pagePickSettings);
        label->setObjectName(QStringLiteral("label"));

        vboxLayout4->addWidget(label);

        hboxLayout9 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout9->setSpacing(6);
#endif
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        slPreOffset = new QSlider(pagePickSettings);
        slPreOffset->setObjectName(QStringLiteral("slPreOffset"));
        slPreOffset->setMaximum(60);
        slPreOffset->setSliderPosition(1);
        slPreOffset->setOrientation(Qt::Horizontal);

        hboxLayout9->addWidget(slPreOffset);

        preTimeEdit = new QTimeEdit(pagePickSettings);
        preTimeEdit->setObjectName(QStringLiteral("preTimeEdit"));
        preTimeEdit->setFrame(true);
        preTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        preTimeEdit->setTime(QTime(0, 1, 0));
        preTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout9->addWidget(preTimeEdit);


        vboxLayout4->addLayout(hboxLayout9);

        label_2 = new QLabel(pagePickSettings);
        label_2->setObjectName(QStringLiteral("label_2"));

        vboxLayout4->addWidget(label_2);

        hboxLayout10 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout10->setSpacing(6);
#endif
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QStringLiteral("hboxLayout10"));
        slPostOffset = new QSlider(pagePickSettings);
        slPostOffset->setObjectName(QStringLiteral("slPostOffset"));
        slPostOffset->setMaximum(60);
        slPostOffset->setSliderPosition(2);
        slPostOffset->setOrientation(Qt::Horizontal);

        hboxLayout10->addWidget(slPostOffset);

        postTimeEdit = new QTimeEdit(pagePickSettings);
        postTimeEdit->setObjectName(QStringLiteral("postTimeEdit"));
        postTimeEdit->setFrame(true);
        postTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        postTimeEdit->setTime(QTime(0, 2, 0));
        postTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout10->addWidget(postTimeEdit);


        vboxLayout4->addLayout(hboxLayout10);

        label_3 = new QLabel(pagePickSettings);
        label_3->setObjectName(QStringLiteral("label_3"));

        vboxLayout4->addWidget(label_3);

        hboxLayout11 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout11->setSpacing(6);
#endif
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QStringLiteral("hboxLayout11"));
        slMinimumLength = new QSlider(pagePickSettings);
        slMinimumLength->setObjectName(QStringLiteral("slMinimumLength"));
        slMinimumLength->setMaximum(60);
        slMinimumLength->setValue(30);
        slMinimumLength->setSliderPosition(30);
        slMinimumLength->setOrientation(Qt::Horizontal);

        hboxLayout11->addWidget(slMinimumLength);

        minimumLengthTimeEdit = new QTimeEdit(pagePickSettings);
        minimumLengthTimeEdit->setObjectName(QStringLiteral("minimumLengthTimeEdit"));
        minimumLengthTimeEdit->setFrame(true);
        minimumLengthTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        minimumLengthTimeEdit->setTime(QTime(0, 30, 0));
        minimumLengthTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout11->addWidget(minimumLengthTimeEdit);


        vboxLayout4->addLayout(hboxLayout11);

        label_13 = new QLabel(pagePickSettings);
        label_13->setObjectName(QStringLiteral("label_13"));

        vboxLayout4->addWidget(label_13);

        hboxLayout12 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout12->setSpacing(6);
#endif
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        hboxLayout12->setObjectName(QStringLiteral("hboxLayout12"));
        slWaveformAlignment = new QSlider(pagePickSettings);
        slWaveformAlignment->setObjectName(QStringLiteral("slWaveformAlignment"));
        slWaveformAlignment->setMaximum(100);
        slWaveformAlignment->setValue(50);
        slWaveformAlignment->setSliderPosition(50);
        slWaveformAlignment->setOrientation(Qt::Horizontal);

        hboxLayout12->addWidget(slWaveformAlignment);

        waveformAlignmentEdit = new QSpinBox(pagePickSettings);
        waveformAlignmentEdit->setObjectName(QStringLiteral("waveformAlignmentEdit"));
        waveformAlignmentEdit->setMaximum(100);
        waveformAlignmentEdit->setSingleStep(10);
        waveformAlignmentEdit->setValue(50);

        hboxLayout12->addWidget(waveformAlignmentEdit);


        vboxLayout4->addLayout(hboxLayout12);


        vboxLayout2->addLayout(vboxLayout4);

        spacerItem9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem9);

        toolBox->addItem(pagePickSettings, QStringLiteral("Picker settings"));
        pagePickFilters = new QWidget();
        pagePickFilters->setObjectName(QStringLiteral("pagePickFilters"));
        pagePickFilters->setGeometry(QRect(0, 0, 96, 26));
        pagePickFilters->setAutoFillBackground(true);
        vboxLayout5 = new QVBoxLayout(pagePickFilters);
#ifndef Q_OS_MAC
        vboxLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout5->setObjectName(QStringLiteral("vboxLayout5"));
        hboxLayout13 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout13->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout13->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout13->setObjectName(QStringLiteral("hboxLayout13"));
        tableFilter = new QTableView(pagePickFilters);
        tableFilter->setObjectName(QStringLiteral("tableFilter"));
        tableFilter->setAlternatingRowColors(true);
        tableFilter->setSelectionMode(QAbstractItemView::SingleSelection);

        hboxLayout13->addWidget(tableFilter);

        vboxLayout6 = new QVBoxLayout();
        vboxLayout6->setSpacing(2);
        vboxLayout6->setContentsMargins(0, 0, 0, 0);
        vboxLayout6->setObjectName(QStringLiteral("vboxLayout6"));
        btnAddPickFilter = new QPushButton(pagePickFilters);
        btnAddPickFilter->setObjectName(QStringLiteral("btnAddPickFilter"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnAddPickFilter->sizePolicy().hasHeightForWidth());
        btnAddPickFilter->setSizePolicy(sizePolicy2);
        btnAddPickFilter->setMaximumSize(QSize(20, 20));

        vboxLayout6->addWidget(btnAddPickFilter);

        btnRemovePickFilter = new QPushButton(pagePickFilters);
        btnRemovePickFilter->setObjectName(QStringLiteral("btnRemovePickFilter"));
        sizePolicy2.setHeightForWidth(btnRemovePickFilter->sizePolicy().hasHeightForWidth());
        btnRemovePickFilter->setSizePolicy(sizePolicy2);
        btnRemovePickFilter->setMaximumSize(QSize(20, 20));

        vboxLayout6->addWidget(btnRemovePickFilter);

        spacerItem10 = new QSpacerItem(10, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout6->addItem(spacerItem10);

        btnMovePickFilterUp = new QPushButton(pagePickFilters);
        btnMovePickFilterUp->setObjectName(QStringLiteral("btnMovePickFilterUp"));
        btnMovePickFilterUp->setMaximumSize(QSize(20, 20));
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/arrow_up.png"));
        btnMovePickFilterUp->setIcon(icon);
        btnMovePickFilterUp->setIconSize(QSize(12, 12));
        btnMovePickFilterUp->setFlat(false);

        vboxLayout6->addWidget(btnMovePickFilterUp);

        btnMovePickFilterDown = new QPushButton(pagePickFilters);
        btnMovePickFilterDown->setObjectName(QStringLiteral("btnMovePickFilterDown"));
        btnMovePickFilterDown->setMaximumSize(QSize(20, 20));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/icons/icons/arrow_down.png"));
        btnMovePickFilterDown->setIcon(icon1);
        btnMovePickFilterDown->setIconSize(QSize(12, 12));
        btnMovePickFilterDown->setFlat(false);

        vboxLayout6->addWidget(btnMovePickFilterDown);


        hboxLayout13->addLayout(vboxLayout6);


        vboxLayout5->addLayout(hboxLayout13);

        groupBox = new QGroupBox(pagePickFilters);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout = new QGridLayout(groupBox);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 1, 0, 1, 1);

        checkIntegrationPreFilterOnce = new QCheckBox(groupBox);
        checkIntegrationPreFilterOnce->setObjectName(QStringLiteral("checkIntegrationPreFilterOnce"));

        gridLayout->addWidget(checkIntegrationPreFilterOnce, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout->addWidget(label_14, 0, 0, 1, 1);

        editIntegrationPreFilter = new QLineEdit(groupBox);
        editIntegrationPreFilter->setObjectName(QStringLiteral("editIntegrationPreFilter"));

        gridLayout->addWidget(editIntegrationPreFilter, 0, 1, 1, 1);


        vboxLayout5->addWidget(groupBox);

        toolBox->addItem(pagePickFilters, QStringLiteral("Picker filters"));
        pageAmplitudeSettings = new QWidget();
        pageAmplitudeSettings->setObjectName(QStringLiteral("pageAmplitudeSettings"));
        pageAmplitudeSettings->setGeometry(QRect(0, 0, 96, 26));
        vboxLayout7 = new QVBoxLayout(pageAmplitudeSettings);
#ifndef Q_OS_MAC
        vboxLayout7->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout7->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout7->setObjectName(QStringLiteral("vboxLayout7"));
        label_11 = new QLabel(pageAmplitudeSettings);
        label_11->setObjectName(QStringLiteral("label_11"));

        vboxLayout7->addWidget(label_11);

        hboxLayout14 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout14->setSpacing(6);
#endif
        hboxLayout14->setContentsMargins(0, 0, 0, 0);
        hboxLayout14->setObjectName(QStringLiteral("hboxLayout14"));
        spacerItem11 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout14->addItem(spacerItem11);

        slAmplitudePreOffset = new QSlider(pageAmplitudeSettings);
        slAmplitudePreOffset->setObjectName(QStringLiteral("slAmplitudePreOffset"));
        slAmplitudePreOffset->setMaximum(300);
        slAmplitudePreOffset->setSliderPosition(1);
        slAmplitudePreOffset->setOrientation(Qt::Horizontal);

        hboxLayout14->addWidget(slAmplitudePreOffset);

        preAmplitudeTimeEdit = new QTimeEdit(pageAmplitudeSettings);
        preAmplitudeTimeEdit->setObjectName(QStringLiteral("preAmplitudeTimeEdit"));
        preAmplitudeTimeEdit->setFrame(true);
        preAmplitudeTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        preAmplitudeTimeEdit->setTime(QTime(0, 5, 0));
        preAmplitudeTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout14->addWidget(preAmplitudeTimeEdit);


        vboxLayout7->addLayout(hboxLayout14);

        label_12 = new QLabel(pageAmplitudeSettings);
        label_12->setObjectName(QStringLiteral("label_12"));

        vboxLayout7->addWidget(label_12);

        hboxLayout15 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout15->setSpacing(6);
#endif
        hboxLayout15->setContentsMargins(0, 0, 0, 0);
        hboxLayout15->setObjectName(QStringLiteral("hboxLayout15"));
        spacerItem12 = new QSpacerItem(16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout15->addItem(spacerItem12);

        slAmplitudePostOffset = new QSlider(pageAmplitudeSettings);
        slAmplitudePostOffset->setObjectName(QStringLiteral("slAmplitudePostOffset"));
        slAmplitudePostOffset->setMaximum(300);
        slAmplitudePostOffset->setSliderPosition(2);
        slAmplitudePostOffset->setOrientation(Qt::Horizontal);

        hboxLayout15->addWidget(slAmplitudePostOffset);

        postAmplitudeTimeEdit = new QTimeEdit(pageAmplitudeSettings);
        postAmplitudeTimeEdit->setObjectName(QStringLiteral("postAmplitudeTimeEdit"));
        postAmplitudeTimeEdit->setFrame(true);
        postAmplitudeTimeEdit->setButtonSymbols(QAbstractSpinBox::PlusMinus);
        postAmplitudeTimeEdit->setTime(QTime(0, 5, 0));
        postAmplitudeTimeEdit->setCurrentSection(QDateTimeEdit::HourSection);

        hboxLayout15->addWidget(postAmplitudeTimeEdit);


        vboxLayout7->addLayout(hboxLayout15);

        spacerItem13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout7->addItem(spacerItem13);

        toolBox->addItem(pageAmplitudeSettings, QStringLiteral("Amplitude settings"));
        pageAmplitudeFilters = new QWidget();
        pageAmplitudeFilters->setObjectName(QStringLiteral("pageAmplitudeFilters"));
        pageAmplitudeFilters->setGeometry(QRect(0, 0, 96, 26));
        hboxLayout16 = new QHBoxLayout(pageAmplitudeFilters);
#ifndef Q_OS_MAC
        hboxLayout16->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout16->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout16->setObjectName(QStringLiteral("hboxLayout16"));
        tableAFilter = new QTableView(pageAmplitudeFilters);
        tableAFilter->setObjectName(QStringLiteral("tableAFilter"));

        hboxLayout16->addWidget(tableAFilter);

        vboxLayout8 = new QVBoxLayout();
        vboxLayout8->setSpacing(2);
        vboxLayout8->setContentsMargins(0, 0, 0, 0);
        vboxLayout8->setObjectName(QStringLiteral("vboxLayout8"));
        btnAddAmplitudeFilter = new QPushButton(pageAmplitudeFilters);
        btnAddAmplitudeFilter->setObjectName(QStringLiteral("btnAddAmplitudeFilter"));
        sizePolicy2.setHeightForWidth(btnAddAmplitudeFilter->sizePolicy().hasHeightForWidth());
        btnAddAmplitudeFilter->setSizePolicy(sizePolicy2);
        btnAddAmplitudeFilter->setMaximumSize(QSize(20, 20));

        vboxLayout8->addWidget(btnAddAmplitudeFilter);

        btnRemoveAmplitudeFilter = new QPushButton(pageAmplitudeFilters);
        btnRemoveAmplitudeFilter->setObjectName(QStringLiteral("btnRemoveAmplitudeFilter"));
        sizePolicy2.setHeightForWidth(btnRemoveAmplitudeFilter->sizePolicy().hasHeightForWidth());
        btnRemoveAmplitudeFilter->setSizePolicy(sizePolicy2);
        btnRemoveAmplitudeFilter->setMaximumSize(QSize(20, 20));

        vboxLayout8->addWidget(btnRemoveAmplitudeFilter);

        spacerItem14 = new QSpacerItem(10, 131, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout8->addItem(spacerItem14);

        btnMoveAmplitudeFilterUp = new QPushButton(pageAmplitudeFilters);
        btnMoveAmplitudeFilterUp->setObjectName(QStringLiteral("btnMoveAmplitudeFilterUp"));
        btnMoveAmplitudeFilterUp->setMaximumSize(QSize(20, 20));
        btnMoveAmplitudeFilterUp->setIcon(icon);
        btnMoveAmplitudeFilterUp->setIconSize(QSize(12, 12));
        btnMoveAmplitudeFilterUp->setFlat(false);

        vboxLayout8->addWidget(btnMoveAmplitudeFilterUp);

        btnMoveAmplitudeFilterDown = new QPushButton(pageAmplitudeFilters);
        btnMoveAmplitudeFilterDown->setObjectName(QStringLiteral("btnMoveAmplitudeFilterDown"));
        btnMoveAmplitudeFilterDown->setMaximumSize(QSize(20, 20));
        btnMoveAmplitudeFilterDown->setIcon(icon1);
        btnMoveAmplitudeFilterDown->setIconSize(QSize(12, 12));
        btnMoveAmplitudeFilterDown->setFlat(false);

        vboxLayout8->addWidget(btnMoveAmplitudeFilterDown);


        hboxLayout16->addLayout(vboxLayout8);

        toolBox->addItem(pageAmplitudeFilters, QStringLiteral("Amplitude filters"));

        vboxLayout->addWidget(toolBox);

        hboxLayout17 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout17->setSpacing(6);
#endif
        hboxLayout17->setContentsMargins(0, 0, 0, 0);
        hboxLayout17->setObjectName(QStringLiteral("hboxLayout17"));
        saveButton = new QPushButton(PickerSettings);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        hboxLayout17->addWidget(saveButton);

        spacerItem15 = new QSpacerItem(115, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout17->addItem(spacerItem15);

        okButton = new QPushButton(PickerSettings);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout17->addWidget(okButton);

        cancelButton = new QPushButton(PickerSettings);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout17->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout17);

        QWidget::setTabOrder(okButton, saveButton);
        QWidget::setTabOrder(saveButton, cancelButton);
        QWidget::setTabOrder(cancelButton, cbAskForMagnitudeTypes);
        QWidget::setTabOrder(cbAskForMagnitudeTypes, cbComputeMissingTakeOffAngles);
        QWidget::setTabOrder(cbComputeMissingTakeOffAngles, cbMaplines);
        QWidget::setTabOrder(cbMaplines, cbPlotGridlines);
        QWidget::setTabOrder(cbPlotGridlines, editRecordSource);
        QWidget::setTabOrder(editRecordSource, spinAddStationsDistance);
        QWidget::setTabOrder(spinAddStationsDistance, cbHideStationsWithoutData);
        QWidget::setTabOrder(cbHideStationsWithoutData, cbHideDisabledStations);
        QWidget::setTabOrder(cbHideDisabledStations, cbShowCrossHair);
        QWidget::setTabOrder(cbShowCrossHair, listPickUncertainties);
        QWidget::setTabOrder(listPickUncertainties, cbAllComponents);
        QWidget::setTabOrder(cbAllComponents, cbIgnoreUnconfiguredStations);
        QWidget::setTabOrder(cbIgnoreUnconfiguredStations, cbLoadAllPicks);
        QWidget::setTabOrder(cbLoadAllPicks, cbStrongMotion);
        QWidget::setTabOrder(cbStrongMotion, cbLimitStationCount);
        QWidget::setTabOrder(cbLimitStationCount, spinLimitStationCount);
        QWidget::setTabOrder(spinLimitStationCount, cbShowAllComponents);
        QWidget::setTabOrder(cbShowAllComponents, maximumDistanceEdit);
        QWidget::setTabOrder(maximumDistanceEdit, cbRemoveAllAutomaticStationPicks);
        QWidget::setTabOrder(cbRemoveAllAutomaticStationPicks, cbRemoveAllAutomaticPicks);
        QWidget::setTabOrder(cbRemoveAllAutomaticPicks, cbRepickerStart);
        QWidget::setTabOrder(cbRepickerStart, editRepickerStart);
        QWidget::setTabOrder(editRepickerStart, cbRepickerEnd);
        QWidget::setTabOrder(cbRepickerEnd, editRepickerEnd);
        QWidget::setTabOrder(editRepickerEnd, cbUsePerStreamTimeWindow);
        QWidget::setTabOrder(cbUsePerStreamTimeWindow, slPreOffset);
        QWidget::setTabOrder(slPreOffset, preTimeEdit);
        QWidget::setTabOrder(preTimeEdit, slPostOffset);
        QWidget::setTabOrder(slPostOffset, postTimeEdit);
        QWidget::setTabOrder(postTimeEdit, slMinimumLength);
        QWidget::setTabOrder(slMinimumLength, minimumLengthTimeEdit);
        QWidget::setTabOrder(minimumLengthTimeEdit, slWaveformAlignment);
        QWidget::setTabOrder(slWaveformAlignment, waveformAlignmentEdit);
        QWidget::setTabOrder(waveformAlignmentEdit, tableFilter);
        QWidget::setTabOrder(tableFilter, btnAddPickFilter);
        QWidget::setTabOrder(btnAddPickFilter, btnRemovePickFilter);
        QWidget::setTabOrder(btnRemovePickFilter, btnMovePickFilterUp);
        QWidget::setTabOrder(btnMovePickFilterUp, btnMovePickFilterDown);
        QWidget::setTabOrder(btnMovePickFilterDown, slAmplitudePreOffset);
        QWidget::setTabOrder(slAmplitudePreOffset, preAmplitudeTimeEdit);
        QWidget::setTabOrder(preAmplitudeTimeEdit, slAmplitudePostOffset);
        QWidget::setTabOrder(slAmplitudePostOffset, postAmplitudeTimeEdit);
        QWidget::setTabOrder(postAmplitudeTimeEdit, tableAFilter);
        QWidget::setTabOrder(tableAFilter, btnAddAmplitudeFilter);
        QWidget::setTabOrder(btnAddAmplitudeFilter, btnRemoveAmplitudeFilter);
        QWidget::setTabOrder(btnRemoveAmplitudeFilter, btnMoveAmplitudeFilterUp);
        QWidget::setTabOrder(btnMoveAmplitudeFilterUp, btnMoveAmplitudeFilterDown);
        QWidget::setTabOrder(btnMoveAmplitudeFilterDown, cbComputeMagnitudesAfterRelocate);
        QWidget::setTabOrder(cbComputeMagnitudesAfterRelocate, spinPVel);
        QWidget::setTabOrder(spinPVel, cbComputeMagnitudesSilently);
        QWidget::setTabOrder(cbComputeMagnitudesSilently, cbIgnoreDisabledStations);
        QWidget::setTabOrder(cbIgnoreDisabledStations, checkIntegrationPreFilterOnce);
        QWidget::setTabOrder(checkIntegrationPreFilterOnce, editIntegrationPreFilter);

        retranslateUi(PickerSettings);
        QObject::connect(okButton, SIGNAL(clicked()), PickerSettings, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), PickerSettings, SLOT(reject()));
        QObject::connect(cbUsePerStreamTimeWindow, SIGNAL(toggled(bool)), slMinimumLength, SLOT(setDisabled(bool)));
        QObject::connect(cbUsePerStreamTimeWindow, SIGNAL(toggled(bool)), minimumLengthTimeEdit, SLOT(setDisabled(bool)));
        QObject::connect(cbUsePerStreamTimeWindow, SIGNAL(toggled(bool)), label_3, SLOT(setDisabled(bool)));
        QObject::connect(cbShowAllComponents, SIGNAL(toggled(bool)), frameMaximumDistance, SLOT(setEnabled(bool)));
        QObject::connect(cbLimitStationCount, SIGNAL(toggled(bool)), spinLimitStationCount, SLOT(setEnabled(bool)));

        toolBox->setCurrentIndex(0);
        btnMovePickFilterUp->setDefault(false);
        btnMoveAmplitudeFilterUp->setDefault(false);


        QMetaObject::connectSlotsByName(PickerSettings);
    } // setupUi

    void retranslateUi(QDialog *PickerSettings)
    {
        PickerSettings->setWindowTitle(QApplication::translate("PickerSettings", "Settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        PickerSettings->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_4->setToolTip(QApplication::translate("PickerSettings", "Reduction velocity used by the move out curve.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("PickerSettings", "Reduction velocity:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        spinPVel->setToolTip(QApplication::translate("PickerSettings", "Reduction velocity used by the move out curve.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("PickerSettings", "km/s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbComputeMagnitudesAfterRelocate->setToolTip(QApplication::translate("PickerSettings", "If enabled, magnitudes are computed automatically after relocate.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbComputeMagnitudesAfterRelocate->setText(QApplication::translate("PickerSettings", "Compute magnitudes after relocate", Q_NULLPTR));
        cbComputeMagnitudesSilently->setText(QApplication::translate("PickerSettings", "Compute magnitudes silently", Q_NULLPTR));
        cbAskForMagnitudeTypes->setText(QApplication::translate("PickerSettings", "Enable selection of magnitudes to be computed", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbComputeMissingTakeOffAngles->setToolTip(QApplication::translate("PickerSettings", "Computes missing take-off angles to be used in the first motion plot.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbComputeMissingTakeOffAngles->setText(QApplication::translate("PickerSettings", "Compute missing take-off angles", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbMaplines->setToolTip(QApplication::translate("PickerSettings", "Enables/disables drawing of lines in the map connecting the station with the event", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbMaplines->setText(QApplication::translate("PickerSettings", "Draw map lines", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbPlotGridlines->setToolTip(QApplication::translate("PickerSettings", "Enables/disables drawing of grid lines in plots", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbPlotGridlines->setText(QApplication::translate("PickerSettings", "Draw grid lines", Q_NULLPTR));
        label_5->setText(QApplication::translate("PickerSettings", "Data source:", Q_NULLPTR));
        label_9->setText(QApplication::translate("PickerSettings", "Default distance for \"add stations\":", Q_NULLPTR));
        labelDefaultDistanceUnit->setText(QApplication::translate("PickerSettings", "deg", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbHideStationsWithoutData->setToolTip(QApplication::translate("PickerSettings", "If enabled additional stations are initially hidden and only become visible if data is available.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbHideStationsWithoutData->setText(QApplication::translate("PickerSettings", "Hide station traces without data and arrivals", Q_NULLPTR));
        cbHideDisabledStations->setText(QApplication::translate("PickerSettings", "Hide disabled stations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbIgnoreDisabledStations->setToolTip(QApplication::translate("PickerSettings", "If stations are about to be added to either the picker or amplitude review window, disabled stations will be ignored if this option is enabled.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbIgnoreDisabledStations->setText(QApplication::translate("PickerSettings", "Ignore disabled stations", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageLocator), QApplication::translate("PickerSettings", "Global settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbShowCrossHair->setToolTip(QApplication::translate("PickerSettings", "If checked a cross hair cursor is shown when in picking mode whith the configured uncertainty widths.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbShowCrossHair->setText(QApplication::translate("PickerSettings", "Show cross hair cursor", Q_NULLPTR));
        labelPickUncertainties->setText(QApplication::translate("PickerSettings", "Uncertainties:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        listPickUncertainties->setToolTip(QApplication::translate("PickerSettings", "Selects the current set of predefined pick uncertainties.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbIgnoreUnconfiguredStations->setToolTip(QApplication::translate("PickerSettings", "If this option is ticked the picker will not add stations that are not configured with a detecStream.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbIgnoreUnconfiguredStations->setText(QApplication::translate("PickerSettings", "Ignore unconfigured stations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbAllComponents->setToolTip(QApplication::translate("PickerSettings", "When enabled, all components (Z,N,E) are going to be loaded initially. Otherwise the components are loaded on demand.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbAllComponents->setText(QApplication::translate("PickerSettings", "Load all components", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbLoadAllPicks->setToolTip(QApplication::translate("PickerSettings", "When enabled all picks in the resulting timewindow will fetched from the database.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbLoadAllPicks->setText(QApplication::translate("PickerSettings", "Load all picks", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbStrongMotion->setToolTip(QApplication::translate("PickerSettings", "When enabled strong motion data will be transfered additionally for every station that has a strong motion sensor and where no strong motion pick exists.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbStrongMotion->setText(QApplication::translate("PickerSettings", "Load strong motion data", Q_NULLPTR));
        cbLimitStationCount->setText(QApplication::translate("PickerSettings", "Limit acquistion to first", Q_NULLPTR));
        labelLimitStations->setText(QApplication::translate("PickerSettings", "stations", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbShowAllComponents->setToolTip(QApplication::translate("PickerSettings", "When enabled all components are displayed in the trace widget up to a configurable station distance.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbShowAllComponents->setText(QApplication::translate("PickerSettings", "Show all components", Q_NULLPTR));
        label_7->setText(QApplication::translate("PickerSettings", "Maximum distance:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        maximumDistanceEdit->setToolTip(QApplication::translate("PickerSettings", "The maximum station distance used to display all components (in degree).", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("PickerSettings", "deg", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbRemoveAllAutomaticStationPicks->setToolTip(QApplication::translate("PickerSettings", "Removes all automatic picks of a station for which manual picks exist.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbRemoveAllAutomaticStationPicks->setText(QApplication::translate("PickerSettings", "Remove automatic station picks", Q_NULLPTR));
        labelRemoveStationPicksInfo->setText(QApplication::translate("PickerSettings", "If checked all automatic picks of a station with manual picks are removed once the manual review is confirmed.", Q_NULLPTR));
        cbRemoveAllAutomaticPicks->setText(QApplication::translate("PickerSettings", "Remove all automatic picks", Q_NULLPTR));
        labelRemoveAllPicksInfo->setText(QApplication::translate("PickerSettings", "If checked all automatic picks are removed once the manual review is confirmed.", Q_NULLPTR));
        label_10->setText(QApplication::translate("PickerSettings", "Repicker", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbRepickerStart->setToolTip(QApplication::translate("PickerSettings", "Sets a custom signal start time to override the default of the selected repicker.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbRepickerStart->setText(QApplication::translate("PickerSettings", "Signal start time", Q_NULLPTR));
        editRepickerStart->setPrefix(QString());
        editRepickerStart->setSuffix(QApplication::translate("PickerSettings", "s", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbRepickerEnd->setToolTip(QApplication::translate("PickerSettings", "Sets a custom signal end time to override the default of the selected repicker.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbRepickerEnd->setText(QApplication::translate("PickerSettings", "Signal end time", Q_NULLPTR));
        editRepickerEnd->setSuffix(QApplication::translate("PickerSettings", "s", Q_NULLPTR));
        cbUsePerStreamTimeWindow->setText(QApplication::translate("PickerSettings", "Use per stream timewindows", Q_NULLPTR));
        label->setText(QApplication::translate("PickerSettings", "Offset before first (P) pick:", Q_NULLPTR));
        preTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", Q_NULLPTR));
        label_2->setText(QApplication::translate("PickerSettings", "Offset after last (P) pick:", Q_NULLPTR));
        postTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        label_3->setToolTip(QApplication::translate("PickerSettings", "The length of the timewindow is the maximum of the resulting length of the above offsets and this value.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("PickerSettings", "Minimum length of data after origin time:", Q_NULLPTR));
        minimumLengthTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", Q_NULLPTR));
        label_13->setText(QApplication::translate("PickerSettings", "Waveform alignment position", Q_NULLPTR));
        waveformAlignmentEdit->setSuffix(QApplication::translate("PickerSettings", "%", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pagePickSettings), QApplication::translate("PickerSettings", "Picker settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddPickFilter->setToolTip(QApplication::translate("PickerSettings", "Add a new filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddPickFilter->setText(QApplication::translate("PickerSettings", "+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRemovePickFilter->setToolTip(QApplication::translate("PickerSettings", "Remove current filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemovePickFilter->setText(QApplication::translate("PickerSettings", "-", Q_NULLPTR));
        btnMovePickFilterUp->setText(QString());
        btnMovePickFilterDown->setText(QString());
        groupBox->setTitle(QApplication::translate("PickerSettings", "Waveform numerical integration", Q_NULLPTR));
        label_15->setText(QApplication::translate("PickerSettings", "Apply pre-filter only once:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        checkIntegrationPreFilterOnce->setToolTip(QApplication::translate("PickerSettings", "If checked then the pre filter is applied only once,  otherwise it will be applied prior to each integration.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        checkIntegrationPreFilterOnce->setText(QString());
        label_14->setText(QApplication::translate("PickerSettings", "Optional pre-filter:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editIntegrationPreFilter->setToolTip(QApplication::translate("PickerSettings", "An optional pre-filter prior to numerical integration for stabilization.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        toolBox->setItemText(toolBox->indexOf(pagePickFilters), QApplication::translate("PickerSettings", "Picker filters", Q_NULLPTR));
        label_11->setText(QApplication::translate("PickerSettings", "Waveform time window pre offset", Q_NULLPTR));
        preAmplitudeTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", Q_NULLPTR));
        label_12->setText(QApplication::translate("PickerSettings", "Waveform time window post offset", Q_NULLPTR));
        postAmplitudeTimeEdit->setDisplayFormat(QApplication::translate("PickerSettings", "HH:mm:ss", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(pageAmplitudeSettings), QApplication::translate("PickerSettings", "Amplitude settings", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnAddAmplitudeFilter->setToolTip(QApplication::translate("PickerSettings", "Add a new filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnAddAmplitudeFilter->setText(QApplication::translate("PickerSettings", "+", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnRemoveAmplitudeFilter->setToolTip(QApplication::translate("PickerSettings", "Remove current filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRemoveAmplitudeFilter->setText(QApplication::translate("PickerSettings", "-", Q_NULLPTR));
        btnMoveAmplitudeFilterUp->setText(QString());
        btnMoveAmplitudeFilterDown->setText(QString());
        toolBox->setItemText(toolBox->indexOf(pageAmplitudeFilters), QApplication::translate("PickerSettings", "Amplitude filters", Q_NULLPTR));
        saveButton->setText(QApplication::translate("PickerSettings", "Save", Q_NULLPTR));
        okButton->setText(QApplication::translate("PickerSettings", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("PickerSettings", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PickerSettings: public Ui_PickerSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICKERSETTINGS_H
