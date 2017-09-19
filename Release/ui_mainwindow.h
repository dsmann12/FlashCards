/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionLoad;
    QAction *actionSave;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *testname_label;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QHBoxLayout *horizontalLayout_2;
    QFormLayout *formLayout;
    QLabel *tquestion_label;
    QLineEdit *tquestion_text;
    QLabel *tanswer_label;
    QPlainTextEdit *tanswer_text;
    QVBoxLayout *verticalLayout_3;
    QPushButton *add_tquestion_button;
    QPushButton *update_tquestion_button;
    QPushButton *remove_tquestion_button;
    QPushButton *clear_tquestion_button;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *iquestion_label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *iquestion_text;
    QPushButton *browse_button;
    QLabel *ianswer_label;
    QPlainTextEdit *ianswer_text;
    QVBoxLayout *verticalLayout_4;
    QPushButton *add_iquestion_button;
    QPushButton *update_iquestion_button;
    QPushButton *remove_iquestion_button;
    QPushButton *clear_iquestion_button;
    QHBoxLayout *horizontalLayout;
    QPushButton *take_test_button;
    QPushButton *study_test_button;
    QPushButton *delete_test_button;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(790, 547);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        testname_label = new QLabel(centralWidget);
        testname_label->setObjectName(QStringLiteral("testname_label"));

        verticalLayout_2->addWidget(testname_label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayout_2 = new QHBoxLayout(tab);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        tquestion_label = new QLabel(tab);
        tquestion_label->setObjectName(QStringLiteral("tquestion_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, tquestion_label);

        tquestion_text = new QLineEdit(tab);
        tquestion_text->setObjectName(QStringLiteral("tquestion_text"));

        formLayout->setWidget(0, QFormLayout::FieldRole, tquestion_text);

        tanswer_label = new QLabel(tab);
        tanswer_label->setObjectName(QStringLiteral("tanswer_label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, tanswer_label);

        tanswer_text = new QPlainTextEdit(tab);
        tanswer_text->setObjectName(QStringLiteral("tanswer_text"));

        formLayout->setWidget(1, QFormLayout::FieldRole, tanswer_text);


        horizontalLayout_2->addLayout(formLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        add_tquestion_button = new QPushButton(tab);
        add_tquestion_button->setObjectName(QStringLiteral("add_tquestion_button"));

        verticalLayout_3->addWidget(add_tquestion_button);

        update_tquestion_button = new QPushButton(tab);
        update_tquestion_button->setObjectName(QStringLiteral("update_tquestion_button"));

        verticalLayout_3->addWidget(update_tquestion_button);

        remove_tquestion_button = new QPushButton(tab);
        remove_tquestion_button->setObjectName(QStringLiteral("remove_tquestion_button"));

        verticalLayout_3->addWidget(remove_tquestion_button);

        clear_tquestion_button = new QPushButton(tab);
        clear_tquestion_button->setObjectName(QStringLiteral("clear_tquestion_button"));

        verticalLayout_3->addWidget(clear_tquestion_button);


        horizontalLayout_2->addLayout(verticalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_4 = new QHBoxLayout(tab_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        iquestion_label = new QLabel(tab_2);
        iquestion_label->setObjectName(QStringLiteral("iquestion_label"));

        horizontalLayout_3->addWidget(iquestion_label);

        horizontalSpacer = new QSpacerItem(3, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        iquestion_text = new QLineEdit(tab_2);
        iquestion_text->setObjectName(QStringLiteral("iquestion_text"));

        horizontalLayout_3->addWidget(iquestion_text);

        browse_button = new QPushButton(tab_2);
        browse_button->setObjectName(QStringLiteral("browse_button"));

        horizontalLayout_3->addWidget(browse_button);


        formLayout_2->setLayout(0, QFormLayout::SpanningRole, horizontalLayout_3);

        ianswer_label = new QLabel(tab_2);
        ianswer_label->setObjectName(QStringLiteral("ianswer_label"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, ianswer_label);

        ianswer_text = new QPlainTextEdit(tab_2);
        ianswer_text->setObjectName(QStringLiteral("ianswer_text"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, ianswer_text);


        horizontalLayout_4->addLayout(formLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        add_iquestion_button = new QPushButton(tab_2);
        add_iquestion_button->setObjectName(QStringLiteral("add_iquestion_button"));

        verticalLayout_4->addWidget(add_iquestion_button);

        update_iquestion_button = new QPushButton(tab_2);
        update_iquestion_button->setObjectName(QStringLiteral("update_iquestion_button"));

        verticalLayout_4->addWidget(update_iquestion_button);

        remove_iquestion_button = new QPushButton(tab_2);
        remove_iquestion_button->setObjectName(QStringLiteral("remove_iquestion_button"));

        verticalLayout_4->addWidget(remove_iquestion_button);

        clear_iquestion_button = new QPushButton(tab_2);
        clear_iquestion_button->setObjectName(QStringLiteral("clear_iquestion_button"));

        verticalLayout_4->addWidget(clear_iquestion_button);


        horizontalLayout_4->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        take_test_button = new QPushButton(centralWidget);
        take_test_button->setObjectName(QStringLiteral("take_test_button"));

        horizontalLayout->addWidget(take_test_button);

        study_test_button = new QPushButton(centralWidget);
        study_test_button->setObjectName(QStringLiteral("study_test_button"));

        horizontalLayout->addWidget(study_test_button);

        delete_test_button = new QPushButton(centralWidget);
        delete_test_button->setObjectName(QStringLiteral("delete_test_button"));

        horizontalLayout->addWidget(delete_test_button);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 790, 20));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Test Creator", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        testname_label->setText(QApplication::translate("MainWindow", "Test Name", Q_NULLPTR));
        tquestion_label->setText(QApplication::translate("MainWindow", "Question:", Q_NULLPTR));
        tanswer_label->setText(QApplication::translate("MainWindow", "Answer:", Q_NULLPTR));
        add_tquestion_button->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        update_tquestion_button->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        remove_tquestion_button->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        clear_tquestion_button->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Text Question", Q_NULLPTR));
        iquestion_label->setText(QApplication::translate("MainWindow", "Image", Q_NULLPTR));
        browse_button->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        ianswer_label->setText(QApplication::translate("MainWindow", "Answer:", Q_NULLPTR));
        add_iquestion_button->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        update_iquestion_button->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        remove_iquestion_button->setText(QApplication::translate("MainWindow", "Remove", Q_NULLPTR));
        clear_iquestion_button->setText(QApplication::translate("MainWindow", "Clear", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Image Question", Q_NULLPTR));
        take_test_button->setText(QApplication::translate("MainWindow", "Take Test", Q_NULLPTR));
        study_test_button->setText(QApplication::translate("MainWindow", "Study", Q_NULLPTR));
        delete_test_button->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
