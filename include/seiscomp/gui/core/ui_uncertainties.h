/********************************************************************************
** Form generated from reading UI file 'uncertainties.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNCERTAINTIES_H
#define UI_UNCERTAINTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Uncertainties
{
public:
    QVBoxLayout *vboxLayout;
    QCheckBox *cbAsymmetric;
    QFrame *line;
    QGridLayout *gridLayout;
    QDoubleSpinBox *spinLowerUncertainty;
    QLabel *labelUpperUncertainty;
    QDoubleSpinBox *spinUpperUncertainty;
    QLabel *labelLowerUncertainty;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem1;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *Uncertainties)
    {
        if (Uncertainties->objectName().isEmpty())
            Uncertainties->setObjectName(QStringLiteral("Uncertainties"));
        Uncertainties->resize(212, 151);
        vboxLayout = new QVBoxLayout(Uncertainties);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        cbAsymmetric = new QCheckBox(Uncertainties);
        cbAsymmetric->setObjectName(QStringLiteral("cbAsymmetric"));

        vboxLayout->addWidget(cbAsymmetric);

        line = new QFrame(Uncertainties);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        spinLowerUncertainty = new QDoubleSpinBox(Uncertainties);
        spinLowerUncertainty->setObjectName(QStringLiteral("spinLowerUncertainty"));
        spinLowerUncertainty->setDecimals(4);
        spinLowerUncertainty->setSingleStep(0.5);

        gridLayout->addWidget(spinLowerUncertainty, 0, 1, 1, 1);

        labelUpperUncertainty = new QLabel(Uncertainties);
        labelUpperUncertainty->setObjectName(QStringLiteral("labelUpperUncertainty"));
        labelUpperUncertainty->setEnabled(false);

        gridLayout->addWidget(labelUpperUncertainty, 1, 0, 1, 1);

        spinUpperUncertainty = new QDoubleSpinBox(Uncertainties);
        spinUpperUncertainty->setObjectName(QStringLiteral("spinUpperUncertainty"));
        spinUpperUncertainty->setEnabled(false);
        spinUpperUncertainty->setDecimals(4);
        spinUpperUncertainty->setSingleStep(0.5);

        gridLayout->addWidget(spinUpperUncertainty, 1, 1, 1, 1);

        labelLowerUncertainty = new QLabel(Uncertainties);
        labelLowerUncertainty->setObjectName(QStringLiteral("labelLowerUncertainty"));

        gridLayout->addWidget(labelLowerUncertainty, 0, 0, 1, 1);


        vboxLayout->addLayout(gridLayout);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        okButton = new QPushButton(Uncertainties);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(Uncertainties);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(Uncertainties);
        QObject::connect(okButton, SIGNAL(clicked()), Uncertainties, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), Uncertainties, SLOT(reject()));

        QMetaObject::connectSlotsByName(Uncertainties);
    } // setupUi

    void retranslateUi(QDialog *Uncertainties)
    {
        Uncertainties->setWindowTitle(QApplication::translate("Uncertainties", "Uncertainty", Q_NULLPTR));
        cbAsymmetric->setText(QApplication::translate("Uncertainties", "Asymmetric uncertainty", Q_NULLPTR));
        labelUpperUncertainty->setText(QApplication::translate("Uncertainties", "Upper uncertainty:", Q_NULLPTR));
        labelLowerUncertainty->setText(QApplication::translate("Uncertainties", "Lower uncertainty:", Q_NULLPTR));
        okButton->setText(QApplication::translate("Uncertainties", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("Uncertainties", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Uncertainties: public Ui_Uncertainties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNCERTAINTIES_H
