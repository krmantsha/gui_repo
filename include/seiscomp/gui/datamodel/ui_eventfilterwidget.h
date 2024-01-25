/********************************************************************************
** Form generated from reading UI file 'eventfilterwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTFILTERWIDGET_H
#define UI_EVENTFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "seiscomp/gui/core/optionaldoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_EventFilter
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    Seiscomp::Gui::OptionalDoubleSpinBox *toLatitude;
    QFrame *frame;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromMagnitude;
    QLabel *label_4;
    QLabel *label_15;
    Seiscomp::Gui::OptionalDoubleSpinBox *toLongitude;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromDepth;
    QFrame *frame_2;
    QLabel *label;
    Seiscomp::Gui::OptionalDoubleSpinBox *toDepth;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_8;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_9;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromLatitude;
    QLabel *label_6;
    QLabel *label_7;
    Seiscomp::Gui::OptionalDoubleSpinBox *toMagnitude;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromLongitude;
    QLabel *label_13;
    QFrame *frame_4;
    QLineEdit *editEventID;
    QFrame *frame_5;
    QToolButton *btnReset;

    void setupUi(QWidget *EventFilter)
    {
        if (EventFilter->objectName().isEmpty())
            EventFilter->setObjectName(QStringLiteral("EventFilter"));
        EventFilter->resize(407, 419);
        vboxLayout = new QVBoxLayout(EventFilter);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        toLatitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toLatitude->setObjectName(QStringLiteral("toLatitude"));
        toLatitude->setDecimals(4);
        toLatitude->setMaximum(90);
        toLatitude->setMinimum(-90);
        toLatitude->setValue(-90);

        gridLayout->addWidget(toLatitude, 3, 3, 1, 1);

        frame = new QFrame(EventFilter);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame, 4, 0, 1, 4);

        fromMagnitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromMagnitude->setObjectName(QStringLiteral("fromMagnitude"));
        fromMagnitude->setDecimals(1);
        fromMagnitude->setMaximum(20);
        fromMagnitude->setMinimum(-10);
        fromMagnitude->setSingleStep(0.5);
        fromMagnitude->setValue(-10);

        gridLayout->addWidget(fromMagnitude, 12, 1, 1, 1);

        label_4 = new QLabel(EventFilter);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        label_15 = new QLabel(EventFilter);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 12, 2, 1, 1);

        toLongitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toLongitude->setObjectName(QStringLiteral("toLongitude"));
        toLongitude->setDecimals(4);
        toLongitude->setMaximum(180);
        toLongitude->setMinimum(-180);
        toLongitude->setValue(-180);

        gridLayout->addWidget(toLongitude, 6, 3, 1, 1);

        fromDepth = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromDepth->setObjectName(QStringLiteral("fromDepth"));
        fromDepth->setMaximum(999);
        fromDepth->setMinimum(-999);
        fromDepth->setValue(-999);

        gridLayout->addWidget(fromDepth, 9, 1, 1, 1);

        frame_2 = new QFrame(EventFilter);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame_2, 7, 0, 1, 4);

        label = new QLabel(EventFilter);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 2, 0, 1, 4);

        toDepth = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toDepth->setObjectName(QStringLiteral("toDepth"));
        toDepth->setMaximum(999);
        toDepth->setMinimum(-999);
        toDepth->setValue(-999);

        gridLayout->addWidget(toDepth, 9, 3, 1, 1);

        label_5 = new QLabel(EventFilter);
        label_5->setObjectName(QStringLiteral("label_5"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        frame_3 = new QFrame(EventFilter);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame_3, 10, 0, 1, 4);

        label_14 = new QLabel(EventFilter);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 12, 0, 1, 1);

        label_11 = new QLabel(EventFilter);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 9, 0, 1, 1);

        label_8 = new QLabel(EventFilter);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 6, 0, 1, 1);

        label_10 = new QLabel(EventFilter);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 8, 0, 1, 4);

        label_12 = new QLabel(EventFilter);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout->addWidget(label_12, 9, 2, 1, 1);

        label_9 = new QLabel(EventFilter);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 6, 2, 1, 1);

        fromLatitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromLatitude->setObjectName(QStringLiteral("fromLatitude"));
        fromLatitude->setDecimals(4);
        fromLatitude->setMaximum(90);
        fromLatitude->setMinimum(-90);
        fromLatitude->setValue(-90);

        gridLayout->addWidget(fromLatitude, 3, 1, 1, 1);

        label_6 = new QLabel(EventFilter);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 3, 2, 1, 1);

        label_7 = new QLabel(EventFilter);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 5, 0, 1, 4);

        toMagnitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toMagnitude->setObjectName(QStringLiteral("toMagnitude"));
        toMagnitude->setDecimals(1);
        toMagnitude->setMaximum(20);
        toMagnitude->setMinimum(-10);
        toMagnitude->setSingleStep(0.5);
        toMagnitude->setValue(-10);

        gridLayout->addWidget(toMagnitude, 12, 3, 1, 1);

        fromLongitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromLongitude->setObjectName(QStringLiteral("fromLongitude"));
        fromLongitude->setDecimals(4);
        fromLongitude->setMaximum(180);
        fromLongitude->setMinimum(-180);
        fromLongitude->setValue(-180);

        gridLayout->addWidget(fromLongitude, 6, 1, 1, 1);

        label_13 = new QLabel(EventFilter);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 11, 0, 1, 4);

        frame_4 = new QFrame(EventFilter);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setFrameShape(QFrame::HLine);
        frame_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(frame_4, 1, 0, 1, 4);

        editEventID = new QLineEdit(EventFilter);
        editEventID->setObjectName(QStringLiteral("editEventID"));

        gridLayout->addWidget(editEventID, 0, 1, 1, 3);


        vboxLayout->addLayout(gridLayout);

        frame_5 = new QFrame(EventFilter);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::HLine);
        frame_5->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(frame_5);

        btnReset = new QToolButton(EventFilter);
        btnReset->setObjectName(QStringLiteral("btnReset"));

        vboxLayout->addWidget(btnReset);

        QWidget::setTabOrder(fromLatitude, toLatitude);
        QWidget::setTabOrder(toLatitude, fromLongitude);
        QWidget::setTabOrder(fromLongitude, toLongitude);
        QWidget::setTabOrder(toLongitude, fromDepth);
        QWidget::setTabOrder(fromDepth, toDepth);
        QWidget::setTabOrder(toDepth, fromMagnitude);
        QWidget::setTabOrder(fromMagnitude, toMagnitude);

        retranslateUi(EventFilter);

        QMetaObject::connectSlotsByName(EventFilter);
    } // setupUi

    void retranslateUi(QWidget *EventFilter)
    {
        EventFilter->setWindowTitle(QApplication::translate("EventFilter", "Filter Settings", Q_NULLPTR));
        toLatitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        toLatitude->setSuffix(QApplication::translate("EventFilter", "\302\260", Q_NULLPTR));
        fromMagnitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        label_4->setText(QApplication::translate("EventFilter", "Event ID", Q_NULLPTR));
        label_15->setText(QApplication::translate("EventFilter", "to", Q_NULLPTR));
        toLongitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        toLongitude->setSuffix(QApplication::translate("EventFilter", "\302\260", Q_NULLPTR));
        fromDepth->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        fromDepth->setSuffix(QApplication::translate("EventFilter", "km", Q_NULLPTR));
        label->setText(QApplication::translate("EventFilter", "Latitude range", Q_NULLPTR));
        toDepth->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        toDepth->setSuffix(QApplication::translate("EventFilter", "km", Q_NULLPTR));
        label_5->setText(QApplication::translate("EventFilter", "from", Q_NULLPTR));
        label_14->setText(QApplication::translate("EventFilter", "from", Q_NULLPTR));
        label_11->setText(QApplication::translate("EventFilter", "from", Q_NULLPTR));
        label_8->setText(QApplication::translate("EventFilter", "from", Q_NULLPTR));
        label_10->setText(QApplication::translate("EventFilter", "Depth range", Q_NULLPTR));
        label_12->setText(QApplication::translate("EventFilter", "to", Q_NULLPTR));
        label_9->setText(QApplication::translate("EventFilter", "to", Q_NULLPTR));
        fromLatitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        fromLatitude->setSuffix(QApplication::translate("EventFilter", "\302\260", Q_NULLPTR));
        label_6->setText(QApplication::translate("EventFilter", "to", Q_NULLPTR));
        label_7->setText(QApplication::translate("EventFilter", "Longitude range", Q_NULLPTR));
        toMagnitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        fromLongitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", Q_NULLPTR));
        fromLongitude->setSuffix(QApplication::translate("EventFilter", "\302\260", Q_NULLPTR));
        label_13->setText(QApplication::translate("EventFilter", "Magnitude range", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        editEventID->setToolTip(QApplication::translate("EventFilter", "EventID filter which allows wildcards (* and ?)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnReset->setText(QApplication::translate("EventFilter", "Reset all", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EventFilter: public Ui_EventFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTFILTERWIDGET_H
