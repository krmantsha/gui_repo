/********************************************************************************
** Form generated from reading UI file 'eventsummary.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTSUMMARY_H
#define UI_EVENTSUMMARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventSummary
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *originTime;
    QLabel *timeAgo;
    QHBoxLayout *hboxLayout;
    QLabel *magnitudeText;
    QLabel *magnitude;
    QLabel *region;
    QLabel *nearestCity;
    QHBoxLayout *hboxLayout1;
    QLabel *depthText;
    QLabel *depth;
    QHBoxLayout *hboxLayout2;
    QLabel *latitude;
    QSpacerItem *spacerItem;
    QLabel *longitude;
    QSpacerItem *spacerItem1;
    QLabel *type;
    QFrame *map;
    QLabel *labelOpComment;
    QFrame *labelOpCommentSeparator;
    QFrame *magnitudes;
    QFrame *separator1;
    QLabel *thisLocationText;
    QHBoxLayout *hboxLayout3;
    QLabel *phaseCountText;
    QLabel *phaseCount;
    QHBoxLayout *hboxLayout4;
    QLabel *azimuthalGapText;
    QLabel *azimuthalGap;
    QHBoxLayout *hboxLayout5;
    QLabel *rmsText;
    QLabel *rms;
    QHBoxLayout *hboxLayout6;
    QLabel *minimumDistanceText;
    QLabel *minimumDistance;
    QHBoxLayout *hboxLayout7;
    QLabel *maximumDistanceText;
    QLabel *maximumDistance;
    QFrame *separator2;
    QHBoxLayout *hboxLayout8;
    QLabel *firstLocationText;
    QLabel *firstLocation;
    QHBoxLayout *hboxLayout9;
    QLabel *eventIDText;
    QLabel *eventID;
    QHBoxLayout *hboxLayout10;
    QLabel *originIDText;
    QLabel *originID;
    QHBoxLayout *hboxLayout11;
    QLabel *originIDText_2;
    QLabel *agencyID;
    QHBoxLayout *hboxLayout12;
    QLabel *state;
    QLabel *mode;
    QFrame *focalMechanism;
    QVBoxLayout *vboxLayout1;
    QFrame *separator3;
    QHBoxLayout *hboxLayout13;
    QVBoxLayout *vboxLayout2;
    QFrame *frame;
    QHBoxLayout *hboxLayout14;
    QLabel *momentTensor;
    QLabel *label;
    QSpacerItem *spacerItem2;
    QVBoxLayout *vboxLayout3;
    QVBoxLayout *vboxLayout4;
    QLabel *mw;
    QLabel *fmDepth;
    QSpacerItem *spacerItem3;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout15;
    QSpacerItem *spacerItem5;
    QPushButton *exportButton;

    void setupUi(QWidget *EventSummary)
    {
        if (EventSummary->objectName().isEmpty())
            EventSummary->setObjectName(QStringLiteral("EventSummary"));
        EventSummary->resize(412, 762);
        vboxLayout = new QVBoxLayout(EventSummary);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        originTime = new QLabel(EventSummary);
        originTime->setObjectName(QStringLiteral("originTime"));

        vboxLayout->addWidget(originTime);

        timeAgo = new QLabel(EventSummary);
        timeAgo->setObjectName(QStringLiteral("timeAgo"));

        vboxLayout->addWidget(timeAgo);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        magnitudeText = new QLabel(EventSummary);
        magnitudeText->setObjectName(QStringLiteral("magnitudeText"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(magnitudeText->sizePolicy().hasHeightForWidth());
        magnitudeText->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(magnitudeText);

        magnitude = new QLabel(EventSummary);
        magnitude->setObjectName(QStringLiteral("magnitude"));

        hboxLayout->addWidget(magnitude);


        vboxLayout->addLayout(hboxLayout);

        region = new QLabel(EventSummary);
        region->setObjectName(QStringLiteral("region"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(13), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(region->sizePolicy().hasHeightForWidth());
        region->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(region);

        nearestCity = new QLabel(EventSummary);
        nearestCity->setObjectName(QStringLiteral("nearestCity"));

        vboxLayout->addWidget(nearestCity);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        depthText = new QLabel(EventSummary);
        depthText->setObjectName(QStringLiteral("depthText"));
        sizePolicy.setHeightForWidth(depthText->sizePolicy().hasHeightForWidth());
        depthText->setSizePolicy(sizePolicy);

        hboxLayout1->addWidget(depthText);

        depth = new QLabel(EventSummary);
        depth->setObjectName(QStringLiteral("depth"));

        hboxLayout1->addWidget(depth);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        latitude = new QLabel(EventSummary);
        latitude->setObjectName(QStringLiteral("latitude"));

        hboxLayout2->addWidget(latitude);

        spacerItem = new QSpacerItem(2, 5, QSizePolicy::Maximum, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem);

        longitude = new QLabel(EventSummary);
        longitude->setObjectName(QStringLiteral("longitude"));

        hboxLayout2->addWidget(longitude);

        spacerItem1 = new QSpacerItem(2, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);


        vboxLayout->addLayout(hboxLayout2);

        type = new QLabel(EventSummary);
        type->setObjectName(QStringLiteral("type"));
        sizePolicy1.setHeightForWidth(type->sizePolicy().hasHeightForWidth());
        type->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(type);

        map = new QFrame(EventSummary);
        map->setObjectName(QStringLiteral("map"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(map->sizePolicy().hasHeightForWidth());
        map->setSizePolicy(sizePolicy2);
        map->setFrameShape(QFrame::NoFrame);
        map->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(map);

        labelOpComment = new QLabel(EventSummary);
        labelOpComment->setObjectName(QStringLiteral("labelOpComment"));
        sizePolicy1.setHeightForWidth(labelOpComment->sizePolicy().hasHeightForWidth());
        labelOpComment->setSizePolicy(sizePolicy1);
        labelOpComment->setWordWrap(true);

        vboxLayout->addWidget(labelOpComment);

        labelOpCommentSeparator = new QFrame(EventSummary);
        labelOpCommentSeparator->setObjectName(QStringLiteral("labelOpCommentSeparator"));
        labelOpCommentSeparator->setFrameShape(QFrame::HLine);
        labelOpCommentSeparator->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(labelOpCommentSeparator);

        magnitudes = new QFrame(EventSummary);
        magnitudes->setObjectName(QStringLiteral("magnitudes"));
        magnitudes->setFrameShape(QFrame::NoFrame);
        magnitudes->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(magnitudes);

        separator1 = new QFrame(EventSummary);
        separator1->setObjectName(QStringLiteral("separator1"));
        separator1->setFrameShape(QFrame::HLine);
        separator1->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(separator1);

        thisLocationText = new QLabel(EventSummary);
        thisLocationText->setObjectName(QStringLiteral("thisLocationText"));

        vboxLayout->addWidget(thisLocationText);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        phaseCountText = new QLabel(EventSummary);
        phaseCountText->setObjectName(QStringLiteral("phaseCountText"));

        hboxLayout3->addWidget(phaseCountText);

        phaseCount = new QLabel(EventSummary);
        phaseCount->setObjectName(QStringLiteral("phaseCount"));

        hboxLayout3->addWidget(phaseCount);


        vboxLayout->addLayout(hboxLayout3);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setContentsMargins(0, 0, 0, 0);
        hboxLayout4->setObjectName(QStringLiteral("hboxLayout4"));
        azimuthalGapText = new QLabel(EventSummary);
        azimuthalGapText->setObjectName(QStringLiteral("azimuthalGapText"));

        hboxLayout4->addWidget(azimuthalGapText);

        azimuthalGap = new QLabel(EventSummary);
        azimuthalGap->setObjectName(QStringLiteral("azimuthalGap"));

        hboxLayout4->addWidget(azimuthalGap);


        vboxLayout->addLayout(hboxLayout4);

        hboxLayout5 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout5->setSpacing(6);
#endif
        hboxLayout5->setContentsMargins(0, 0, 0, 0);
        hboxLayout5->setObjectName(QStringLiteral("hboxLayout5"));
        rmsText = new QLabel(EventSummary);
        rmsText->setObjectName(QStringLiteral("rmsText"));

        hboxLayout5->addWidget(rmsText);

        rms = new QLabel(EventSummary);
        rms->setObjectName(QStringLiteral("rms"));

        hboxLayout5->addWidget(rms);


        vboxLayout->addLayout(hboxLayout5);

        hboxLayout6 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout6->setSpacing(6);
#endif
        hboxLayout6->setContentsMargins(0, 0, 0, 0);
        hboxLayout6->setObjectName(QStringLiteral("hboxLayout6"));
        minimumDistanceText = new QLabel(EventSummary);
        minimumDistanceText->setObjectName(QStringLiteral("minimumDistanceText"));

        hboxLayout6->addWidget(minimumDistanceText);

        minimumDistance = new QLabel(EventSummary);
        minimumDistance->setObjectName(QStringLiteral("minimumDistance"));

        hboxLayout6->addWidget(minimumDistance);


        vboxLayout->addLayout(hboxLayout6);

        hboxLayout7 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout7->setSpacing(6);
#endif
        hboxLayout7->setContentsMargins(0, 0, 0, 0);
        hboxLayout7->setObjectName(QStringLiteral("hboxLayout7"));
        maximumDistanceText = new QLabel(EventSummary);
        maximumDistanceText->setObjectName(QStringLiteral("maximumDistanceText"));

        hboxLayout7->addWidget(maximumDistanceText);

        maximumDistance = new QLabel(EventSummary);
        maximumDistance->setObjectName(QStringLiteral("maximumDistance"));

        hboxLayout7->addWidget(maximumDistance);


        vboxLayout->addLayout(hboxLayout7);

        separator2 = new QFrame(EventSummary);
        separator2->setObjectName(QStringLiteral("separator2"));
        separator2->setFrameShape(QFrame::HLine);
        separator2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(separator2);

        hboxLayout8 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout8->setSpacing(6);
#endif
        hboxLayout8->setContentsMargins(0, 0, 0, 0);
        hboxLayout8->setObjectName(QStringLiteral("hboxLayout8"));
        firstLocationText = new QLabel(EventSummary);
        firstLocationText->setObjectName(QStringLiteral("firstLocationText"));

        hboxLayout8->addWidget(firstLocationText);

        firstLocation = new QLabel(EventSummary);
        firstLocation->setObjectName(QStringLiteral("firstLocation"));

        hboxLayout8->addWidget(firstLocation);


        vboxLayout->addLayout(hboxLayout8);

        hboxLayout9 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout9->setSpacing(6);
#endif
        hboxLayout9->setContentsMargins(0, 0, 0, 0);
        hboxLayout9->setObjectName(QStringLiteral("hboxLayout9"));
        eventIDText = new QLabel(EventSummary);
        eventIDText->setObjectName(QStringLiteral("eventIDText"));

        hboxLayout9->addWidget(eventIDText);

        eventID = new QLabel(EventSummary);
        eventID->setObjectName(QStringLiteral("eventID"));
        sizePolicy1.setHeightForWidth(eventID->sizePolicy().hasHeightForWidth());
        eventID->setSizePolicy(sizePolicy1);

        hboxLayout9->addWidget(eventID);


        vboxLayout->addLayout(hboxLayout9);

        hboxLayout10 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout10->setSpacing(6);
#endif
        hboxLayout10->setContentsMargins(0, 0, 0, 0);
        hboxLayout10->setObjectName(QStringLiteral("hboxLayout10"));
        originIDText = new QLabel(EventSummary);
        originIDText->setObjectName(QStringLiteral("originIDText"));

        hboxLayout10->addWidget(originIDText);

        originID = new QLabel(EventSummary);
        originID->setObjectName(QStringLiteral("originID"));
        sizePolicy1.setHeightForWidth(originID->sizePolicy().hasHeightForWidth());
        originID->setSizePolicy(sizePolicy1);

        hboxLayout10->addWidget(originID);


        vboxLayout->addLayout(hboxLayout10);

        hboxLayout11 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout11->setSpacing(6);
#endif
        hboxLayout11->setContentsMargins(0, 0, 0, 0);
        hboxLayout11->setObjectName(QStringLiteral("hboxLayout11"));
        originIDText_2 = new QLabel(EventSummary);
        originIDText_2->setObjectName(QStringLiteral("originIDText_2"));

        hboxLayout11->addWidget(originIDText_2);

        agencyID = new QLabel(EventSummary);
        agencyID->setObjectName(QStringLiteral("agencyID"));
        sizePolicy1.setHeightForWidth(agencyID->sizePolicy().hasHeightForWidth());
        agencyID->setSizePolicy(sizePolicy1);

        hboxLayout11->addWidget(agencyID);


        vboxLayout->addLayout(hboxLayout11);

        hboxLayout12 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout12->setSpacing(6);
#endif
        hboxLayout12->setContentsMargins(0, 0, 0, 0);
        hboxLayout12->setObjectName(QStringLiteral("hboxLayout12"));
        state = new QLabel(EventSummary);
        state->setObjectName(QStringLiteral("state"));

        hboxLayout12->addWidget(state);

        mode = new QLabel(EventSummary);
        mode->setObjectName(QStringLiteral("mode"));
        sizePolicy1.setHeightForWidth(mode->sizePolicy().hasHeightForWidth());
        mode->setSizePolicy(sizePolicy1);

        hboxLayout12->addWidget(mode);


        vboxLayout->addLayout(hboxLayout12);

        focalMechanism = new QFrame(EventSummary);
        focalMechanism->setObjectName(QStringLiteral("focalMechanism"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(1));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(focalMechanism->sizePolicy().hasHeightForWidth());
        focalMechanism->setSizePolicy(sizePolicy3);
        focalMechanism->setMinimumSize(QSize(16, 60));
        focalMechanism->setFrameShape(QFrame::NoFrame);
        focalMechanism->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(focalMechanism);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        separator3 = new QFrame(focalMechanism);
        separator3->setObjectName(QStringLiteral("separator3"));
        separator3->setFrameShape(QFrame::HLine);
        separator3->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(separator3);

        hboxLayout13 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout13->setSpacing(6);
#endif
        hboxLayout13->setContentsMargins(0, 0, 0, 0);
        hboxLayout13->setObjectName(QStringLiteral("hboxLayout13"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(0);
#ifndef Q_OS_MAC
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        frame = new QFrame(focalMechanism);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        hboxLayout14 = new QHBoxLayout(frame);
        hboxLayout14->setSpacing(0);
        hboxLayout14->setContentsMargins(0, 0, 0, 0);
        hboxLayout14->setObjectName(QStringLiteral("hboxLayout14"));
        momentTensor = new QLabel(frame);
        momentTensor->setObjectName(QStringLiteral("momentTensor"));
        momentTensor->setEnabled(true);
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(0), static_cast<QSizePolicy::Policy>(0));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(momentTensor->sizePolicy().hasHeightForWidth());
        momentTensor->setSizePolicy(sizePolicy4);
        momentTensor->setMinimumSize(QSize(42, 42));
        momentTensor->setMaximumSize(QSize(42, 42));
        momentTensor->setFrameShape(QFrame::NoFrame);
        momentTensor->setFrameShadow(QFrame::Sunken);

        hboxLayout14->addWidget(momentTensor);

        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        hboxLayout14->addWidget(label);


        vboxLayout2->addWidget(frame);

        spacerItem2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        hboxLayout13->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(0);
        vboxLayout3->setContentsMargins(0, 0, 0, 0);
        vboxLayout3->setObjectName(QStringLiteral("vboxLayout3"));
        vboxLayout4 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout4->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout4->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout4->setObjectName(QStringLiteral("vboxLayout4"));
        mw = new QLabel(focalMechanism);
        mw->setObjectName(QStringLiteral("mw"));
        QSizePolicy sizePolicy5(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(mw->sizePolicy().hasHeightForWidth());
        mw->setSizePolicy(sizePolicy5);

        vboxLayout4->addWidget(mw);

        fmDepth = new QLabel(focalMechanism);
        fmDepth->setObjectName(QStringLiteral("fmDepth"));
        sizePolicy5.setHeightForWidth(fmDepth->sizePolicy().hasHeightForWidth());
        fmDepth->setSizePolicy(sizePolicy5);

        vboxLayout4->addWidget(fmDepth);


        vboxLayout3->addLayout(vboxLayout4);

        spacerItem3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout3->addItem(spacerItem3);


        hboxLayout13->addLayout(vboxLayout3);


        vboxLayout1->addLayout(hboxLayout13);


        vboxLayout->addWidget(focalMechanism);

        spacerItem4 = new QSpacerItem(20, 51, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem4);

        hboxLayout15 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout15->setSpacing(6);
#endif
        hboxLayout15->setContentsMargins(0, 0, 0, 0);
        hboxLayout15->setObjectName(QStringLiteral("hboxLayout15"));
        spacerItem5 = new QSpacerItem(10, 1, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout15->addItem(spacerItem5);

        exportButton = new QPushButton(EventSummary);
        exportButton->setObjectName(QStringLiteral("exportButton"));
        exportButton->setIconSize(QSize(46, 32));

        hboxLayout15->addWidget(exportButton);


        vboxLayout->addLayout(hboxLayout15);


        retranslateUi(EventSummary);

        QMetaObject::connectSlotsByName(EventSummary);
    } // setupUi

    void retranslateUi(QWidget *EventSummary)
    {
        EventSummary->setWindowTitle(QApplication::translate("EventSummary", "Form", Q_NULLPTR));
        originTime->setText(QApplication::translate("EventSummary", "1970/01/01 - 00:00:00", Q_NULLPTR));
        timeAgo->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        magnitudeText->setText(QApplication::translate("EventSummary", "M", Q_NULLPTR));
        magnitude->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        region->setText(QApplication::translate("EventSummary", "...", Q_NULLPTR));
        nearestCity->setText(QApplication::translate("EventSummary", "200 km SW of City XYZ", Q_NULLPTR));
        depthText->setText(QApplication::translate("EventSummary", "Depth", Q_NULLPTR));
        depth->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        latitude->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        longitude->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        type->setText(QString());
        labelOpComment->setText(QString());
        thisLocationText->setText(QApplication::translate("EventSummary", "Location:", Q_NULLPTR));
        phaseCountText->setText(QApplication::translate("EventSummary", "Phases:", Q_NULLPTR));
        phaseCount->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        azimuthalGapText->setText(QApplication::translate("EventSummary", "Az. Gap:", Q_NULLPTR));
        azimuthalGap->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        rmsText->setText(QApplication::translate("EventSummary", "RMS Res.:", Q_NULLPTR));
        rms->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        minimumDistanceText->setText(QApplication::translate("EventSummary", "Min. Dist.:", Q_NULLPTR));
        minimumDistance->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        maximumDistanceText->setText(QApplication::translate("EventSummary", "Max. Dist.:", Q_NULLPTR));
        maximumDistance->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        firstLocationText->setText(QApplication::translate("EventSummary", "First Location:", Q_NULLPTR));
        firstLocation->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        eventIDText->setText(QApplication::translate("EventSummary", "Event ID:", Q_NULLPTR));
        eventID->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        originIDText->setText(QApplication::translate("EventSummary", "Origin ID:", Q_NULLPTR));
        originID->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        originIDText_2->setText(QApplication::translate("EventSummary", "Agency ID:", Q_NULLPTR));
        agencyID->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        state->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        mode->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        momentTensor->setText(QString());
        label->setText(QString());
        mw->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
        fmDepth->setText(QApplication::translate("EventSummary", "-", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        exportButton->setToolTip(QApplication::translate("EventSummary", "Run configured script with current event", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        exportButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EventSummary: public Ui_EventSummary {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTSUMMARY_H
