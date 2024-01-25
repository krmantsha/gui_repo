/********************************************************************************
** Form generated from reading UI file 'originlocatorview_commit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINLOCATORVIEW_COMMIT_H
#define UI_ORIGINLOCATORVIEW_COMMIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginCommitOptions
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *cbAssociate;
    QFrame *frameEventOptions;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QCheckBox *cbFixSolution;
    QCheckBox *cbFixMagnitudeType;
    QGridLayout *gridLayout;
    QLabel *label_21;
    QLabel *label_2;
    QComboBox *comboOriginStates;
    QComboBox *comboEventTypes;
    QLabel *label_3;
    QComboBox *comboEventTypeCertainty;
    QFrame *line;
    QLabel *label;
    QFrame *line_3;
    QLabel *labelEQName;
    QLineEdit *editEQName;
    QLabel *labelEQComment;
    QLineEdit *editEQComment;
    QComboBox *comboEQComment;
    QSpacerItem *spacerItem;
    QFrame *line_2;
    QCheckBox *cbBackToEventList;
    QHBoxLayout *hboxLayout1;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginCommitOptions)
    {
        if (OriginCommitOptions->objectName().isEmpty())
            OriginCommitOptions->setObjectName(QStringLiteral("OriginCommitOptions"));
        OriginCommitOptions->resize(585, 704);
        vboxLayout = new QVBoxLayout(OriginCommitOptions);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        cbAssociate = new QCheckBox(OriginCommitOptions);
        cbAssociate->setObjectName(QStringLiteral("cbAssociate"));
        cbAssociate->setChecked(true);

        vboxLayout->addWidget(cbAssociate);

        frameEventOptions = new QFrame(OriginCommitOptions);
        frameEventOptions->setObjectName(QStringLiteral("frameEventOptions"));
        frameEventOptions->setFrameShape(QFrame::NoFrame);
        frameEventOptions->setFrameShadow(QFrame::Raised);
        vboxLayout1 = new QVBoxLayout(frameEventOptions);
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
        cbFixSolution = new QCheckBox(frameEventOptions);
        cbFixSolution->setObjectName(QStringLiteral("cbFixSolution"));
        cbFixSolution->setChecked(true);

        hboxLayout->addWidget(cbFixSolution);


        vboxLayout1->addLayout(hboxLayout);

        cbFixMagnitudeType = new QCheckBox(frameEventOptions);
        cbFixMagnitudeType->setObjectName(QStringLiteral("cbFixMagnitudeType"));
        cbFixMagnitudeType->setChecked(true);

        vboxLayout1->addWidget(cbFixMagnitudeType);

        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_21 = new QLabel(frameEventOptions);
        label_21->setObjectName(QStringLiteral("label_21"));
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_21, 2, 0, 1, 1);

        label_2 = new QLabel(frameEventOptions);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        comboOriginStates = new QComboBox(frameEventOptions);
        comboOriginStates->setObjectName(QStringLiteral("comboOriginStates"));

        gridLayout->addWidget(comboOriginStates, 2, 1, 1, 1);

        comboEventTypes = new QComboBox(frameEventOptions);
        comboEventTypes->setObjectName(QStringLiteral("comboEventTypes"));

        gridLayout->addWidget(comboEventTypes, 0, 1, 1, 1);

        label_3 = new QLabel(frameEventOptions);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboEventTypeCertainty = new QComboBox(frameEventOptions);
        comboEventTypeCertainty->setObjectName(QStringLiteral("comboEventTypeCertainty"));

        gridLayout->addWidget(comboEventTypeCertainty, 1, 1, 1, 1);


        vboxLayout1->addLayout(gridLayout);

        line = new QFrame(frameEventOptions);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line);

        label = new QLabel(frameEventOptions);
        label->setObjectName(QStringLiteral("label"));
        label->setWordWrap(true);

        vboxLayout1->addWidget(label);

        line_3 = new QFrame(frameEventOptions);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(line_3);

        labelEQName = new QLabel(frameEventOptions);
        labelEQName->setObjectName(QStringLiteral("labelEQName"));

        vboxLayout1->addWidget(labelEQName);

        editEQName = new QLineEdit(frameEventOptions);
        editEQName->setObjectName(QStringLiteral("editEQName"));
        editEQName->setMaxLength(160);

        vboxLayout1->addWidget(editEQName);

        labelEQComment = new QLabel(frameEventOptions);
        labelEQComment->setObjectName(QStringLiteral("labelEQComment"));

        vboxLayout1->addWidget(labelEQComment);

        editEQComment = new QLineEdit(frameEventOptions);
        editEQComment->setObjectName(QStringLiteral("editEQComment"));
        editEQComment->setMaxLength(160);

        vboxLayout1->addWidget(editEQComment);

        comboEQComment = new QComboBox(frameEventOptions);
        comboEQComment->setObjectName(QStringLiteral("comboEQComment"));

        vboxLayout1->addWidget(comboEQComment);


        vboxLayout->addWidget(frameEventOptions);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        line_2 = new QFrame(OriginCommitOptions);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line_2);

        cbBackToEventList = new QCheckBox(OriginCommitOptions);
        cbBackToEventList->setObjectName(QStringLiteral("cbBackToEventList"));
        cbBackToEventList->setChecked(true);

        vboxLayout->addWidget(cbBackToEventList);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        okButton = new QPushButton(OriginCommitOptions);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout1->addWidget(okButton);

        cancelButton = new QPushButton(OriginCommitOptions);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout1->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout1);


        retranslateUi(OriginCommitOptions);
        QObject::connect(okButton, SIGNAL(clicked()), OriginCommitOptions, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginCommitOptions, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginCommitOptions);
    } // setupUi

    void retranslateUi(QDialog *OriginCommitOptions)
    {
        OriginCommitOptions->setWindowTitle(QApplication::translate("OriginCommitOptions", "Commit location", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbAssociate->setToolTip(QApplication::translate("OriginCommitOptions", "If checked this origin will be associated with the current event. If unchecked, scevent will decide whether to assoiciate the origin with the current event or to create a new one.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbAssociate->setText(QApplication::translate("OriginCommitOptions", "Force association with event %1", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        cbFixSolution->setToolTip(QApplication::translate("OriginCommitOptions", "If checked this origin will be fixed as preferred solution.", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        cbFixSolution->setText(QApplication::translate("OriginCommitOptions", "Fix this origin as preferred location.", Q_NULLPTR));
        cbFixMagnitudeType->setText(QApplication::translate("OriginCommitOptions", "Fix event preferred magnitude type  %1", Q_NULLPTR));
        label_21->setText(QApplication::translate("OriginCommitOptions", "Set origin status to", Q_NULLPTR));
        label_2->setText(QApplication::translate("OriginCommitOptions", "Set event type to", Q_NULLPTR));
        label_3->setText(QApplication::translate("OriginCommitOptions", "Set event certainty to", Q_NULLPTR));
        label->setText(QApplication::translate("OriginCommitOptions", "<b><u>NOTE</u></b> To fix the origin involves that successive origins are not considered as preferred origins by the event associator (scevent) until another origin is fixed again. Fixing an origin overrides the automatic rules of setting an origin as preferred origin.", Q_NULLPTR));
        labelEQName->setText(QApplication::translate("OriginCommitOptions", "Earthquake name:", Q_NULLPTR));
        labelEQComment->setText(QApplication::translate("OriginCommitOptions", "Event comment 'Operator':", Q_NULLPTR));
        cbBackToEventList->setText(QApplication::translate("OriginCommitOptions", "Return to event list after commit", Q_NULLPTR));
        okButton->setText(QApplication::translate("OriginCommitOptions", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("OriginCommitOptions", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OriginCommitOptions: public Ui_OriginCommitOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINLOCATORVIEW_COMMIT_H
