/********************************************************************************
** Form generated from reading UI file 'OneDrive.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEDRIVE_H
#define UI_ONEDRIVE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OneDriveClass
{
public:
    QWidget *centralWidget;
    QPushButton *login;
    QPushButton *pushButton;
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
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *UserTaken;
    QLabel *userTakenIcon;
    QLabel *label_18;
    QLabel *userSucces;
    QLineEdit *Username;

    void setupUi(QMainWindow *OneDriveClass)
    {
        if (OneDriveClass->objectName().isEmpty())
            OneDriveClass->setObjectName(QString::fromUtf8("OneDriveClass"));
        OneDriveClass->resize(600, 482);
        OneDriveClass->setMinimumSize(QSize(600, 482));
        OneDriveClass->setLayoutDirection(Qt::RightToLeft);
        OneDriveClass->setStyleSheet(QString::fromUtf8("\n"
"\n"
"\n"
"QMainWindow{\n"
"background: rgb(206, 195, 247);\n"
"}\n"
""));
        OneDriveClass->setIconSize(QSize(11, 12));
        centralWidget = new QWidget(OneDriveClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        login = new QPushButton(centralWidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(170, 310, 111, 31));
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        login->setFont(font);
        login->setCursor(QCursor(Qt::ArrowCursor));
        login->setLayoutDirection(Qt::RightToLeft);
        login->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon;
        icon.addFile(QString::fromUtf8("Assets/logoLoginButton.png"), QSize(), QIcon::Normal, QIcon::Off);
        login->setIcon(icon);
        login->setIconSize(QSize(28, 22));
        login->setAutoDefault(false);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(340, 310, 111, 31));
        pushButton->setLayoutDirection(Qt::LeftToRight);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Assets/logoReg.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(24, 29));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 230, 111, 21));
        label->setStyleSheet(QString::fromUtf8("font-size:20px;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 10, 441, 81));
        label_2->setStyleSheet(QString::fromUtf8("font-size:36px;\n"
"font-weight:bold;\n"
"color:white;\n"
""));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(470, 310, 151, 131));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:40px;"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(510, 220, 151, 131));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:40px;\n"
""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(360, 370, 151, 131));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:40px;"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(390, 220, 81, 81));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:30%;"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(300, 280, 61, 61));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:30%;"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(490, 330, 151, 171));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 114, 195);\n"
"border-radius:40px;"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(550, 260, 151, 131));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 114, 195);\n"
"border-radius:40px;"));
        label_9->setFrameShape(QFrame::StyledPanel);
        label_9->setFrameShadow(QFrame::Sunken);
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(390, 390, 151, 131));
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 114, 195);\n"
"border-radius:40px;"));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(560, 110, 91, 81));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:40px;\n"
""));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(-70, -70, 151, 131));
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:40px;"));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(-120, 20, 151, 131));
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:40px;"));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(-60, -60, 131, 111));
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 114, 195);\n"
"border-radius:40px;"));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(-110, 30, 131, 111));
        label_15->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 114, 195);\n"
"border-radius:40px;"));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(-40, 200, 81, 81));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 149, 255);\n"
"border-radius:40px;"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(110, 50, 411, 301));
        label_17->setPixmap(QPixmap(QString::fromUtf8("Assets/LogoQtFinal.png")));
        label_17->setScaledContents(true);
        UserTaken = new QLabel(centralWidget);
        UserTaken->setObjectName(QString::fromUtf8("UserTaken"));
        UserTaken->setGeometry(QRect(40, 370, 521, 41));
        UserTaken->setStyleSheet(QString::fromUtf8("font-size: 20px;\n"
"color:white;\n"
"\n"
""));
        userTakenIcon = new QLabel(centralWidget);
        userTakenIcon->setObjectName(QString::fromUtf8("userTakenIcon"));
        userTakenIcon->setGeometry(QRect(0, 380, 41, 31));
        userTakenIcon->setPixmap(QPixmap(QString::fromUtf8("Assets/wrong.png")));
        userTakenIcon->setScaledContents(true);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(130, 60, 361, 301));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../../../../../../.designer/backup/LogoQtFinal.png")));
        label_18->setScaledContents(true);
        userSucces = new QLabel(centralWidget);
        userSucces->setObjectName(QString::fromUtf8("userSucces"));
        userSucces->setGeometry(QRect(0, 380, 41, 31));
        userSucces->setPixmap(QPixmap(QString::fromUtf8("Assets/right.png")));
        userSucces->setScaledContents(true);
        Username = new QLineEdit(centralWidget);
        Username->setObjectName(QString::fromUtf8("Username"));
        Username->setGeometry(QRect(160, 270, 291, 31));
        Username->setStyleSheet(QString::fromUtf8("border: 1px solid;\n"
" border-radius:15px;\n"
" background-color: palette(base);\n"
"font-weight:bold;\n"
""));
        OneDriveClass->setCentralWidget(centralWidget);
        label_18->raise();
        label_17->raise();
        label_16->raise();
        label_12->raise();
        label_7->raise();
        label_6->raise();
        label_3->raise();
        login->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        label_4->raise();
        label_5->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        userTakenIcon->raise();
        userSucces->raise();
        UserTaken->raise();
        Username->raise();

        retranslateUi(OneDriveClass);
        QObject::connect(login, SIGNAL(clicked()), OneDriveClass, SLOT(LoginToAccount()));
        QObject::connect(pushButton, SIGNAL(clicked()), OneDriveClass, SLOT(Signup()));

        QMetaObject::connectSlotsByName(OneDriveClass);
    } // setupUi

    void retranslateUi(QMainWindow *OneDriveClass)
    {
        OneDriveClass->setWindowTitle(QCoreApplication::translate("OneDriveClass", "OneDrive", nullptr));
        login->setText(QCoreApplication::translate("OneDriveClass", "Login", nullptr));
        pushButton->setText(QCoreApplication::translate("OneDriveClass", "Register", nullptr));
        label->setText(QCoreApplication::translate("OneDriveClass", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("OneDriveClass", "Welcome to AirSync!", nullptr));
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
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        UserTaken->setText(QString());
        userTakenIcon->setText(QString());
        label_18->setText(QString());
        userSucces->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OneDriveClass: public Ui_OneDriveClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEDRIVE_H
