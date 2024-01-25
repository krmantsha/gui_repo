/********************************************************************************
** Form generated from reading UI file 'connectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTIONDIALOG_H
#define UI_CONNECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConnectionDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *btnClose;
    QGroupBox *groupDatabase;
    QGridLayout *gridLayout1;
    QHBoxLayout *hboxLayout1;
    QPushButton *btnDbSwitchToReported;
    QSpacerItem *spacerItem1;
    QPushButton *btnDbConnect;
    QComboBox *comboDbType;
    QLineEdit *editDbConnection;
    QLabel *labelDbType;
    QLabel *labelDbConnection;
    QLabel *label_7;
    QLineEdit *labelDbReported;
    QSplitter *splitter;
    QGroupBox *groupMessaging;
    QGridLayout *gridLayout2;
    QLabel *label_4;
    QSpinBox *timeoutSpinBox;
    QHBoxLayout *hboxLayout2;
    QSpacerItem *spacerItem2;
    QPushButton *btnConnect;
    QLineEdit *editPrimaryGroup;
    QLabel *label_5;
    QLabel *label_2;
    QLineEdit *editServer;
    QLineEdit *editUser;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *editPeerCertificate;
    QToolButton *btnPeerCertificateOpen;
    QGroupBox *groupSubscriptions;
    QVBoxLayout *vboxLayout;
    QListWidget *listSubscriptions;
    QHBoxLayout *hboxLayout3;
    QPushButton *btnSelectAll;
    QSpacerItem *spacerItem3;
    QPushButton *btnDeselectAll;

    void setupUi(QDialog *ConnectionDialog)
    {
        if (ConnectionDialog->objectName().isEmpty())
            ConnectionDialog->setObjectName(QStringLiteral("ConnectionDialog"));
        ConnectionDialog->resize(868, 652);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConnectionDialog->sizePolicy().hasHeightForWidth());
        ConnectionDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ConnectionDialog);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(261, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        btnClose = new QPushButton(ConnectionDialog);
        btnClose->setObjectName(QStringLiteral("btnClose"));

        hboxLayout->addWidget(btnClose);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);

        groupDatabase = new QGroupBox(ConnectionDialog);
        groupDatabase->setObjectName(QStringLiteral("groupDatabase"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupDatabase->sizePolicy().hasHeightForWidth());
        groupDatabase->setSizePolicy(sizePolicy1);
        gridLayout1 = new QGridLayout(groupDatabase);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        hboxLayout1 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout1->setObjectName(QStringLiteral("hboxLayout1"));
        btnDbSwitchToReported = new QPushButton(groupDatabase);
        btnDbSwitchToReported->setObjectName(QStringLiteral("btnDbSwitchToReported"));
        btnDbSwitchToReported->setEnabled(false);

        hboxLayout1->addWidget(btnDbSwitchToReported);

        spacerItem1 = new QSpacerItem(71, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);

        btnDbConnect = new QPushButton(groupDatabase);
        btnDbConnect->setObjectName(QStringLiteral("btnDbConnect"));

        hboxLayout1->addWidget(btnDbConnect);


        gridLayout1->addLayout(hboxLayout1, 3, 1, 1, 1);

        comboDbType = new QComboBox(groupDatabase);
        comboDbType->setObjectName(QStringLiteral("comboDbType"));
        comboDbType->setModelColumn(0);

        gridLayout1->addWidget(comboDbType, 0, 1, 1, 1);

        editDbConnection = new QLineEdit(groupDatabase);
        editDbConnection->setObjectName(QStringLiteral("editDbConnection"));

        gridLayout1->addWidget(editDbConnection, 1, 1, 1, 1);

        labelDbType = new QLabel(groupDatabase);
        labelDbType->setObjectName(QStringLiteral("labelDbType"));

        gridLayout1->addWidget(labelDbType, 0, 0, 1, 1);

        labelDbConnection = new QLabel(groupDatabase);
        labelDbConnection->setObjectName(QStringLiteral("labelDbConnection"));

        gridLayout1->addWidget(labelDbConnection, 1, 0, 1, 1);

        label_7 = new QLabel(groupDatabase);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout1->addWidget(label_7, 2, 0, 1, 1);

        labelDbReported = new QLineEdit(groupDatabase);
        labelDbReported->setObjectName(QStringLiteral("labelDbReported"));
        labelDbReported->setReadOnly(true);

        gridLayout1->addWidget(labelDbReported, 2, 1, 1, 1);


        gridLayout->addWidget(groupDatabase, 1, 0, 1, 1);

        splitter = new QSplitter(ConnectionDialog);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupMessaging = new QGroupBox(splitter);
        groupMessaging->setObjectName(QStringLiteral("groupMessaging"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupMessaging->sizePolicy().hasHeightForWidth());
        groupMessaging->setSizePolicy(sizePolicy2);
        gridLayout2 = new QGridLayout(groupMessaging);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout2->setObjectName(QStringLiteral("gridLayout2"));
        label_4 = new QLabel(groupMessaging);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout2->addWidget(label_4, 2, 0, 1, 1);

        timeoutSpinBox = new QSpinBox(groupMessaging);
        timeoutSpinBox->setObjectName(QStringLiteral("timeoutSpinBox"));

        gridLayout2->addWidget(timeoutSpinBox, 2, 1, 1, 1);

        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QStringLiteral("hboxLayout2"));
        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem2);

        btnConnect = new QPushButton(groupMessaging);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));

        hboxLayout2->addWidget(btnConnect);


        gridLayout2->addLayout(hboxLayout2, 6, 0, 1, 2);

        editPrimaryGroup = new QLineEdit(groupMessaging);
        editPrimaryGroup->setObjectName(QStringLiteral("editPrimaryGroup"));

        gridLayout2->addWidget(editPrimaryGroup, 3, 1, 1, 1);

        label_5 = new QLabel(groupMessaging);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout2->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(groupMessaging);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout2->addWidget(label_2, 1, 0, 1, 1);

        editServer = new QLineEdit(groupMessaging);
        editServer->setObjectName(QStringLiteral("editServer"));

        gridLayout2->addWidget(editServer, 1, 1, 1, 1);

        editUser = new QLineEdit(groupMessaging);
        editUser->setObjectName(QStringLiteral("editUser"));

        gridLayout2->addWidget(editUser, 0, 1, 1, 1);

        label = new QLabel(groupMessaging);
        label->setObjectName(QStringLiteral("label"));

        gridLayout2->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(verticalSpacer, 5, 1, 1, 1);

        label_3 = new QLabel(groupMessaging);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout2->addWidget(label_3, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        editPeerCertificate = new QLineEdit(groupMessaging);
        editPeerCertificate->setObjectName(QStringLiteral("editPeerCertificate"));
        sizePolicy2.setHeightForWidth(editPeerCertificate->sizePolicy().hasHeightForWidth());
        editPeerCertificate->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(editPeerCertificate);

        btnPeerCertificateOpen = new QToolButton(groupMessaging);
        btnPeerCertificateOpen->setObjectName(QStringLiteral("btnPeerCertificateOpen"));

        horizontalLayout->addWidget(btnPeerCertificateOpen);


        gridLayout2->addLayout(horizontalLayout, 4, 1, 1, 1);

        splitter->addWidget(groupMessaging);
        groupSubscriptions = new QGroupBox(splitter);
        groupSubscriptions->setObjectName(QStringLiteral("groupSubscriptions"));
        groupSubscriptions->setEnabled(false);
        sizePolicy2.setHeightForWidth(groupSubscriptions->sizePolicy().hasHeightForWidth());
        groupSubscriptions->setSizePolicy(sizePolicy2);
        vboxLayout = new QVBoxLayout(groupSubscriptions);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        vboxLayout->setContentsMargins(9, 9, 9, 9);
#endif
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        listSubscriptions = new QListWidget(groupSubscriptions);
        listSubscriptions->setObjectName(QStringLiteral("listSubscriptions"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listSubscriptions->sizePolicy().hasHeightForWidth());
        listSubscriptions->setSizePolicy(sizePolicy3);

        vboxLayout->addWidget(listSubscriptions);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setContentsMargins(0, 0, 0, 0);
        hboxLayout3->setObjectName(QStringLiteral("hboxLayout3"));
        btnSelectAll = new QPushButton(groupSubscriptions);
        btnSelectAll->setObjectName(QStringLiteral("btnSelectAll"));

        hboxLayout3->addWidget(btnSelectAll);

        spacerItem3 = new QSpacerItem(70, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem3);

        btnDeselectAll = new QPushButton(groupSubscriptions);
        btnDeselectAll->setObjectName(QStringLiteral("btnDeselectAll"));

        hboxLayout3->addWidget(btnDeselectAll);


        vboxLayout->addLayout(hboxLayout3);

        splitter->addWidget(groupSubscriptions);

        gridLayout->addWidget(splitter, 0, 0, 1, 1);

        QWidget::setTabOrder(editUser, editServer);
        QWidget::setTabOrder(editServer, timeoutSpinBox);
        QWidget::setTabOrder(timeoutSpinBox, editPrimaryGroup);
        QWidget::setTabOrder(editPrimaryGroup, btnConnect);
        QWidget::setTabOrder(btnConnect, listSubscriptions);
        QWidget::setTabOrder(listSubscriptions, comboDbType);
        QWidget::setTabOrder(comboDbType, editDbConnection);
        QWidget::setTabOrder(editDbConnection, btnDbSwitchToReported);
        QWidget::setTabOrder(btnDbSwitchToReported, btnDbConnect);
        QWidget::setTabOrder(btnDbConnect, btnClose);

        retranslateUi(ConnectionDialog);
        QObject::connect(btnClose, SIGNAL(clicked()), ConnectionDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ConnectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ConnectionDialog)
    {
        ConnectionDialog->setWindowTitle(QApplication::translate("ConnectionDialog", "Setup connection", Q_NULLPTR));
        btnClose->setText(QApplication::translate("ConnectionDialog", "Continue", Q_NULLPTR));
        groupDatabase->setTitle(QApplication::translate("ConnectionDialog", "Database", Q_NULLPTR));
        btnDbSwitchToReported->setText(QApplication::translate("ConnectionDialog", "Switch to reported", Q_NULLPTR));
        btnDbConnect->setText(QApplication::translate("ConnectionDialog", "Connect", Q_NULLPTR));
        labelDbType->setText(QApplication::translate("ConnectionDialog", "Type:", Q_NULLPTR));
        labelDbConnection->setText(QApplication::translate("ConnectionDialog", "Connection:", Q_NULLPTR));
        label_7->setText(QApplication::translate("ConnectionDialog", "Reported:", Q_NULLPTR));
        groupMessaging->setTitle(QApplication::translate("ConnectionDialog", "Messaging", Q_NULLPTR));
        label_4->setText(QApplication::translate("ConnectionDialog", "Timeout in sec.:", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("ConnectionDialog", "Connect", Q_NULLPTR));
        label_5->setText(QApplication::translate("ConnectionDialog", "Primary group:", Q_NULLPTR));
        label_2->setText(QApplication::translate("ConnectionDialog", "Server:", Q_NULLPTR));
        editServer->setText(QApplication::translate("ConnectionDialog", "localhost", Q_NULLPTR));
        editUser->setText(QApplication::translate("ConnectionDialog", "user", Q_NULLPTR));
        label->setText(QApplication::translate("ConnectionDialog", "User:", Q_NULLPTR));
        label_3->setText(QApplication::translate("ConnectionDialog", "Peer certificate:", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnPeerCertificateOpen->setToolTip(QApplication::translate("ConnectionDialog", "Select peer certificate file", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPeerCertificateOpen->setText(QApplication::translate("ConnectionDialog", "...", Q_NULLPTR));
        groupSubscriptions->setTitle(QApplication::translate("ConnectionDialog", "Subscriptions", Q_NULLPTR));
        btnSelectAll->setText(QApplication::translate("ConnectionDialog", "Select All", Q_NULLPTR));
        btnDeselectAll->setText(QApplication::translate("ConnectionDialog", "Deselect All", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConnectionDialog: public Ui_ConnectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTIONDIALOG_H
