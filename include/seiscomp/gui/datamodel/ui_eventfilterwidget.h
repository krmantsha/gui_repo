/********************************************************************************
** Form generated from reading UI file 'eventfilterwidget.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTFILTERWIDGET_H
#define UI_EVENTFILTERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "seiscomp/gui/core/optionaldoublespinbox.h"

QT_BEGIN_NAMESPACE

class Ui_EventFilter
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromDepth;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromLongitude;
    Seiscomp::Gui::OptionalDoubleSpinBox *toLongitude;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_15;
    QLabel *label_6;
    QFrame *frame;
    QFrame *frame_2;
    QLabel *label_13;
    QLabel *label_7;
    QLabel *label_12;
    QLabel *label_4;
    QLabel *label_9;
    QLabel *label_5;
    Seiscomp::Gui::OptionalDoubleSpinBox *toMagnitude;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromMagnitude;
    QLabel *label_8;
    QLabel *label_14;
    Seiscomp::Gui::OptionalDoubleSpinBox *fromLatitude;
    Seiscomp::Gui::OptionalDoubleSpinBox *toDepth;
    Seiscomp::Gui::OptionalDoubleSpinBox *toLatitude;
    QFrame *frame_3;

    void setupUi(QWidget *EventFilter)
    {
        if (EventFilter->objectName().isEmpty())
            EventFilter->setObjectName(QString::fromUtf8("EventFilter"));
        EventFilter->resize(334, 296);
        vboxLayout = new QVBoxLayout(EventFilter);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        fromDepth = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromDepth->setObjectName(QString::fromUtf8("fromDepth"));
        fromDepth->setMaximum(999);
        fromDepth->setMinimum(-999);
        fromDepth->setValue(-999);

        gridLayout->addWidget(fromDepth, 7, 1, 1, 1);

        fromLongitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromLongitude->setObjectName(QString::fromUtf8("fromLongitude"));
        fromLongitude->setDecimals(4);
        fromLongitude->setMaximum(180);
        fromLongitude->setMinimum(-180);
        fromLongitude->setValue(-180);

        gridLayout->addWidget(fromLongitude, 4, 1, 1, 1);

        toLongitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toLongitude->setObjectName(QString::fromUtf8("toLongitude"));
        toLongitude->setDecimals(4);
        toLongitude->setMaximum(180);
        toLongitude->setMinimum(-180);
        toLongitude->setValue(-180);

        gridLayout->addWidget(toLongitude, 4, 3, 1, 1);

        label_10 = new QLabel(EventFilter);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 0, 1, 4);

        label_11 = new QLabel(EventFilter);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_11, 7, 0, 1, 1);

        label_15 = new QLabel(EventFilter);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 10, 2, 1, 1);

        label_6 = new QLabel(EventFilter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        frame = new QFrame(EventFilter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 2, 0, 1, 4);

        frame_2 = new QFrame(EventFilter);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::HLine);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_2, 5, 0, 1, 4);

        label_13 = new QLabel(EventFilter);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout->addWidget(label_13, 9, 0, 1, 4);

        label_7 = new QLabel(EventFilter);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 4);

        label_12 = new QLabel(EventFilter);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 7, 2, 1, 1);

        label_4 = new QLabel(EventFilter);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 4);

        label_9 = new QLabel(EventFilter);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        label_5 = new QLabel(EventFilter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        toMagnitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toMagnitude->setObjectName(QString::fromUtf8("toMagnitude"));
        toMagnitude->setDecimals(1);
        toMagnitude->setMaximum(20);
        toMagnitude->setMinimum(-10);
        toMagnitude->setSingleStep(0.5);
        toMagnitude->setValue(-10);

        gridLayout->addWidget(toMagnitude, 10, 3, 1, 1);

        fromMagnitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromMagnitude->setObjectName(QString::fromUtf8("fromMagnitude"));
        fromMagnitude->setDecimals(1);
        fromMagnitude->setMaximum(20);
        fromMagnitude->setMinimum(-10);
        fromMagnitude->setSingleStep(0.5);
        fromMagnitude->setValue(-10);

        gridLayout->addWidget(fromMagnitude, 10, 1, 1, 1);

        label_8 = new QLabel(EventFilter);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 4, 0, 1, 1);

        label_14 = new QLabel(EventFilter);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_14, 10, 0, 1, 1);

        fromLatitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        fromLatitude->setObjectName(QString::fromUtf8("fromLatitude"));
        fromLatitude->setDecimals(4);
        fromLatitude->setMaximum(90);
        fromLatitude->setMinimum(-90);
        fromLatitude->setValue(-90);

        gridLayout->addWidget(fromLatitude, 1, 1, 1, 1);

        toDepth = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toDepth->setObjectName(QString::fromUtf8("toDepth"));
        toDepth->setMaximum(999);
        toDepth->setMinimum(-999);
        toDepth->setValue(-999);

        gridLayout->addWidget(toDepth, 7, 3, 1, 1);

        toLatitude = new Seiscomp::Gui::OptionalDoubleSpinBox(EventFilter);
        toLatitude->setObjectName(QString::fromUtf8("toLatitude"));
        toLatitude->setDecimals(4);
        toLatitude->setMaximum(90);
        toLatitude->setMinimum(-90);
        toLatitude->setValue(-90);

        gridLayout->addWidget(toLatitude, 1, 3, 1, 1);

        frame_3 = new QFrame(EventFilter);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::HLine);
        frame_3->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame_3, 8, 0, 1, 4);


        vboxLayout->addLayout(gridLayout);

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
        EventFilter->setWindowTitle(QApplication::translate("EventFilter", "Filter Settings", 0, QApplication::UnicodeUTF8));
        fromDepth->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        fromDepth->setSuffix(QApplication::translate("EventFilter", "km", 0, QApplication::UnicodeUTF8));
        fromLongitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        fromLongitude->setSuffix(QApplication::translate("EventFilter", "\302\260", 0, QApplication::UnicodeUTF8));
        toLongitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        toLongitude->setSuffix(QApplication::translate("EventFilter", "\302\260", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("EventFilter", "Depth range", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("EventFilter", "from", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("EventFilter", "to", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("EventFilter", "to", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("EventFilter", "Magnitude range", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("EventFilter", "Longitude range", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("EventFilter", "to", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EventFilter", "Latitude range", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("EventFilter", "to", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EventFilter", "from", 0, QApplication::UnicodeUTF8));
        toMagnitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        fromMagnitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("EventFilter", "from", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("EventFilter", "from", 0, QApplication::UnicodeUTF8));
        fromLatitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        fromLatitude->setSuffix(QApplication::translate("EventFilter", "\302\260", 0, QApplication::UnicodeUTF8));
        toDepth->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        toDepth->setSuffix(QApplication::translate("EventFilter", "km", 0, QApplication::UnicodeUTF8));
        toLatitude->setSpecialValueText(QApplication::translate("EventFilter", "Unset", 0, QApplication::UnicodeUTF8));
        toLatitude->setSuffix(QApplication::translate("EventFilter", "\302\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EventFilter: public Ui_EventFilter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTFILTERWIDGET_H
