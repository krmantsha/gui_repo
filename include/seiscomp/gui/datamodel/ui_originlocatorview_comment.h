/********************************************************************************
** Form generated from reading UI file 'originlocatorview_comment.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORIGINLOCATORVIEW_COMMENT_H
#define UI_ORIGINLOCATORVIEW_COMMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OriginCommentOptions
{
public:
    QVBoxLayout *vboxLayout;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout1;
    QLabel *labelHeadline;
    QSpacerItem *spacerItem;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout1;
    QLabel *labelAuthor;
    QSpacerItem *spacerItem1;
    QLabel *labelDate;
    QLabel *labelComment;
    QSpacerItem *spacerItem2;
    QFrame *frame;
    QTextEdit *editComment;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem3;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *OriginCommentOptions)
    {
        if (OriginCommentOptions->objectName().isEmpty())
            OriginCommentOptions->setObjectName(QStringLiteral("OriginCommentOptions"));
        OriginCommentOptions->resize(380, 231);
        vboxLayout = new QVBoxLayout(OriginCommentOptions);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(12);
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        vboxLayout1 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        vboxLayout1->setObjectName(QStringLiteral("vboxLayout1"));
        labelHeadline = new QLabel(OriginCommentOptions);
        labelHeadline->setObjectName(QStringLiteral("labelHeadline"));
        labelHeadline->setEnabled(false);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(4), static_cast<QSizePolicy::Policy>(5));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelHeadline->sizePolicy().hasHeightForWidth());
        labelHeadline->setSizePolicy(sizePolicy);
        labelHeadline->setPixmap(QPixmap(QString::fromUtf8(":/icons/icons/comment.png")));
        labelHeadline->setScaledContents(false);

        vboxLayout1->addWidget(labelHeadline);

        spacerItem = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        hboxLayout->addLayout(vboxLayout1);

        vboxLayout2 = new QVBoxLayout();
#ifndef Q_OS_MAC
        vboxLayout2->setSpacing(6);
#endif
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QStringLiteral("vboxLayout2"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        labelAuthor = new QLabel(OriginCommentOptions);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));

        hboxLayout1->addWidget(labelAuthor);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        labelDate = new QLabel(OriginCommentOptions);
        labelDate->setObjectName(QStringLiteral("labelDate"));

        hboxLayout1->addWidget(labelDate);


        vboxLayout2->addLayout(hboxLayout1);

        labelComment = new QLabel(OriginCommentOptions);
        labelComment->setObjectName(QStringLiteral("labelComment"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(5), static_cast<QSizePolicy::Policy>(5));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelComment->sizePolicy().hasHeightForWidth());
        labelComment->setSizePolicy(sizePolicy1);
        labelComment->setWordWrap(true);

        vboxLayout2->addWidget(labelComment);

        spacerItem2 = new QSpacerItem(10, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem2);


        hboxLayout->addLayout(vboxLayout2);


        vboxLayout->addLayout(hboxLayout);

        frame = new QFrame(OriginCommentOptions);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::HLine);
        frame->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(frame);

        editComment = new QTextEdit(OriginCommentOptions);
        editComment->setObjectName(QStringLiteral("editComment"));
        QSizePolicy sizePolicy2(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(editComment->sizePolicy().hasHeightForWidth());
        editComment->setSizePolicy(sizePolicy2);
        editComment->setFrameShape(QFrame::StyledPanel);
        editComment->setFrameShadow(QFrame::Plain);

        vboxLayout->addWidget(editComment);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        spacerItem3 = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        okButton = new QPushButton(OriginCommentOptions);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout2->addWidget(okButton);

        cancelButton = new QPushButton(OriginCommentOptions);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout2->addWidget(cancelButton);


        vboxLayout->addLayout(hboxLayout2);


        retranslateUi(OriginCommentOptions);
        QObject::connect(okButton, SIGNAL(clicked()), OriginCommentOptions, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), OriginCommentOptions, SLOT(reject()));

        QMetaObject::connectSlotsByName(OriginCommentOptions);
    } // setupUi

    void retranslateUi(QDialog *OriginCommentOptions)
    {
        OriginCommentOptions->setWindowTitle(QApplication::translate("OriginCommentOptions", "Edit comment", Q_NULLPTR));
        labelHeadline->setText(QString());
        labelAuthor->setText(QString());
        labelDate->setText(QString());
        labelComment->setText(QApplication::translate("OriginCommentOptions", "...", Q_NULLPTR));
        okButton->setText(QApplication::translate("OriginCommentOptions", "OK", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("OriginCommentOptions", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OriginCommentOptions: public Ui_OriginCommentOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORIGINLOCATORVIEW_COMMENT_H
