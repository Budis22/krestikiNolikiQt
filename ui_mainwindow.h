/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QLabel *win_loss_label;
    QHBoxLayout *horizontalLayout;
    QPushButton *krestik_button;
    QPushButton *nolik_button;
    QPushButton *Play_button;
    QPushButton *About_button;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QPushButton *pushButton_field_5;
    QPushButton *pushButton_field_8;
    QPushButton *pushButton_field_7;
    QPushButton *pushButton_field_1;
    QPushButton *pushButton_field_2;
    QPushButton *pushButton_field_4;
    QPushButton *pushButton_field_3;
    QPushButton *pushButton_field_9;
    QPushButton *pushButton_field_6;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(655, 448);
        MainWindow->setMinimumSize(QSize(600, 0));
        MainWindow->setMaximumSize(QSize(750, 450));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/tictactoe/images/title_ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(20);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/tictactoe/images/name.png")));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        win_loss_label = new QLabel(centralwidget);
        win_loss_label->setObjectName("win_loss_label");
        win_loss_label->setMinimumSize(QSize(0, 30));
        win_loss_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(win_loss_label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        krestik_button = new QPushButton(centralwidget);
        krestik_button->setObjectName("krestik_button");
        krestik_button->setMinimumSize(QSize(0, 34));
        krestik_button->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(krestik_button);

        nolik_button = new QPushButton(centralwidget);
        nolik_button->setObjectName("nolik_button");
        nolik_button->setMinimumSize(QSize(0, 34));

        horizontalLayout->addWidget(nolik_button);


        verticalLayout->addLayout(horizontalLayout);

        Play_button = new QPushButton(centralwidget);
        Play_button->setObjectName("Play_button");
        Play_button->setMinimumSize(QSize(0, 38));
        Play_button->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(Play_button);

        About_button = new QPushButton(centralwidget);
        About_button->setObjectName("About_button");
        About_button->setMinimumSize(QSize(0, 38));

        verticalLayout->addWidget(About_button);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(320, 320));
        tabWidget->setMaximumSize(QSize(320, 320));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(5);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(6, 5, 5, 5);
        pushButton_field_5 = new QPushButton(tab);
        pushButton_field_5->setObjectName("pushButton_field_5");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_field_5->sizePolicy().hasHeightForWidth());
        pushButton_field_5->setSizePolicy(sizePolicy1);
        pushButton_field_5->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_5, 0, 0, 1, 1);

        pushButton_field_8 = new QPushButton(tab);
        pushButton_field_8->setObjectName("pushButton_field_8");
        sizePolicy1.setHeightForWidth(pushButton_field_8->sizePolicy().hasHeightForWidth());
        pushButton_field_8->setSizePolicy(sizePolicy1);
        pushButton_field_8->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_8, 0, 1, 1, 1);

        pushButton_field_7 = new QPushButton(tab);
        pushButton_field_7->setObjectName("pushButton_field_7");
        sizePolicy1.setHeightForWidth(pushButton_field_7->sizePolicy().hasHeightForWidth());
        pushButton_field_7->setSizePolicy(sizePolicy1);
        pushButton_field_7->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_7, 0, 2, 1, 1);

        pushButton_field_1 = new QPushButton(tab);
        pushButton_field_1->setObjectName("pushButton_field_1");
        sizePolicy1.setHeightForWidth(pushButton_field_1->sizePolicy().hasHeightForWidth());
        pushButton_field_1->setSizePolicy(sizePolicy1);
        pushButton_field_1->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_1, 1, 0, 1, 1);

        pushButton_field_2 = new QPushButton(tab);
        pushButton_field_2->setObjectName("pushButton_field_2");
        sizePolicy1.setHeightForWidth(pushButton_field_2->sizePolicy().hasHeightForWidth());
        pushButton_field_2->setSizePolicy(sizePolicy1);
        pushButton_field_2->setMinimumSize(QSize(100, 100));
        pushButton_field_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(pushButton_field_2, 1, 1, 1, 1);

        pushButton_field_4 = new QPushButton(tab);
        pushButton_field_4->setObjectName("pushButton_field_4");
        sizePolicy1.setHeightForWidth(pushButton_field_4->sizePolicy().hasHeightForWidth());
        pushButton_field_4->setSizePolicy(sizePolicy1);
        pushButton_field_4->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_4, 1, 2, 1, 1);

        pushButton_field_3 = new QPushButton(tab);
        pushButton_field_3->setObjectName("pushButton_field_3");
        sizePolicy1.setHeightForWidth(pushButton_field_3->sizePolicy().hasHeightForWidth());
        pushButton_field_3->setSizePolicy(sizePolicy1);
        pushButton_field_3->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_3, 2, 0, 1, 1);

        pushButton_field_9 = new QPushButton(tab);
        pushButton_field_9->setObjectName("pushButton_field_9");
        sizePolicy1.setHeightForWidth(pushButton_field_9->sizePolicy().hasHeightForWidth());
        pushButton_field_9->setSizePolicy(sizePolicy1);
        pushButton_field_9->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_9, 2, 1, 1, 1);

        pushButton_field_6 = new QPushButton(tab);
        pushButton_field_6->setObjectName("pushButton_field_6");
        sizePolicy1.setHeightForWidth(pushButton_field_6->sizePolicy().hasHeightForWidth());
        pushButton_field_6->setSizePolicy(sizePolicy1);
        pushButton_field_6->setMinimumSize(QSize(100, 100));

        gridLayout->addWidget(pushButton_field_6, 2, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(tab_2);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_3->setWordWrap(true);

        verticalLayout_2->addWidget(label_3);

        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 655, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Krestiki-noliki", nullptr));
        label->setText(QString());
        win_loss_label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\261\320\265\320\264\320\260", nullptr));
        krestik_button->setText(QString());
        nolik_button->setText(QString());
        Play_button->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260\321\202\321\214", nullptr));
        About_button->setText(QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\270\320\263\321\200\320\265", nullptr));
        pushButton_field_5->setText(QString());
        pushButton_field_8->setText(QString());
        pushButton_field_7->setText(QString());
        pushButton_field_1->setText(QString());
        pushButton_field_2->setText(QString());
        pushButton_field_4->setText(QString());
        pushButton_field_3->setText(QString());
        pushButton_field_9->setText(QString());
        pushButton_field_6->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\243\321\207\320\265\320\261\320\275\321\213\320\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\236\320\261 \320\230\320\263\321\200\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
