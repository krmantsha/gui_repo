/********************************************************************************
** Form generated from reading UI file 'calculateamplitudes.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATEAMPLITUDES_H
#define UI_CALCULATEAMPLITUDES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

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
            CalculateAmplitudes->setObjectName(QString::fromUtf8("CalculateAmplitudes"));
        CalculateAmplitudes->resize(645, 624);
        vboxLayout = new QVBoxLayout(CalculateAmplitudes);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label = new QLabel(CalculateAmplitudes);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        hboxLayout->addWidget(label);

        source = new QLabel(CalculateAmplitudes);
        source->setObjectName(QString::fromUtf8("source"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(source->sizePolicy().hasHeightForWidth());
        source->setSizePolicy(sizePolicy1);

        hboxLayout->addWidget(source);


        vboxLayout->addLayout(hboxLayout);

        frame = new QFrame(CalculateAmplitudes);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frame);

        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        label_2 = new QLabel(CalculateAmplitudes);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        hboxLayout1->addWidget(label_2);

        comboFilterState = new QComboBox(CalculateAmplitudes);
        comboFilterState->setObjectName(QString::fromUtf8("comboFilterState"));

        hboxLayout1->addWidget(comboFilterState);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem);

        label_3 = new QLabel(CalculateAmplitudes);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout1->addWidget(label_3);

        comboFilterType = new QComboBox(CalculateAmplitudes);
        comboFilterType->setObjectName(QString::fromUtf8("comboFilterType"));
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
        table->setObjectName(QString::fromUtf8("table"));

        vboxLayout->addWidget(table);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        spacerItem1 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem1);

        btnOK = new QPushButton(CalculateAmplitudes);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        hboxLayout2->addWidget(btnOK);

        btnCancel = new QPushButton(CalculateAmplitudes);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        hboxLayout2->addWidget(btnCancel);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(CalculateAmplitudes);
        QObject::connect(btnCancel, SIGNAL(clicked()), CalculateAmplitudes, SLOT(reject()));
        QObject::connect(btnOK, SIGNAL(clicked()), CalculateAmplitudes, SLOT(accept()));

        QMetaObject::connectSlotsByName(CalculateAmplitudes);
    } // setupUi

    void retranslateUi(QDialog *CalculateAmplitudes)
    {
        CalculateAmplitudes->setWindowTitle(QApplication::translate("CalculateAmplitudes", "Measure amplitudes", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CalculateAmplitudes", "Source:", 0, QApplication::UnicodeUTF8));
        source->setText(QApplication::translate("CalculateAmplitudes", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CalculateAmplitudes", "State:", 0, QApplication::UnicodeUTF8));
        comboFilterState->clear();
        comboFilterState->insertItems(0, QStringList()
         << QApplication::translate("CalculateAmplitudes", "- Any -", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CalculateAmplitudes", "Success", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CalculateAmplitudes", "Error", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("CalculateAmplitudes", "Progress", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("CalculateAmplitudes", "Type:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CalculateAmplitudes", "Stream", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CalculateAmplitudes", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CalculateAmplitudes", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CalculateAmplitudes", "Progress", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("CalculateAmplitudes", "OK", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("CalculateAmplitudes", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CalculateAmplitudes: public Ui_CalculateAmplitudes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATEAMPLITUDES_H
