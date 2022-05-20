/********************************************************************************
** Form generated from reading UI file 'Account.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNT_H
#define UI_ACCOUNT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Account
{
public:
    QScrollArea *localFolder;
    QWidget *scrollAreaWidgetContents;
    QWidget *test;
    QScrollArea *serverFolder;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *localWidget;
    QWidget *serverWidget;
    QWidget *menu_bar_local;
    QPushButton *back_local;
    QPushButton *rename_local;
    QPushButton *delete_local;
    QWidget *menu_bar_server;
    QPushButton *back_server;
    QPushButton *restore;
    QPushButton *serverTrash;
    QWidget *menu_bar_local_2;
    QPushButton *back_local_2;
    QPushButton *back_local_3;
    QPushButton *helloUsername;
    QPushButton *back_local_4;
    QPushButton *back_local_5;
    QPushButton *trashButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QWidget *Account)
    {
        if (Account->objectName().isEmpty())
            Account->setObjectName(QString::fromUtf8("Account"));
        Account->resize(1227, 753);
        Account->setStyleSheet(QString::fromUtf8("#Account{\n"
"background: qlineargradient(spread:pad, x1:0.489, y1:1, x2:0.505682, y2:0, stop:0 rgba(102, 91, 137, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
".QScrollArea\n"
"{\n"
"border:1px solid rgb(112, 6, 141);\n"
"}\n"
"\n"
""));
        localFolder = new QScrollArea(Account);
        localFolder->setObjectName(QString::fromUtf8("localFolder"));
        localFolder->setGeometry(QRect(100, 100, 271, 341));
        localFolder->setStyleSheet(QString::fromUtf8(""));
        localFolder->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        localFolder->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 339));
        scrollAreaWidgetContents->setMinimumSize(QSize(182, 0));
        localFolder->setWidget(scrollAreaWidgetContents);
        test = new QWidget(Account);
        test->setObjectName(QString::fromUtf8("test"));
        test->setGeometry(QRect(90, 140, 181, 251));
        serverFolder = new QScrollArea(Account);
        serverFolder->setObjectName(QString::fromUtf8("serverFolder"));
        serverFolder->setGeometry(QRect(770, 100, 271, 341));
        serverFolder->setStyleSheet(QString::fromUtf8("scrollArea\n"
"{\n"
"background:transparent;\n"
"border:1px solid rgb(97, 8, 176);\n"
"}"));
        serverFolder->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        serverFolder->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 269, 339));
        scrollAreaWidgetContents_2->setMinimumSize(QSize(182, 0));
        serverFolder->setWidget(scrollAreaWidgetContents_2);
        localWidget = new QWidget(Account);
        localWidget->setObjectName(QString::fromUtf8("localWidget"));
        localWidget->setGeometry(QRect(190, 460, 120, 80));
        serverWidget = new QWidget(Account);
        serverWidget->setObjectName(QString::fromUtf8("serverWidget"));
        serverWidget->setGeometry(QRect(860, 480, 120, 80));
        menu_bar_local = new QWidget(Account);
        menu_bar_local->setObjectName(QString::fromUtf8("menu_bar_local"));
        menu_bar_local->setGeometry(QRect(100, 79, 271, 21));
        menu_bar_local->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);"));
        back_local = new QPushButton(menu_bar_local);
        back_local->setObjectName(QString::fromUtf8("back_local"));
        back_local->setGeometry(QRect(0, 0, 81, 24));
        back_local->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        rename_local = new QPushButton(menu_bar_local);
        rename_local->setObjectName(QString::fromUtf8("rename_local"));
        rename_local->setGeometry(QRect(90, 0, 75, 24));
        rename_local->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        delete_local = new QPushButton(menu_bar_local);
        delete_local->setObjectName(QString::fromUtf8("delete_local"));
        delete_local->setGeometry(QRect(180, 0, 75, 24));
        delete_local->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        menu_bar_server = new QWidget(Account);
        menu_bar_server->setObjectName(QString::fromUtf8("menu_bar_server"));
        menu_bar_server->setGeometry(QRect(770, 80, 271, 21));
        menu_bar_server->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);"));
        back_server = new QPushButton(menu_bar_server);
        back_server->setObjectName(QString::fromUtf8("back_server"));
        back_server->setGeometry(QRect(0, 0, 81, 24));
        back_server->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        restore = new QPushButton(menu_bar_server);
        restore->setObjectName(QString::fromUtf8("restore"));
        restore->setGeometry(QRect(90, 0, 81, 24));
        restore->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        serverTrash = new QPushButton(menu_bar_server);
        serverTrash->setObjectName(QString::fromUtf8("serverTrash"));
        serverTrash->setGeometry(QRect(170, 0, 101, 24));
        serverTrash->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
""));
        menu_bar_local_2 = new QWidget(Account);
        menu_bar_local_2->setObjectName(QString::fromUtf8("menu_bar_local_2"));
        menu_bar_local_2->setGeometry(QRect(0, 0, 1291, 31));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(menu_bar_local_2->sizePolicy().hasHeightForWidth());
        menu_bar_local_2->setSizePolicy(sizePolicy);
        menu_bar_local_2->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);"));
        back_local_2 = new QPushButton(menu_bar_local_2);
        back_local_2->setObjectName(QString::fromUtf8("back_local_2"));
        back_local_2->setGeometry(QRect(1090, 0, 101, 31));
        back_local_2->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        back_local_3 = new QPushButton(menu_bar_local_2);
        back_local_3->setObjectName(QString::fromUtf8("back_local_3"));
        back_local_3->setGeometry(QRect(0, 0, 101, 31));
        back_local_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        helloUsername = new QPushButton(menu_bar_local_2);
        helloUsername->setObjectName(QString::fromUtf8("helloUsername"));
        helloUsername->setGeometry(QRect(660, 0, 121, 31));
        helloUsername->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
""));
        back_local_4 = new QPushButton(menu_bar_local_2);
        back_local_4->setObjectName(QString::fromUtf8("back_local_4"));
        back_local_4->setGeometry(QRect(110, 0, 101, 31));
        back_local_4->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        back_local_5 = new QPushButton(menu_bar_local_2);
        back_local_5->setObjectName(QString::fromUtf8("back_local_5"));
        back_local_5->setGeometry(QRect(220, 0, 101, 31));
        back_local_5->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"font-weight:bold ;\n"
"font-style : normal;\n"
"border: 0.1px solid black;\n"
"border-radius:15px;\n"
"background:rgb(71, 61, 124);\n"
"color:white;\n"
"font-size:16px;\n"
"}\n"
"\n"
"QPushButton:hover\n"
"{\n"
"   background-color:rgb(170, 149, 255);\n"
"}"));
        trashButton = new QPushButton(Account);
        trashButton->setObjectName(QString::fromUtf8("trashButton"));
        trashButton->setGeometry(QRect(1130, 520, 71, 71));
        trashButton->setStyleSheet(QString::fromUtf8("background:transparent;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Assets/trash.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8("Assets/trashClick.png"), QSize(), QIcon::Normal, QIcon::On);
        icon.addFile(QString::fromUtf8("Assets/trashClick.png"), QSize(), QIcon::Disabled, QIcon::On);
        icon.addFile(QString::fromUtf8("Assets/trashClick.png"), QSize(), QIcon::Active, QIcon::On);
        trashButton->setIcon(icon);
        trashButton->setIconSize(QSize(50, 50));
        trashButton->setCheckable(true);
        label = new QLabel(Account);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, -10, 151, 91));
        label->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:40px;"));
        label->setPixmap(QPixmap(QString::fromUtf8("Assets/profile (1) (1).png")));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(Account);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(470, 370, 41, 41));
        label_2->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:20px;"));
        label_3 = new QLabel(Account);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(550, 300, 21, 21));
        label_3->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:10px;"));
        label_4 = new QLabel(Account);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(560, 430, 61, 61));
        label_4->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:30px;"));
        label_5 = new QLabel(Account);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(150, 620, 161, 101));
        label_5->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:30px;"));
        label_6 = new QLabel(Account);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 560, 211, 171));
        label_6->setStyleSheet(QString::fromUtf8("background:rgb(82, 71, 144);\n"
"border-radius:30px;"));
        label_7 = new QLabel(Account);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(470, 610, 161, 101));
        label_7->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:30px;"));
        label_8 = new QLabel(Account);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(560, 500, 211, 221));
        label_8->setStyleSheet(QString::fromUtf8("background:rgb(82, 71, 144);\n"
"border-radius:30px;"));
        label_9 = new QLabel(Account);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(740, 560, 211, 151));
        label_9->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:30px;"));
        label_10 = new QLabel(Account);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(930, 570, 161, 221));
        label_10->setStyleSheet(QString::fromUtf8("background:rgb(82, 71, 144);\n"
"border-radius:30px;"));
        label_11 = new QLabel(Account);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(1080, 620, 191, 111));
        label_11->setStyleSheet(QString::fromUtf8("background:rgb(71, 61, 124);\n"
"border-radius:30px;"));
        label_12 = new QLabel(Account);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(-30, 540, 211, 191));
        label_12->setStyleSheet(QString::fromUtf8("background:rgb(82, 71, 144);\n"
"border-radius:30px;"));
        label_11->raise();
        label_9->raise();
        label_7->raise();
        localFolder->raise();
        test->raise();
        serverFolder->raise();
        localWidget->raise();
        serverWidget->raise();
        menu_bar_local->raise();
        menu_bar_server->raise();
        menu_bar_local_2->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_8->raise();
        label_10->raise();
        trashButton->raise();
        label_12->raise();

        retranslateUi(Account);
        QObject::connect(back_local, SIGNAL(clicked()), Account, SLOT(backFolderLocal()));
        QObject::connect(back_server, SIGNAL(clicked()), Account, SLOT(backFolderServer()));
        QObject::connect(rename_local, SIGNAL(clicked()), Account, SLOT(renameLocalSendSignal()));
        QObject::connect(delete_local, SIGNAL(clicked()), Account, SLOT(deleteLocalSendSignal()));
        QObject::connect(back_local_2, SIGNAL(clicked()), Account, SLOT(refresh()));
        QObject::connect(trashButton, SIGNAL(clicked()), Account, SLOT(showTrash()));
        QObject::connect(restore, SIGNAL(clicked()), Account, SLOT(restore()));
        QObject::connect(back_local_3, SIGNAL(clicked()), Account, SLOT(addFolder()));
        QObject::connect(back_local_4, SIGNAL(clicked()), Account, SLOT(addFile()));
        QObject::connect(back_local_5, SIGNAL(clicked()), Account, SLOT(deleteLocal()));

        QMetaObject::connectSlotsByName(Account);
    } // setupUi

    void retranslateUi(QWidget *Account)
    {
        Account->setWindowTitle(QCoreApplication::translate("Account", "Account", nullptr));
        back_local->setText(QCoreApplication::translate("Account", "<- Back", nullptr));
        rename_local->setText(QCoreApplication::translate("Account", "Rename", nullptr));
        delete_local->setText(QCoreApplication::translate("Account", "Delete", nullptr));
        back_server->setText(QCoreApplication::translate("Account", "<- Back", nullptr));
        restore->setText(QCoreApplication::translate("Account", "Restore", nullptr));
        serverTrash->setText(QString());
        back_local_2->setText(QCoreApplication::translate("Account", "Refresh", nullptr));
        back_local_3->setText(QCoreApplication::translate("Account", "Add Folder", nullptr));
        helloUsername->setText(QString());
        back_local_4->setText(QCoreApplication::translate("Account", "Add File", nullptr));
        back_local_5->setText(QCoreApplication::translate("Account", "Delete Local", nullptr));
        trashButton->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Account: public Ui_Account {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNT_H
