/********************************************************************************
** Form generated from reading UI file 'showplugins.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPLUGINS_H
#define UI_SHOWPLUGINS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowPlugins
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *labelHeadline;
    QTextEdit *content;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *closeButton;

    void setupUi(QDialog *ShowPlugins)
    {
        if (ShowPlugins->objectName().isEmpty())
            ShowPlugins->setObjectName(QStringLiteral("ShowPlugins"));
        ShowPlugins->resize(492, 326);
        vboxLayout = new QVBoxLayout(ShowPlugins);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        labelHeadline = new QLabel(ShowPlugins);
        labelHeadline->setObjectName(QStringLiteral("labelHeadline"));

        vboxLayout->addWidget(labelHeadline);

        content = new QTextEdit(ShowPlugins);
        content->setObjectName(QStringLiteral("content"));
        content->setReadOnly(true);

        vboxLayout->addWidget(content);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        closeButton = new QPushButton(ShowPlugins);
        closeButton->setObjectName(QStringLiteral("closeButton"));

        hboxLayout->addWidget(closeButton);


        vboxLayout->addLayout(hboxLayout);


        retranslateUi(ShowPlugins);
        QObject::connect(closeButton, SIGNAL(clicked()), ShowPlugins, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShowPlugins);
    } // setupUi

    void retranslateUi(QDialog *ShowPlugins)
    {
        ShowPlugins->setWindowTitle(QApplication::translate("ShowPlugins", "Loaded Plugins", Q_NULLPTR));
        labelHeadline->setText(QApplication::translate("ShowPlugins", "TextLabel", Q_NULLPTR));
        content->setHtml(QApplication::translate("ShowPlugins", "<html><head><meta name=\"qrichtext\" content=\"1\" /></head><body style=\" white-space: pre-wrap; font-family:DejaVu Sans; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\"><p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", Q_NULLPTR));
        closeButton->setText(QApplication::translate("ShowPlugins", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ShowPlugins: public Ui_ShowPlugins {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPLUGINS_H
