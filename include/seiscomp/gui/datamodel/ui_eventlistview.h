/********************************************************************************
** Form generated from reading UI file 'eventlistview.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTLISTVIEW_H
#define UI_EVENTLISTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EventListView
{
public:
    QAction *actionCopyRowToClipboard;
    QVBoxLayout *vboxLayout;
    QFrame *frameList;
    QFrame *frameControls;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QToolButton *btnClear;
    QToolButton *btnFilter;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QSpinBox *spinBox;
    QToolButton *btnReadDays;
    QSpacerItem *spacerItem1;
    QLabel *label;
    QDateTimeEdit *dateTimeEditStart;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEditEnd;
    QToolButton *btnReadInterval;
    QFrame *frameCustomControls;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QCheckBox *cbHideOther;
    QSpacerItem *spacerItem2;
    QCheckBox *cbHideForeign;
    QSpacerItem *spacerItem3;
    QCheckBox *cbShowLatestOnly;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout2;
    QFrame *frameRegionFilter;
    QHBoxLayout *hboxLayout3;
    QCheckBox *cbFilterRegions;
    QComboBox *cbFilterRegionMode;
    QComboBox *lstFilterRegions;
    QToolButton *btnChangeRegion;
    QLabel *lbFilterRegions;
    QSpacerItem *spacerItem5;

    void setupUi(QWidget *EventListView)
    {
        if (EventListView->objectName().isEmpty())
            EventListView->setObjectName(QStringLiteral("EventListView"));
        EventListView->resize(802, 710);
        actionCopyRowToClipboard = new QAction(EventListView);
        actionCopyRowToClipboard->setObjectName(QStringLiteral("actionCopyRowToClipboard"));
        vboxLayout = new QVBoxLayout(EventListView);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        frameList = new QFrame(EventListView);
        frameList->setObjectName(QStringLiteral("frameList"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(frameList->sizePolicy().hasHeightForWidth());
        frameList->setSizePolicy(sizePolicy);
        frameList->setFrameShape(QFrame::NoFrame);
        frameList->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frameList);

        frameControls = new QFrame(EventListView);
        frameControls->setObjectName(QStringLiteral("frameControls"));
        frameControls->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(frameControls);
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        btnClear = new QToolButton(frameControls);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setEnabled(false);
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(0));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(btnClear);

        btnFilter = new QToolButton(frameControls);
        btnFilter->setObjectName(QStringLiteral("btnFilter"));
        sizePolicy1.setHeightForWidth(btnFilter->sizePolicy().hasHeightForWidth());
        btnFilter->setSizePolicy(sizePolicy1);
        const QIcon icon = QIcon(QString::fromUtf8(":/icons/icons/filter2.png"));
        btnFilter->setIcon(icon);

        hboxLayout->addWidget(btnFilter);

        spacerItem = new QSpacerItem(16, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        label_3 = new QLabel(frameControls);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label_3);

        spinBox = new QSpinBox(frameControls);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        QSizePolicy sizePolicy3(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(0));
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy3);
        spinBox->setMinimum(1);

        hboxLayout->addWidget(spinBox);

        btnReadDays = new QToolButton(frameControls);
        btnReadDays->setObjectName(QStringLiteral("btnReadDays"));
        QSizePolicy sizePolicy4(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(0));
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(btnReadDays->sizePolicy().hasHeightForWidth());
        btnReadDays->setSizePolicy(sizePolicy4);
        btnReadDays->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(btnReadDays);

        spacerItem1 = new QSpacerItem(16, 29, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        label = new QLabel(frameControls);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label);

        dateTimeEditStart = new QDateTimeEdit(frameControls);
        dateTimeEditStart->setObjectName(QStringLiteral("dateTimeEditStart"));
        dateTimeEditStart->setCurrentSection(QDateTimeEdit::YearSection);

        hboxLayout->addWidget(dateTimeEditStart);

        label_2 = new QLabel(frameControls);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        hboxLayout->addWidget(label_2);

        dateTimeEditEnd = new QDateTimeEdit(frameControls);
        dateTimeEditEnd->setObjectName(QStringLiteral("dateTimeEditEnd"));
        dateTimeEditEnd->setCurrentSection(QDateTimeEdit::YearSection);

        hboxLayout->addWidget(dateTimeEditEnd);

        btnReadInterval = new QToolButton(frameControls);
        btnReadInterval->setObjectName(QStringLiteral("btnReadInterval"));
        sizePolicy4.setHeightForWidth(btnReadInterval->sizePolicy().hasHeightForWidth());
        btnReadInterval->setSizePolicy(sizePolicy4);
        btnReadInterval->setMinimumSize(QSize(50, 0));

        hboxLayout->addWidget(btnReadInterval);


        vboxLayout1->addLayout(hboxLayout);


        vboxLayout->addWidget(frameControls);

        frameCustomControls = new QFrame(EventListView);
        frameCustomControls->setObjectName(QStringLiteral("frameCustomControls"));
        frameCustomControls->setFrameShape(QFrame::NoFrame);
        frameCustomControls->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frameCustomControls);

        frame = new QFrame(EventListView);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        vboxLayout->addWidget(frame);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        cbHideOther = new QCheckBox(EventListView);
        cbHideOther->setObjectName(QStringLiteral("cbHideOther"));
        cbHideOther->setChecked(true);

        hboxLayout1->addWidget(cbHideOther);

        spacerItem2 = new QSpacerItem(16, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem2);

        cbHideForeign = new QCheckBox(EventListView);
        cbHideForeign->setObjectName(QStringLiteral("cbHideForeign"));
        cbHideForeign->setChecked(false);

        hboxLayout1->addWidget(cbHideForeign);

        spacerItem3 = new QSpacerItem(16, 23, QSizePolicy::Minimum, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem3);

        cbShowLatestOnly = new QCheckBox(EventListView);
        cbShowLatestOnly->setObjectName(QStringLiteral("cbShowLatestOnly"));

        hboxLayout1->addWidget(cbShowLatestOnly);

        spacerItem4 = new QSpacerItem(144, 23, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem4);


        vboxLayout->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        frameRegionFilter = new QFrame(EventListView);
        frameRegionFilter->setObjectName(QStringLiteral("frameRegionFilter"));
        frameRegionFilter->setFrameShape(QFrame::NoFrame);
        frameRegionFilter->setFrameShadow(QFrame::Raised);
        hboxLayout3 = new QHBoxLayout(frameRegionFilter);
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        cbFilterRegions = new QCheckBox(frameRegionFilter);
        cbFilterRegions->setObjectName(QStringLiteral("cbFilterRegions"));

        hboxLayout3->addWidget(cbFilterRegions);

        cbFilterRegionMode = new QComboBox(frameRegionFilter);
        cbFilterRegionMode->setObjectName(QStringLiteral("cbFilterRegionMode"));

        hboxLayout3->addWidget(cbFilterRegionMode);

        lstFilterRegions = new QComboBox(frameRegionFilter);
        lstFilterRegions->setObjectName(QStringLiteral("lstFilterRegions"));

        hboxLayout3->addWidget(lstFilterRegions);

        btnChangeRegion = new QToolButton(frameRegionFilter);
        btnChangeRegion->setObjectName(QStringLiteral("btnChangeRegion"));

        hboxLayout3->addWidget(btnChangeRegion);

        lbFilterRegions = new QLabel(frameRegionFilter);
        lbFilterRegions->setObjectName(QStringLiteral("lbFilterRegions"));

        hboxLayout3->addWidget(lbFilterRegions);


        hboxLayout2->addWidget(frameRegionFilter);

        spacerItem5 = new QSpacerItem(351, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem5);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(EventListView);

        QMetaObject::connectSlotsByName(EventListView);
    } // setupUi

    void retranslateUi(QWidget *EventListView)
    {
        EventListView->setWindowTitle(QApplication::translate("EventListView", "Event List", Q_NULLPTR));
        actionCopyRowToClipboard->setText(QApplication::translate("EventListView", "copyRowToClipboard", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        actionCopyRowToClipboard->setShortcut(QApplication::translate("EventListView", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
#ifndef QT_NO_TOOLTIP
        btnClear->setToolTip(QApplication::translate("EventListView", "Removes all events from the list", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnClear->setText(QApplication::translate("EventListView", "Clear list", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnFilter->setToolTip(QApplication::translate("EventListView", "Configures the server-side event filter", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnFilter->setText(QApplication::translate("EventListView", "Filter", Q_NULLPTR));
        label_3->setText(QApplication::translate("EventListView", "Last days:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnReadDays->setToolTip(QApplication::translate("EventListView", "Reads the events of the last n days using the \"Last days:\" value", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnReadDays->setText(QApplication::translate("EventListView", "Read", Q_NULLPTR));
        label->setText(QApplication::translate("EventListView", "From:", Q_NULLPTR));
        dateTimeEditStart->setDisplayFormat(QApplication::translate("EventListView", "yyyy/MM/dd HH:mm:ss", Q_NULLPTR));
        label_2->setText(QApplication::translate("EventListView", "To:", Q_NULLPTR));
        dateTimeEditEnd->setDisplayFormat(QApplication::translate("EventListView", "yyyy/MM/dd HH:mm:ss", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnReadInterval->setToolTip(QApplication::translate("EventListView", "Reads the events of the given timespan using the \"From:\" and \"To:\" dates", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnReadInterval->setText(QApplication::translate("EventListView", "Read", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbHideOther->setToolTip(QApplication::translate("EventListView", "Hides/shows events with EventType set to OTHER/NOT_EXISTING", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbHideOther->setText(QApplication::translate("EventListView", "Hide other/fake events", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbHideForeign->setToolTip(QApplication::translate("EventListView", "Hides/shows events from non preferred agencies", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbHideForeign->setText(QApplication::translate("EventListView", "Show only own events", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbShowLatestOnly->setToolTip(QApplication::translate("EventListView", "Enables/disables the display of only one origin per agency (the latest one) or all origins", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbShowLatestOnly->setText(QApplication::translate("EventListView", "Show only latest/preferred origin per agency", Q_NULLPTR));
        cbFilterRegions->setText(QApplication::translate("EventListView", "Hide events", Q_NULLPTR));
        cbFilterRegionMode->clear();
        cbFilterRegionMode->insertItems(0, QStringList()
         << QApplication::translate("EventListView", "outside", Q_NULLPTR)
         << QApplication::translate("EventListView", "inside", Q_NULLPTR)
        );
        btnChangeRegion->setText(QApplication::translate("EventListView", "...", Q_NULLPTR));
        lbFilterRegions->setText(QApplication::translate("EventListView", "region", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EventListView: public Ui_EventListView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTLISTVIEW_H
