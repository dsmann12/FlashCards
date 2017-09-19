/********************************************************************************
** Form generated from reading UI file 'card.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARD_H
#define UI_CARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Card
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *qlabel;
    QLabel *alabel;
    QHBoxLayout *horizontalLayout;
    QPushButton *back_button;
    QPushButton *show_button;
    QPushButton *next_button;

    void setupUi(QDialog *Card)
    {
        if (Card->objectName().isEmpty())
            Card->setObjectName(QStringLiteral("Card"));
        Card->resize(651, 602);
        verticalLayout_2 = new QVBoxLayout(Card);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        qlabel = new QLabel(Card);
        qlabel->setObjectName(QStringLiteral("qlabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qlabel->sizePolicy().hasHeightForWidth());
        qlabel->setSizePolicy(sizePolicy);
        qlabel->setMinimumSize(QSize(627, 272));
        qlabel->setAlignment(Qt::AlignCenter);
        qlabel->setWordWrap(true);

        verticalLayout->addWidget(qlabel);

        alabel = new QLabel(Card);
        alabel->setObjectName(QStringLiteral("alabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(alabel->sizePolicy().hasHeightForWidth());
        alabel->setSizePolicy(sizePolicy1);
        alabel->setMaximumSize(QSize(629, 16777215));
        alabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        alabel->setWordWrap(true);

        verticalLayout->addWidget(alabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        back_button = new QPushButton(Card);
        back_button->setObjectName(QStringLiteral("back_button"));

        horizontalLayout->addWidget(back_button);

        show_button = new QPushButton(Card);
        show_button->setObjectName(QStringLiteral("show_button"));

        horizontalLayout->addWidget(show_button);

        next_button = new QPushButton(Card);
        next_button->setObjectName(QStringLiteral("next_button"));

        horizontalLayout->addWidget(next_button);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Card);

        QMetaObject::connectSlotsByName(Card);
    } // setupUi

    void retranslateUi(QDialog *Card)
    {
        Card->setWindowTitle(QApplication::translate("Card", "Dialog", Q_NULLPTR));
        qlabel->setText(QString());
        alabel->setText(QString());
        back_button->setText(QApplication::translate("Card", "Back", Q_NULLPTR));
        show_button->setText(QApplication::translate("Card", "Show Answer", Q_NULLPTR));
        next_button->setText(QApplication::translate("Card", "Next", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Card: public Ui_Card {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARD_H
