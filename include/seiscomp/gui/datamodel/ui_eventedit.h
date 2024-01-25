/********************************************************************************
** Form generated from reading UI file 'eventedit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTEDIT_H
#define UI_EVENTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventEdit
{
public:
    QHBoxLayout *hboxLayout;
    QSplitter *splitter;
    QTextEdit *listJournal;
    QTabWidget *tabWidget;
    QWidget *originWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout1;
    QFrame *frameMap;
    QTreeWidget *treeMagnitudes;
    QFrame *line;
    QFrame *frameInformation;
    QGridLayout *gridLayout1;
    QComboBox *comboTypes;
    QLabel *labelPhasesValue;
    QLabel *labelDepthError;
    QLabel *labelLongitudeValue;
    QLabel *labelOriginStatus;
    QLabel *labelRMSValue;
    QLabel *labelAgency;
    QLabel *labelType;
    QPushButton *buttonFixOrigin;
    QLabel *labelLatitudeValue;
    QLabel *labelDepthUnit;
    QLabel *labelDepth;
    QLabel *labelLatitudeError;
    QLabel *labelTime;
    QLabel *labelLongitudeError;
    QLabel *labelLatitude;
    QLabel *labelLongitudeUnit;
    QLabel *labelLongitude;
    QLabel *labelAgencyValue;
    QPushButton *buttonReleaseOrigin;
    QComboBox *comboFixOrigin;
    QLabel *labelRegionValue;
    QLabel *labelLatitudeUnit;
    QLabel *labelTimeValue;
    QSpacerItem *spacerItem;
    QLabel *labelOriginStatusValue;
    QLabel *labelPhases;
    QLabel *labelRegion;
    QLabel *labelDepthValue;
    QLabel *labelRMS;
    QLabel *label;
    QComboBox *comboTypeCertainties;
    QFrame *frameInformationM;
    QGridLayout *gridLayout2;
    QPushButton *buttonReleaseMagnitudeType;
    QLabel *labelMagnitudeMethod;
    QLabel *labelMagnitude;
    QLabel *labelMagnitudeCount;
    QLabel *labelMagnitudeValue;
    QLabel *labelMagnitudeType;
    QLabel *labelMagnitudeMethodValue;
    QPushButton *buttonFixMagnitudeType;
    QLabel *labelMagnitudeTypeValue;
    QSpacerItem *spacerItem1;
    QLabel *labelMagnitudeCountValue;
    QLabel *labelMagnitudeError;
    QSpacerItem *spacerItem2;
    QLabel *label_2;
    QLabel *labelMagnitudeStatus;
    QFrame *frameOrigins;
    QSplitter *fmWidget;
    QFrame *fmTop;
    QHBoxLayout *hboxLayout2;
    QTreeWidget *fmTree;
    QFrame *fmInfo;
    QGridLayout *gridLayout3;
    QLabel *fmDist;
    QLabel *fmMisfitL;
    QLabel *fmDistL;
    QComboBox *fmFixCombo;
    QLabel *fmNP2L;
    QLabel *fmMethodL;
    QLabel *fmCountL;
    QSpacerItem *spacerItem3;
    QPushButton *fmFixButton;
    QLabel *fmGap;
    QLabel *fmNP2;
    QLabel *fmMode;
    QLabel *fmStatus;
    QLabel *fmGapL;
    QLabel *fmNP1;
    QLabel *fmMethod;
    QPushButton *fmAutoButton;
    QLabel *fmMisfit;
    QLabel *fmNP1L;
    QLabel *fmStatusL;
    QLabel *fmModeL;
    QLabel *fmCount;
    QPushButton *fmTriggerButton;
    QFrame *fmBottom;
    QHBoxLayout *hboxLayout3;
    QFrame *fmMap;
    QGroupBox *mtOriginInfo;
    QGridLayout *gridLayout4;
    QLabel *mtOriginPhasesL;
    QLabel *mtOriginDepth;
    QLabel *mtOriginDepthL;
    QLabel *mtOriginLatUnit;
    QLabel *mtOriginRegionL;
    QLabel *mtOriginDepthError;
    QLabel *mtOriginAgencyL;
    QLabel *mtOriginLon;
    QLabel *mtOriginLatL;
    QLabel *mtOriginPhases;
    QLabel *mtOriginTimeL;
    QLabel *mtOriginTime;
    QLabel *mtOriginRegion;
    QLabel *mtOriginAgency;
    QLabel *mtOriginStatusL;
    QLabel *mtOriginLat;
    QLabel *mtOriginDepthUnit;
    QLabel *mtOriginLatError;
    QLabel *mtOriginLonL;
    QLabel *mtOriginStatus;
    QLabel *mtOriginLonUnit;
    QLabel *mtOriginLonError;
    QSpacerItem *spacerItem4;
    QGroupBox *mtMagInfo;
    QGridLayout *gridLayout5;
    QLabel *mtMagTypeL;
    QLabel *mtMagMethod;
    QLabel *mtMagCount;
    QLabel *mtMagError;
    QSpacerItem *spacerItem5;
    QSpacerItem *spacerItem6;
    QLabel *mtMagCountL;
    QPushButton *buttonReleaseMw;
    QLabel *mtMagMethodL;
    QLabel *mtMagL;
    QLabel *mtMag;
    QLabel *mtMagType;
    QPushButton *buttonFixMw;
    QPushButton *buttonFixFmMw;

    void setupUi(QWidget *EventEdit)
    {
        if (EventEdit->objectName().isEmpty())
            EventEdit->setObjectName(QStringLiteral("EventEdit"));
        EventEdit->resize(835, 795);
        hboxLayout = new QHBoxLayout(EventEdit);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        splitter = new QSplitter(EventEdit);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        listJournal = new QTextEdit(splitter);
        listJournal->setObjectName(QStringLiteral("listJournal"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listJournal->sizePolicy().hasHeightForWidth());
        listJournal->setSizePolicy(sizePolicy);
        listJournal->setUndoRedoEnabled(false);
        listJournal->setLineWrapMode(QTextEdit::NoWrap);
        listJournal->setReadOnly(true);
        splitter->addWidget(listJournal);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabPosition(QTabWidget::West);
        originWidget = new QWidget();
        originWidget->setObjectName(QStringLiteral("originWidget"));
        gridLayout = new QGridLayout(originWidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        frameMap = new QFrame(originWidget);
        frameMap->setObjectName(QStringLiteral("frameMap"));
        sizePolicy1.setHeightForWidth(frameMap->sizePolicy().hasHeightForWidth());
        frameMap->setSizePolicy(sizePolicy1);
        frameMap->setFrameShape(QFrame::StyledPanel);
        frameMap->setFrameShadow(QFrame::Raised);

        hboxLayout1->addWidget(frameMap);

        treeMagnitudes = new QTreeWidget(originWidget);
        treeMagnitudes->setObjectName(QStringLiteral("treeMagnitudes"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(7));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(treeMagnitudes->sizePolicy().hasHeightForWidth());
        treeMagnitudes->setSizePolicy(sizePolicy2);
        treeMagnitudes->setAlternatingRowColors(true);
        treeMagnitudes->setRootIsDecorated(false);
        treeMagnitudes->setUniformRowHeights(true);

        hboxLayout1->addWidget(treeMagnitudes);


        gridLayout->addLayout(hboxLayout1, 2, 0, 1, 1);

        line = new QFrame(originWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 0, 1, 2);

        frameInformation = new QFrame(originWidget);
        frameInformation->setObjectName(QStringLiteral("frameInformation"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(5);
        sizePolicy3.setHeightForWidth(frameInformation->sizePolicy().hasHeightForWidth());
        frameInformation->setSizePolicy(sizePolicy3);
        frameInformation->setFrameShape(QFrame::NoFrame);
        frameInformation->setFrameShadow(QFrame::Plain);
        gridLayout1 = new QGridLayout(frameInformation);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        comboTypes = new QComboBox(frameInformation);
        comboTypes->setObjectName(QStringLiteral("comboTypes"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(comboTypes->sizePolicy().hasHeightForWidth());
        comboTypes->setSizePolicy(sizePolicy4);
        comboTypes->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboTypes->setMinimumContentsLength(9);

        gridLayout1->addWidget(comboTypes, 2, 1, 1, 3);

        labelPhasesValue = new QLabel(frameInformation);
        labelPhasesValue->setObjectName(QStringLiteral("labelPhasesValue"));
        labelPhasesValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhasesValue, 7, 2, 1, 2);

        labelDepthError = new QLabel(frameInformation);
        labelDepthError->setObjectName(QStringLiteral("labelDepthError"));
        labelDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthError, 4, 3, 1, 1);

        labelLongitudeValue = new QLabel(frameInformation);
        labelLongitudeValue->setObjectName(QStringLiteral("labelLongitudeValue"));
        labelLongitudeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeValue, 6, 1, 1, 1);

        labelOriginStatus = new QLabel(frameInformation);
        labelOriginStatus->setObjectName(QStringLiteral("labelOriginStatus"));
        labelOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelOriginStatus, 10, 0, 1, 1);

        labelRMSValue = new QLabel(frameInformation);
        labelRMSValue->setObjectName(QStringLiteral("labelRMSValue"));
        labelRMSValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelRMSValue, 8, 2, 1, 2);

        labelAgency = new QLabel(frameInformation);
        labelAgency->setObjectName(QStringLiteral("labelAgency"));
        labelAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgency, 9, 0, 1, 1);

        labelType = new QLabel(frameInformation);
        labelType->setObjectName(QStringLiteral("labelType"));

        gridLayout1->addWidget(labelType, 2, 0, 1, 1);

        buttonFixOrigin = new QPushButton(frameInformation);
        buttonFixOrigin->setObjectName(QStringLiteral("buttonFixOrigin"));

        gridLayout1->addWidget(buttonFixOrigin, 12, 0, 1, 1);

        labelLatitudeValue = new QLabel(frameInformation);
        labelLatitudeValue->setObjectName(QStringLiteral("labelLatitudeValue"));
        sizePolicy1.setHeightForWidth(labelLatitudeValue->sizePolicy().hasHeightForWidth());
        labelLatitudeValue->setSizePolicy(sizePolicy1);
        labelLatitudeValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeValue, 5, 1, 1, 1);

        labelDepthUnit = new QLabel(frameInformation);
        labelDepthUnit->setObjectName(QStringLiteral("labelDepthUnit"));
        labelDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthUnit, 4, 2, 1, 1);

        labelDepth = new QLabel(frameInformation);
        labelDepth->setObjectName(QStringLiteral("labelDepth"));
        sizePolicy1.setHeightForWidth(labelDepth->sizePolicy().hasHeightForWidth());
        labelDepth->setSizePolicy(sizePolicy1);
        labelDepth->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepth, 4, 0, 1, 1);

        labelLatitudeError = new QLabel(frameInformation);
        labelLatitudeError->setObjectName(QStringLiteral("labelLatitudeError"));
        sizePolicy1.setHeightForWidth(labelLatitudeError->sizePolicy().hasHeightForWidth());
        labelLatitudeError->setSizePolicy(sizePolicy1);
        labelLatitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeError, 5, 3, 1, 1);

        labelTime = new QLabel(frameInformation);
        labelTime->setObjectName(QStringLiteral("labelTime"));

        gridLayout1->addWidget(labelTime, 0, 0, 1, 1);

        labelLongitudeError = new QLabel(frameInformation);
        labelLongitudeError->setObjectName(QStringLiteral("labelLongitudeError"));
        labelLongitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeError, 6, 3, 1, 1);

        labelLatitude = new QLabel(frameInformation);
        labelLatitude->setObjectName(QStringLiteral("labelLatitude"));
        sizePolicy1.setHeightForWidth(labelLatitude->sizePolicy().hasHeightForWidth());
        labelLatitude->setSizePolicy(sizePolicy1);
        labelLatitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitude, 5, 0, 1, 1);

        labelLongitudeUnit = new QLabel(frameInformation);
        labelLongitudeUnit->setObjectName(QStringLiteral("labelLongitudeUnit"));
        labelLongitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitudeUnit, 6, 2, 1, 1);

        labelLongitude = new QLabel(frameInformation);
        labelLongitude->setObjectName(QStringLiteral("labelLongitude"));
        labelLongitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLongitude, 6, 0, 1, 1);

        labelAgencyValue = new QLabel(frameInformation);
        labelAgencyValue->setObjectName(QStringLiteral("labelAgencyValue"));
        labelAgencyValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelAgencyValue, 9, 2, 1, 2);

        buttonReleaseOrigin = new QPushButton(frameInformation);
        buttonReleaseOrigin->setObjectName(QStringLiteral("buttonReleaseOrigin"));

        gridLayout1->addWidget(buttonReleaseOrigin, 13, 0, 1, 4);

        comboFixOrigin = new QComboBox(frameInformation);
        comboFixOrigin->setObjectName(QStringLiteral("comboFixOrigin"));

        gridLayout1->addWidget(comboFixOrigin, 12, 1, 1, 3);

        labelRegionValue = new QLabel(frameInformation);
        labelRegionValue->setObjectName(QStringLiteral("labelRegionValue"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(labelRegionValue->sizePolicy().hasHeightForWidth());
        labelRegionValue->setSizePolicy(sizePolicy5);

        gridLayout1->addWidget(labelRegionValue, 1, 1, 1, 3);

        labelLatitudeUnit = new QLabel(frameInformation);
        labelLatitudeUnit->setObjectName(QStringLiteral("labelLatitudeUnit"));
        sizePolicy1.setHeightForWidth(labelLatitudeUnit->sizePolicy().hasHeightForWidth());
        labelLatitudeUnit->setSizePolicy(sizePolicy1);
        labelLatitudeUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelLatitudeUnit, 5, 2, 1, 1);

        labelTimeValue = new QLabel(frameInformation);
        labelTimeValue->setObjectName(QStringLiteral("labelTimeValue"));

        gridLayout1->addWidget(labelTimeValue, 0, 1, 1, 3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem, 11, 0, 1, 1);

        labelOriginStatusValue = new QLabel(frameInformation);
        labelOriginStatusValue->setObjectName(QStringLiteral("labelOriginStatusValue"));
        labelOriginStatusValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelOriginStatusValue, 10, 2, 1, 2);

        labelPhases = new QLabel(frameInformation);
        labelPhases->setObjectName(QStringLiteral("labelPhases"));
        labelPhases->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelPhases, 7, 0, 1, 1);

        labelRegion = new QLabel(frameInformation);
        labelRegion->setObjectName(QStringLiteral("labelRegion"));

        gridLayout1->addWidget(labelRegion, 1, 0, 1, 1);

        labelDepthValue = new QLabel(frameInformation);
        labelDepthValue->setObjectName(QStringLiteral("labelDepthValue"));
        labelDepthValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout1->addWidget(labelDepthValue, 4, 1, 1, 1);

        labelRMS = new QLabel(frameInformation);
        labelRMS->setObjectName(QStringLiteral("labelRMS"));
        labelRMS->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout1->addWidget(labelRMS, 8, 0, 1, 1);

        label = new QLabel(frameInformation);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 3, 0, 1, 1);

        comboTypeCertainties = new QComboBox(frameInformation);
        comboTypeCertainties->setObjectName(QStringLiteral("comboTypeCertainties"));

        gridLayout1->addWidget(comboTypeCertainties, 3, 1, 1, 3);


        gridLayout->addWidget(frameInformation, 0, 1, 1, 1);

        frameInformationM = new QFrame(originWidget);
        frameInformationM->setObjectName(QStringLiteral("frameInformationM"));
        sizePolicy3.setHeightForWidth(frameInformationM->sizePolicy().hasHeightForWidth());
        frameInformationM->setSizePolicy(sizePolicy3);
        frameInformationM->setFrameShape(QFrame::NoFrame);
        frameInformationM->setFrameShadow(QFrame::Plain);
        gridLayout2 = new QGridLayout(frameInformationM);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        buttonReleaseMagnitudeType = new QPushButton(frameInformationM);
        buttonReleaseMagnitudeType->setObjectName(QStringLiteral("buttonReleaseMagnitudeType"));

        gridLayout2->addWidget(buttonReleaseMagnitudeType, 6, 2, 1, 1);

        labelMagnitudeMethod = new QLabel(frameInformationM);
        labelMagnitudeMethod->setObjectName(QStringLiteral("labelMagnitudeMethod"));
        labelMagnitudeMethod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeMethod, 3, 0, 1, 1);

        labelMagnitude = new QLabel(frameInformationM);
        labelMagnitude->setObjectName(QStringLiteral("labelMagnitude"));
        sizePolicy1.setHeightForWidth(labelMagnitude->sizePolicy().hasHeightForWidth());
        labelMagnitude->setSizePolicy(sizePolicy1);
        labelMagnitude->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitude, 1, 0, 1, 1);

        labelMagnitudeCount = new QLabel(frameInformationM);
        labelMagnitudeCount->setObjectName(QStringLiteral("labelMagnitudeCount"));
        labelMagnitudeCount->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeCount, 2, 0, 1, 1);

        labelMagnitudeValue = new QLabel(frameInformationM);
        labelMagnitudeValue->setObjectName(QStringLiteral("labelMagnitudeValue"));
        sizePolicy1.setHeightForWidth(labelMagnitudeValue->sizePolicy().hasHeightForWidth());
        labelMagnitudeValue->setSizePolicy(sizePolicy1);

        gridLayout2->addWidget(labelMagnitudeValue, 1, 1, 1, 1);

        labelMagnitudeType = new QLabel(frameInformationM);
        labelMagnitudeType->setObjectName(QStringLiteral("labelMagnitudeType"));
        sizePolicy1.setHeightForWidth(labelMagnitudeType->sizePolicy().hasHeightForWidth());
        labelMagnitudeType->setSizePolicy(sizePolicy1);
        labelMagnitudeType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeType, 0, 0, 1, 1);

        labelMagnitudeMethodValue = new QLabel(frameInformationM);
        labelMagnitudeMethodValue->setObjectName(QStringLiteral("labelMagnitudeMethodValue"));
        sizePolicy5.setHeightForWidth(labelMagnitudeMethodValue->sizePolicy().hasHeightForWidth());
        labelMagnitudeMethodValue->setSizePolicy(sizePolicy5);
        labelMagnitudeMethodValue->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeMethodValue, 3, 1, 1, 2);

        buttonFixMagnitudeType = new QPushButton(frameInformationM);
        buttonFixMagnitudeType->setObjectName(QStringLiteral("buttonFixMagnitudeType"));

        gridLayout2->addWidget(buttonFixMagnitudeType, 6, 0, 1, 1);

        labelMagnitudeTypeValue = new QLabel(frameInformationM);
        labelMagnitudeTypeValue->setObjectName(QStringLiteral("labelMagnitudeTypeValue"));

        gridLayout2->addWidget(labelMagnitudeTypeValue, 0, 1, 1, 2);

        spacerItem1 = new QSpacerItem(110, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem1, 5, 0, 1, 1);

        labelMagnitudeCountValue = new QLabel(frameInformationM);
        labelMagnitudeCountValue->setObjectName(QStringLiteral("labelMagnitudeCountValue"));

        gridLayout2->addWidget(labelMagnitudeCountValue, 2, 1, 1, 2);

        labelMagnitudeError = new QLabel(frameInformationM);
        labelMagnitudeError->setObjectName(QStringLiteral("labelMagnitudeError"));
        sizePolicy1.setHeightForWidth(labelMagnitudeError->sizePolicy().hasHeightForWidth());
        labelMagnitudeError->setSizePolicy(sizePolicy1);
        labelMagnitudeError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout2->addWidget(labelMagnitudeError, 1, 2, 1, 1);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout2->addItem(spacerItem2, 6, 1, 1, 1);

        label_2 = new QLabel(frameInformationM);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout2->addWidget(label_2, 4, 0, 1, 1);

        labelMagnitudeStatus = new QLabel(frameInformationM);
        labelMagnitudeStatus->setObjectName(QStringLiteral("labelMagnitudeStatus"));

        gridLayout2->addWidget(labelMagnitudeStatus, 4, 1, 1, 2);


        gridLayout->addWidget(frameInformationM, 2, 1, 1, 1);

        frameOrigins = new QFrame(originWidget);
        frameOrigins->setObjectName(QStringLiteral("frameOrigins"));
        sizePolicy.setHeightForWidth(frameOrigins->sizePolicy().hasHeightForWidth());
        frameOrigins->setSizePolicy(sizePolicy);
        frameOrigins->setFrameShape(QFrame::NoFrame);
        frameOrigins->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frameOrigins, 0, 0, 1, 1);

        tabWidget->addTab(originWidget, QString());
        fmWidget = new QSplitter();
        fmWidget->setObjectName(QStringLiteral("fmWidget"));
        fmWidget->setOrientation(Qt::Vertical);
        fmTop = new QFrame(fmWidget);
        fmTop->setObjectName(QStringLiteral("fmTop"));
        hboxLayout2 = new QHBoxLayout(fmTop);
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        fmTree = new QTreeWidget(fmTop);
        fmTree->setObjectName(QStringLiteral("fmTree"));
        sizePolicy.setHeightForWidth(fmTree->sizePolicy().hasHeightForWidth());
        fmTree->setSizePolicy(sizePolicy);
        fmTree->setAlternatingRowColors(true);
        fmTree->setRootIsDecorated(false);
        fmTree->setUniformRowHeights(true);
        fmTree->setItemsExpandable(false);

        hboxLayout2->addWidget(fmTree);

        fmInfo = new QFrame(fmTop);
        fmInfo->setObjectName(QStringLiteral("fmInfo"));
        sizePolicy3.setHeightForWidth(fmInfo->sizePolicy().hasHeightForWidth());
        fmInfo->setSizePolicy(sizePolicy3);
        fmInfo->setFrameShape(QFrame::NoFrame);
        fmInfo->setFrameShadow(QFrame::Plain);
        gridLayout3 = new QGridLayout(fmInfo);
#ifndef Q_OS_MAC
        gridLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout3->setObjectName(QStringLiteral("gridLayout3"));
        fmDist = new QLabel(fmInfo);
        fmDist->setObjectName(QStringLiteral("fmDist"));
        sizePolicy5.setHeightForWidth(fmDist->sizePolicy().hasHeightForWidth());
        fmDist->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmDist, 8, 1, 1, 3);

        fmMisfitL = new QLabel(fmInfo);
        fmMisfitL->setObjectName(QStringLiteral("fmMisfitL"));

        gridLayout3->addWidget(fmMisfitL, 7, 0, 1, 1);

        fmDistL = new QLabel(fmInfo);
        fmDistL->setObjectName(QStringLiteral("fmDistL"));

        gridLayout3->addWidget(fmDistL, 8, 0, 1, 1);

        fmFixCombo = new QComboBox(fmInfo);
        fmFixCombo->setObjectName(QStringLiteral("fmFixCombo"));

        gridLayout3->addWidget(fmFixCombo, 13, 1, 1, 3);

        fmNP2L = new QLabel(fmInfo);
        fmNP2L->setObjectName(QStringLiteral("fmNP2L"));

        gridLayout3->addWidget(fmNP2L, 1, 0, 1, 1);

        fmMethodL = new QLabel(fmInfo);
        fmMethodL->setObjectName(QStringLiteral("fmMethodL"));

        gridLayout3->addWidget(fmMethodL, 9, 0, 1, 1);

        fmCountL = new QLabel(fmInfo);
        fmCountL->setObjectName(QStringLiteral("fmCountL"));

        gridLayout3->addWidget(fmCountL, 6, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 50, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem3, 12, 0, 1, 1);

        fmFixButton = new QPushButton(fmInfo);
        fmFixButton->setObjectName(QStringLiteral("fmFixButton"));

        gridLayout3->addWidget(fmFixButton, 13, 0, 1, 1);

        fmGap = new QLabel(fmInfo);
        fmGap->setObjectName(QStringLiteral("fmGap"));
        sizePolicy5.setHeightForWidth(fmGap->sizePolicy().hasHeightForWidth());
        fmGap->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmGap, 5, 1, 1, 3);

        fmNP2 = new QLabel(fmInfo);
        fmNP2->setObjectName(QStringLiteral("fmNP2"));
        sizePolicy5.setHeightForWidth(fmNP2->sizePolicy().hasHeightForWidth());
        fmNP2->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmNP2, 1, 1, 1, 3);

        fmMode = new QLabel(fmInfo);
        fmMode->setObjectName(QStringLiteral("fmMode"));
        sizePolicy5.setHeightForWidth(fmMode->sizePolicy().hasHeightForWidth());
        fmMode->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmMode, 10, 1, 1, 3);

        fmStatus = new QLabel(fmInfo);
        fmStatus->setObjectName(QStringLiteral("fmStatus"));
        sizePolicy5.setHeightForWidth(fmStatus->sizePolicy().hasHeightForWidth());
        fmStatus->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmStatus, 11, 1, 1, 3);

        fmGapL = new QLabel(fmInfo);
        fmGapL->setObjectName(QStringLiteral("fmGapL"));

        gridLayout3->addWidget(fmGapL, 5, 0, 1, 1);

        fmNP1 = new QLabel(fmInfo);
        fmNP1->setObjectName(QStringLiteral("fmNP1"));
        sizePolicy5.setHeightForWidth(fmNP1->sizePolicy().hasHeightForWidth());
        fmNP1->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmNP1, 0, 1, 1, 3);

        fmMethod = new QLabel(fmInfo);
        fmMethod->setObjectName(QStringLiteral("fmMethod"));
        sizePolicy5.setHeightForWidth(fmMethod->sizePolicy().hasHeightForWidth());
        fmMethod->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmMethod, 9, 1, 1, 3);

        fmAutoButton = new QPushButton(fmInfo);
        fmAutoButton->setObjectName(QStringLiteral("fmAutoButton"));

        gridLayout3->addWidget(fmAutoButton, 14, 0, 1, 4);

        fmMisfit = new QLabel(fmInfo);
        fmMisfit->setObjectName(QStringLiteral("fmMisfit"));
        sizePolicy5.setHeightForWidth(fmMisfit->sizePolicy().hasHeightForWidth());
        fmMisfit->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmMisfit, 7, 1, 1, 3);

        fmNP1L = new QLabel(fmInfo);
        fmNP1L->setObjectName(QStringLiteral("fmNP1L"));

        gridLayout3->addWidget(fmNP1L, 0, 0, 1, 1);

        fmStatusL = new QLabel(fmInfo);
        fmStatusL->setObjectName(QStringLiteral("fmStatusL"));

        gridLayout3->addWidget(fmStatusL, 11, 0, 1, 1);

        fmModeL = new QLabel(fmInfo);
        fmModeL->setObjectName(QStringLiteral("fmModeL"));

        gridLayout3->addWidget(fmModeL, 10, 0, 1, 1);

        fmCount = new QLabel(fmInfo);
        fmCount->setObjectName(QStringLiteral("fmCount"));
        sizePolicy5.setHeightForWidth(fmCount->sizePolicy().hasHeightForWidth());
        fmCount->setSizePolicy(sizePolicy5);

        gridLayout3->addWidget(fmCount, 6, 1, 1, 3);

        fmTriggerButton = new QPushButton(fmInfo);
        fmTriggerButton->setObjectName(QStringLiteral("fmTriggerButton"));

        gridLayout3->addWidget(fmTriggerButton, 15, 0, 1, 4);


        hboxLayout2->addWidget(fmInfo);

        fmWidget->addWidget(fmTop);
        fmBottom = new QFrame(fmWidget);
        fmBottom->setObjectName(QStringLiteral("fmBottom"));
        hboxLayout3 = new QHBoxLayout(fmBottom);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout3->setContentsMargins(9, 9, 9, 9);
#endif
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        fmMap = new QFrame(fmBottom);
        fmMap->setObjectName(QStringLiteral("fmMap"));
        QSizePolicy sizePolicy6(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(5));
        sizePolicy6.setHorizontalStretch(1);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(fmMap->sizePolicy().hasHeightForWidth());
        fmMap->setSizePolicy(sizePolicy6);
        fmMap->setFrameShape(QFrame::StyledPanel);
        fmMap->setFrameShadow(QFrame::Raised);

        hboxLayout3->addWidget(fmMap);

        mtOriginInfo = new QGroupBox(fmBottom);
        mtOriginInfo->setObjectName(QStringLiteral("mtOriginInfo"));
        gridLayout4 = new QGridLayout(mtOriginInfo);
#ifndef Q_OS_MAC
        gridLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout4->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout4->setObjectName(QStringLiteral("gridLayout4"));
        mtOriginPhasesL = new QLabel(mtOriginInfo);
        mtOriginPhasesL->setObjectName(QStringLiteral("mtOriginPhasesL"));
        mtOriginPhasesL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginPhasesL, 6, 0, 1, 1);

        mtOriginDepth = new QLabel(mtOriginInfo);
        mtOriginDepth->setObjectName(QStringLiteral("mtOriginDepth"));
        mtOriginDepth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepth, 2, 1, 1, 1);

        mtOriginDepthL = new QLabel(mtOriginInfo);
        mtOriginDepthL->setObjectName(QStringLiteral("mtOriginDepthL"));
        sizePolicy1.setHeightForWidth(mtOriginDepthL->sizePolicy().hasHeightForWidth());
        mtOriginDepthL->setSizePolicy(sizePolicy1);
        mtOriginDepthL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthL, 2, 0, 1, 1);

        mtOriginLatUnit = new QLabel(mtOriginInfo);
        mtOriginLatUnit->setObjectName(QStringLiteral("mtOriginLatUnit"));
        sizePolicy1.setHeightForWidth(mtOriginLatUnit->sizePolicy().hasHeightForWidth());
        mtOriginLatUnit->setSizePolicy(sizePolicy1);
        mtOriginLatUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatUnit, 3, 2, 1, 1);

        mtOriginRegionL = new QLabel(mtOriginInfo);
        mtOriginRegionL->setObjectName(QStringLiteral("mtOriginRegionL"));

        gridLayout4->addWidget(mtOriginRegionL, 1, 0, 1, 1);

        mtOriginDepthError = new QLabel(mtOriginInfo);
        mtOriginDepthError->setObjectName(QStringLiteral("mtOriginDepthError"));
        mtOriginDepthError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthError, 2, 3, 1, 1);

        mtOriginAgencyL = new QLabel(mtOriginInfo);
        mtOriginAgencyL->setObjectName(QStringLiteral("mtOriginAgencyL"));
        mtOriginAgencyL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginAgencyL, 8, 0, 1, 1);

        mtOriginLon = new QLabel(mtOriginInfo);
        mtOriginLon->setObjectName(QStringLiteral("mtOriginLon"));
        mtOriginLon->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLon, 4, 1, 1, 1);

        mtOriginLatL = new QLabel(mtOriginInfo);
        mtOriginLatL->setObjectName(QStringLiteral("mtOriginLatL"));
        sizePolicy1.setHeightForWidth(mtOriginLatL->sizePolicy().hasHeightForWidth());
        mtOriginLatL->setSizePolicy(sizePolicy1);
        mtOriginLatL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatL, 3, 0, 1, 1);

        mtOriginPhases = new QLabel(mtOriginInfo);
        mtOriginPhases->setObjectName(QStringLiteral("mtOriginPhases"));
        mtOriginPhases->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginPhases, 6, 2, 1, 2);

        mtOriginTimeL = new QLabel(mtOriginInfo);
        mtOriginTimeL->setObjectName(QStringLiteral("mtOriginTimeL"));

        gridLayout4->addWidget(mtOriginTimeL, 0, 0, 1, 1);

        mtOriginTime = new QLabel(mtOriginInfo);
        mtOriginTime->setObjectName(QStringLiteral("mtOriginTime"));

        gridLayout4->addWidget(mtOriginTime, 0, 1, 1, 3);

        mtOriginRegion = new QLabel(mtOriginInfo);
        mtOriginRegion->setObjectName(QStringLiteral("mtOriginRegion"));
        sizePolicy5.setHeightForWidth(mtOriginRegion->sizePolicy().hasHeightForWidth());
        mtOriginRegion->setSizePolicy(sizePolicy5);

        gridLayout4->addWidget(mtOriginRegion, 1, 1, 1, 3);

        mtOriginAgency = new QLabel(mtOriginInfo);
        mtOriginAgency->setObjectName(QStringLiteral("mtOriginAgency"));
        mtOriginAgency->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginAgency, 8, 2, 1, 2);

        mtOriginStatusL = new QLabel(mtOriginInfo);
        mtOriginStatusL->setObjectName(QStringLiteral("mtOriginStatusL"));
        mtOriginStatusL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginStatusL, 9, 0, 1, 1);

        mtOriginLat = new QLabel(mtOriginInfo);
        mtOriginLat->setObjectName(QStringLiteral("mtOriginLat"));
        sizePolicy1.setHeightForWidth(mtOriginLat->sizePolicy().hasHeightForWidth());
        mtOriginLat->setSizePolicy(sizePolicy1);
        mtOriginLat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLat, 3, 1, 1, 1);

        mtOriginDepthUnit = new QLabel(mtOriginInfo);
        mtOriginDepthUnit->setObjectName(QStringLiteral("mtOriginDepthUnit"));
        mtOriginDepthUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginDepthUnit, 2, 2, 1, 1);

        mtOriginLatError = new QLabel(mtOriginInfo);
        mtOriginLatError->setObjectName(QStringLiteral("mtOriginLatError"));
        sizePolicy1.setHeightForWidth(mtOriginLatError->sizePolicy().hasHeightForWidth());
        mtOriginLatError->setSizePolicy(sizePolicy1);
        mtOriginLatError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLatError, 3, 3, 1, 1);

        mtOriginLonL = new QLabel(mtOriginInfo);
        mtOriginLonL->setObjectName(QStringLiteral("mtOriginLonL"));
        mtOriginLonL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonL, 4, 0, 1, 1);

        mtOriginStatus = new QLabel(mtOriginInfo);
        mtOriginStatus->setObjectName(QStringLiteral("mtOriginStatus"));
        mtOriginStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginStatus, 9, 2, 1, 2);

        mtOriginLonUnit = new QLabel(mtOriginInfo);
        mtOriginLonUnit->setObjectName(QStringLiteral("mtOriginLonUnit"));
        mtOriginLonUnit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonUnit, 4, 2, 1, 1);

        mtOriginLonError = new QLabel(mtOriginInfo);
        mtOriginLonError->setObjectName(QStringLiteral("mtOriginLonError"));
        mtOriginLonError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout4->addWidget(mtOriginLonError, 4, 3, 1, 1);

        spacerItem4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout4->addItem(spacerItem4, 10, 0, 1, 1);


        hboxLayout3->addWidget(mtOriginInfo);

        mtMagInfo = new QGroupBox(fmBottom);
        mtMagInfo->setObjectName(QStringLiteral("mtMagInfo"));
        sizePolicy3.setHeightForWidth(mtMagInfo->sizePolicy().hasHeightForWidth());
        mtMagInfo->setSizePolicy(sizePolicy3);
        gridLayout5 = new QGridLayout(mtMagInfo);
#ifndef Q_OS_MAC
        gridLayout5->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout5->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout5->setObjectName(QStringLiteral("gridLayout5"));
        mtMagTypeL = new QLabel(mtMagInfo);
        mtMagTypeL->setObjectName(QStringLiteral("mtMagTypeL"));
        sizePolicy1.setHeightForWidth(mtMagTypeL->sizePolicy().hasHeightForWidth());
        mtMagTypeL->setSizePolicy(sizePolicy1);
        mtMagTypeL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagTypeL, 0, 0, 1, 1);

        mtMagMethod = new QLabel(mtMagInfo);
        mtMagMethod->setObjectName(QStringLiteral("mtMagMethod"));
        sizePolicy5.setHeightForWidth(mtMagMethod->sizePolicy().hasHeightForWidth());
        mtMagMethod->setSizePolicy(sizePolicy5);
        mtMagMethod->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagMethod, 3, 1, 1, 2);

        mtMagCount = new QLabel(mtMagInfo);
        mtMagCount->setObjectName(QStringLiteral("mtMagCount"));

        gridLayout5->addWidget(mtMagCount, 2, 1, 1, 2);

        mtMagError = new QLabel(mtMagInfo);
        mtMagError->setObjectName(QStringLiteral("mtMagError"));
        sizePolicy1.setHeightForWidth(mtMagError->sizePolicy().hasHeightForWidth());
        mtMagError->setSizePolicy(sizePolicy1);
        mtMagError->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagError, 1, 2, 1, 1);

        spacerItem5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem5, 5, 1, 1, 1);

        spacerItem6 = new QSpacerItem(110, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout5->addItem(spacerItem6, 4, 0, 1, 1);

        mtMagCountL = new QLabel(mtMagInfo);
        mtMagCountL->setObjectName(QStringLiteral("mtMagCountL"));
        mtMagCountL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagCountL, 2, 0, 1, 1);

        buttonReleaseMw = new QPushButton(mtMagInfo);
        buttonReleaseMw->setObjectName(QStringLiteral("buttonReleaseMw"));

        gridLayout5->addWidget(buttonReleaseMw, 5, 2, 1, 1);

        mtMagMethodL = new QLabel(mtMagInfo);
        mtMagMethodL->setObjectName(QStringLiteral("mtMagMethodL"));
        mtMagMethodL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagMethodL, 3, 0, 1, 1);

        mtMagL = new QLabel(mtMagInfo);
        mtMagL->setObjectName(QStringLiteral("mtMagL"));
        sizePolicy1.setHeightForWidth(mtMagL->sizePolicy().hasHeightForWidth());
        mtMagL->setSizePolicy(sizePolicy1);
        mtMagL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout5->addWidget(mtMagL, 1, 0, 1, 1);

        mtMag = new QLabel(mtMagInfo);
        mtMag->setObjectName(QStringLiteral("mtMag"));
        sizePolicy1.setHeightForWidth(mtMag->sizePolicy().hasHeightForWidth());
        mtMag->setSizePolicy(sizePolicy1);

        gridLayout5->addWidget(mtMag, 1, 1, 1, 1);

        mtMagType = new QLabel(mtMagInfo);
        mtMagType->setObjectName(QStringLiteral("mtMagType"));

        gridLayout5->addWidget(mtMagType, 0, 1, 1, 2);

        buttonFixMw = new QPushButton(mtMagInfo);
        buttonFixMw->setObjectName(QStringLiteral("buttonFixMw"));

        gridLayout5->addWidget(buttonFixMw, 5, 0, 1, 1);

        buttonFixFmMw = new QPushButton(mtMagInfo);
        buttonFixFmMw->setObjectName(QStringLiteral("buttonFixFmMw"));

        gridLayout5->addWidget(buttonFixFmMw, 6, 0, 1, 1);


        hboxLayout3->addWidget(mtMagInfo);

        fmWidget->addWidget(fmBottom);
        tabWidget->addTab(fmWidget, QString());
        splitter->addWidget(tabWidget);

        hboxLayout->addWidget(splitter);


        retranslateUi(EventEdit);

        QMetaObject::connectSlotsByName(EventEdit);
    } // setupUi

    void retranslateUi(QWidget *EventEdit)
    {
        EventEdit->setWindowTitle(QApplication::translate("EventEdit", "Form", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        comboTypes->setToolTip(QApplication::translate("EventEdit", "Sets the type of the event. Selection changes are going to be sent immediately.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        labelPhasesValue->setText(QApplication::translate("EventEdit", "0", Q_NULLPTR));
        labelDepthError->setText(QApplication::translate("EventEdit", "+/- 0 km", Q_NULLPTR));
        labelLongitudeValue->setText(QApplication::translate("EventEdit", "0.00", Q_NULLPTR));
        labelOriginStatus->setText(QApplication::translate("EventEdit", "Origin Status:", Q_NULLPTR));
        labelRMSValue->setText(QApplication::translate("EventEdit", "0.0", Q_NULLPTR));
        labelAgency->setText(QApplication::translate("EventEdit", "Agency:", Q_NULLPTR));
        labelType->setText(QApplication::translate("EventEdit", "Type:", Q_NULLPTR));
        buttonFixOrigin->setText(QApplication::translate("EventEdit", "Fix", Q_NULLPTR));
        labelLatitudeValue->setText(QApplication::translate("EventEdit", "0.00", Q_NULLPTR));
        labelDepthUnit->setText(QApplication::translate("EventEdit", "km", Q_NULLPTR));
        labelDepth->setText(QApplication::translate("EventEdit", "Depth:", Q_NULLPTR));
        labelLatitudeError->setText(QApplication::translate("EventEdit", "+/- 0 km", Q_NULLPTR));
        labelTime->setText(QApplication::translate("EventEdit", "Time:", Q_NULLPTR));
        labelLongitudeError->setText(QApplication::translate("EventEdit", "+/- 0 km", Q_NULLPTR));
        labelLatitude->setText(QApplication::translate("EventEdit", "Latitude:", Q_NULLPTR));
        labelLongitudeUnit->setText(QApplication::translate("EventEdit", "\302\260 E", Q_NULLPTR));
        labelLongitude->setText(QApplication::translate("EventEdit", "Longitude:", Q_NULLPTR));
        labelAgencyValue->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonReleaseOrigin->setToolTip(QApplication::translate("EventEdit", "Unfixes a previously fixed preferred origin and lets scevent decide which origin to set preferred.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonReleaseOrigin->setText(QApplication::translate("EventEdit", "Unfix origin", Q_NULLPTR));
        labelRegionValue->setText(QApplication::translate("EventEdit", "Flinn-Engdahl region", Q_NULLPTR));
        labelLatitudeUnit->setText(QApplication::translate("EventEdit", "\302\260 N", Q_NULLPTR));
        labelTimeValue->setText(QApplication::translate("EventEdit", "1970-01-01 00:00:00", Q_NULLPTR));
        labelOriginStatusValue->setText(QString());
        labelPhases->setText(QApplication::translate("EventEdit", "Phase Count:", Q_NULLPTR));
        labelRegion->setText(QApplication::translate("EventEdit", "Region:", Q_NULLPTR));
        labelDepthValue->setText(QApplication::translate("EventEdit", "0", Q_NULLPTR));
        labelRMS->setText(QApplication::translate("EventEdit", "RMS Residual:", Q_NULLPTR));
        label->setText(QApplication::translate("EventEdit", "Type certainty:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonReleaseMagnitudeType->setToolTip(QApplication::translate("EventEdit", "Unfixes a previouly fixed magnitude type and lets scevent decide which magnitude to set preferred.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonReleaseMagnitudeType->setText(QApplication::translate("EventEdit", "Unfix type", Q_NULLPTR));
        labelMagnitudeMethod->setText(QApplication::translate("EventEdit", "Method:", Q_NULLPTR));
        labelMagnitude->setText(QApplication::translate("EventEdit", "Value:", Q_NULLPTR));
        labelMagnitudeCount->setText(QApplication::translate("EventEdit", "Count:", Q_NULLPTR));
        labelMagnitudeValue->setText(QApplication::translate("EventEdit", "0.00", Q_NULLPTR));
        labelMagnitudeType->setText(QApplication::translate("EventEdit", "Type:", Q_NULLPTR));
        labelMagnitudeMethodValue->setText(QString());
#ifndef QT_NO_TOOLTIP
        buttonFixMagnitudeType->setToolTip(QApplication::translate("EventEdit", "Use only magnitudes with the currently selected type as preferred magnitude.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonFixMagnitudeType->setText(QApplication::translate("EventEdit", "Fix type", Q_NULLPTR));
        labelMagnitudeTypeValue->setText(QApplication::translate("EventEdit", "-", Q_NULLPTR));
        labelMagnitudeCountValue->setText(QApplication::translate("EventEdit", "0", Q_NULLPTR));
        labelMagnitudeError->setText(QApplication::translate("EventEdit", "+/- 0", Q_NULLPTR));
        label_2->setText(QApplication::translate("EventEdit", "Status:", Q_NULLPTR));
        labelMagnitudeStatus->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(originWidget), QApplication::translate("EventEdit", "Origins", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmDist->setToolTip(QApplication::translate("EventEdit", "Station Distribution Ratio", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmDist->setText(QApplication::translate("EventEdit", "-", Q_NULLPTR));
        fmMisfitL->setText(QApplication::translate("EventEdit", "Misfit:", Q_NULLPTR));
        fmDistL->setText(QApplication::translate("EventEdit", "Distribution:", Q_NULLPTR));
        fmNP2L->setText(QApplication::translate("EventEdit", "NP2:", Q_NULLPTR));
        fmMethodL->setText(QApplication::translate("EventEdit", "Method:", Q_NULLPTR));
        fmCountL->setText(QApplication::translate("EventEdit", "Count:", Q_NULLPTR));
        fmFixButton->setText(QApplication::translate("EventEdit", "Fix FM", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmGap->setToolTip(QApplication::translate("EventEdit", "Azimuthal Gap", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmGap->setText(QApplication::translate("EventEdit", "-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmNP2->setToolTip(QApplication::translate("EventEdit", "Nodal Plane 2 (strike/dip/rake)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmNP2->setText(QApplication::translate("EventEdit", "-/-/-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmMode->setToolTip(QApplication::translate("EventEdit", "Evaluation Mode", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmMode->setText(QString());
#ifndef QT_NO_TOOLTIP
        fmStatus->setToolTip(QApplication::translate("EventEdit", "Evaluation Status", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmStatus->setText(QString());
        fmGapL->setText(QApplication::translate("EventEdit", "Azi. Gap:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmNP1->setToolTip(QApplication::translate("EventEdit", "Nodal Plane 1 (strike/dip/rake)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmNP1->setText(QApplication::translate("EventEdit", "-/-/-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmMethod->setToolTip(QApplication::translate("EventEdit", "Method ID", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmMethod->setText(QString());
        fmAutoButton->setText(QApplication::translate("EventEdit", "Automatic FM selection", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmMisfit->setToolTip(QApplication::translate("EventEdit", "Misfit", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmMisfit->setText(QApplication::translate("EventEdit", "-", Q_NULLPTR));
        fmNP1L->setText(QApplication::translate("EventEdit", "NP1:", Q_NULLPTR));
        fmStatusL->setText(QApplication::translate("EventEdit", "Status:", Q_NULLPTR));
        fmModeL->setText(QApplication::translate("EventEdit", "Mode:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        fmCount->setToolTip(QApplication::translate("EventEdit", "Station Polarity Count", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        fmCount->setText(QApplication::translate("EventEdit", "-", Q_NULLPTR));
        fmTriggerButton->setText(QApplication::translate("EventEdit", "Trigger Mw computation", Q_NULLPTR));
        mtOriginInfo->setTitle(QApplication::translate("EventEdit", "Derived Origin", Q_NULLPTR));
        mtOriginPhasesL->setText(QApplication::translate("EventEdit", "Phase Count:", Q_NULLPTR));
        mtOriginDepth->setText(QApplication::translate("EventEdit", "0", Q_NULLPTR));
        mtOriginDepthL->setText(QApplication::translate("EventEdit", "Depth:", Q_NULLPTR));
        mtOriginLatUnit->setText(QApplication::translate("EventEdit", "\302\260 N", Q_NULLPTR));
        mtOriginRegionL->setText(QApplication::translate("EventEdit", "Region:", Q_NULLPTR));
        mtOriginDepthError->setText(QApplication::translate("EventEdit", "+/- 0 km", Q_NULLPTR));
        mtOriginAgencyL->setText(QApplication::translate("EventEdit", "Agency:", Q_NULLPTR));
        mtOriginLon->setText(QApplication::translate("EventEdit", "0.00", Q_NULLPTR));
        mtOriginLatL->setText(QApplication::translate("EventEdit", "Latitude:", Q_NULLPTR));
        mtOriginPhases->setText(QApplication::translate("EventEdit", "0", Q_NULLPTR));
        mtOriginTimeL->setText(QApplication::translate("EventEdit", "Time:", Q_NULLPTR));
        mtOriginTime->setText(QApplication::translate("EventEdit", "1970-01-01 00:00:00", Q_NULLPTR));
        mtOriginRegion->setText(QApplication::translate("EventEdit", "Flinn-Engdahl region", Q_NULLPTR));
        mtOriginAgency->setText(QString());
        mtOriginStatusL->setText(QApplication::translate("EventEdit", "Origin Status:", Q_NULLPTR));
        mtOriginLat->setText(QApplication::translate("EventEdit", "0.00", Q_NULLPTR));
        mtOriginDepthUnit->setText(QApplication::translate("EventEdit", "km", Q_NULLPTR));
        mtOriginLatError->setText(QApplication::translate("EventEdit", "+/- 0 km", Q_NULLPTR));
        mtOriginLonL->setText(QApplication::translate("EventEdit", "Longitude:", Q_NULLPTR));
        mtOriginStatus->setText(QString());
        mtOriginLonUnit->setText(QApplication::translate("EventEdit", "\302\260 E", Q_NULLPTR));
        mtOriginLonError->setText(QApplication::translate("EventEdit", "+/- 0 km", Q_NULLPTR));
        mtMagInfo->setTitle(QApplication::translate("EventEdit", "Magnitude", Q_NULLPTR));
        mtMagTypeL->setText(QApplication::translate("EventEdit", "Type:", Q_NULLPTR));
        mtMagMethod->setText(QApplication::translate("EventEdit", "-", Q_NULLPTR));
        mtMagCount->setText(QApplication::translate("EventEdit", "0", Q_NULLPTR));
        mtMagError->setText(QApplication::translate("EventEdit", "+/- 0", Q_NULLPTR));
        mtMagCountL->setText(QApplication::translate("EventEdit", "Count:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonReleaseMw->setToolTip(QApplication::translate("EventEdit", "Unfixes a previously fixed moment magnitude as preferred magnitude and lets scevent decide which magnitude (part of the preferred origin) to set preferred.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonReleaseMw->setText(QApplication::translate("EventEdit", "Unfix type", Q_NULLPTR));
        mtMagMethodL->setText(QApplication::translate("EventEdit", "Method:", Q_NULLPTR));
        mtMagL->setText(QApplication::translate("EventEdit", "Value:", Q_NULLPTR));
        mtMag->setText(QApplication::translate("EventEdit", "0.00", Q_NULLPTR));
        mtMagType->setText(QApplication::translate("EventEdit", "-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonFixMw->setToolTip(QApplication::translate("EventEdit", "Fixes the moment magnitude of the current preferred focal mechanism as preferred magnitude if available.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonFixMw->setText(QApplication::translate("EventEdit", "Fix Mw type", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        buttonFixFmMw->setToolTip(QApplication::translate("EventEdit", "Fixes currently selected focal mechanism and the associated moment magnitude as preferred magnitude if available.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        buttonFixFmMw->setText(QApplication::translate("EventEdit", "Fix FM + Mw type", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(fmWidget), QApplication::translate("EventEdit", "Focal Mechanisms", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EventEdit: public Ui_EventEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTEDIT_H
