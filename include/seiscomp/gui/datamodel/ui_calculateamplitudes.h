/********************************************************************************
** Form generated from reading UI file 'calculateamplitudes.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATEAMPLITUDES_H
#define UI_CALCULATEAMPLITUDES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CalculateAmplitudes
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QLabel *label;
    QLabel *source;
    QFrame *frame;
    QHBoxLayout *hboxLayout1;
    QLabel *label_2;
    QComboBox *comboFilterState;
    QSpacerItem *spacerItem;
    QLabel *label_3;
    QComboBox *comboFilterType;
    QTableWidget *table;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem1;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *CalculateAmplitudes)
    {
        if (CalculateAmplitudes->objectName().isEmpty())
            CalculateAmplitudes->setObjectName(QStringLiteral("CalculateAmplitudes"));
        CalculateAmplitudes->resize(645, 624);
        vboxLayout = new QVBoxLayout(CalculateAmplitudes);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        label = new QLabel(CalculateAmplitudes);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(label);

        source = new QLabel(CalculateAmplitudes);
        source->setObjectName(QStringLiteral("source"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(source->sizePolicy().hasHeightForWidth());
        source->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(source);


        vboxLayout->addLayout(hboxLayout);

        frame = new QFrame(CalculateAmplitudes);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frame);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        label_2 = new QLabel(CalculateAmplitudes);
        label_2->setObjectName(QStringLiteral("label_2"));

        hboxLayout1->addWidget(label_2);

        comboFilterState = new QComboBox(CalculateAmplitudes);
        comboFilterState->setObjectName(QStringLiteral("comboFilterState"));

        hboxLayout1->addWidget(comboFilterState);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        label_3 = new QLabel(CalculateAmplitudes);
        label_3->setObjectName(QStringLiteral("label_3"));

        hboxLayout1->addWidget(label_3);

        comboFilterType = new QComboBox(CalculateAmplitudes);
        comboFilterType->setObjectName(QStringLiteral("comboFilterType"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboFilterType->sizePolicy().hasHeightForWidth());
        comboFilterType->setSizePolicy(sizePolicy2);

        hboxLayout1->addWidget(comboFilterType);


        vboxLayout->addLayout(hboxLayout1);

        table = new QTableWidget(CalculateAmplitudes);
        if (table->columnCount() < 4)
            table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        table->setObjectName(QStringLiteral("table"));

        vboxLayout->addWidget(table);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        btnOK = new QPushButton(CalculateAmplitudes);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        hboxLayout2->addWidget(btnOK);

        btnCancel = new QPushButton(CalculateAmplitudes);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        hboxLayout2->addWidget(btnCancel);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(CalculateAmplitudes);
        QObject::connect(btnCancel, SIGNAL(clicked()), CalculateAmplitudes, SLOT(reject()));
        QObject::connect(btnOK, SIGNAL(clicked()), CalculateAmplitudes, SLOT(accept()));

        QMetaObject::connectSlotsByName(CalculateAmplitudes);
    } // setupUi

    void retranslateUi(QDialog *CalculateAmplitudes)
    {
        CalculateAmplitudes->setWindowTitle(QApplication::translate("CalculateAmplitudes", "Measure amplitudes", Q_NULLPTR));
        label->setText(QApplication::translate("CalculateAmplitudes", "Source:", Q_NULLPTR));
        source->setText(QApplication::translate("CalculateAmplitudes", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("CalculateAmplitudes", "State:", Q_NULLPTR));
        comboFilterState->clear();
        comboFilterState->insertItems(0, QStringList()
         << QApplication::translate("CalculateAmplitudes", "- Any -", Q_NULLPTR)
         << QApplication::translate("CalculateAmplitudes", "Success", Q_NULLPTR)
         << QApplication::translate("CalculateAmplitudes", "Error", Q_NULLPTR)
         << QApplication::translate("CalculateAmplitudes", "Progress", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("CalculateAmplitudes", "Type:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CalculateAmplitudes", "Stream", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CalculateAmplitudes", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CalculateAmplitudes", "Value", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CalculateAmplitudes", "Progress", Q_NULLPTR));
        btnOK->setText(QApplication::translate("CalculateAmplitudes", "OK", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("CalculateAmplitudes", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculateAmplitudes: public Ui_CalculateAmplitudes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATEAMPLITUDES_H
