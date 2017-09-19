#include <string>
#include <iostream>
#include "question.h"
#include "textquestion.h"
#include <cereal/archives/xml.hpp>
#include <cereal/types/polymorphic.hpp>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QTabWidget>
#include "ui_mainwindow.h"

TextQuestion::TextQuestion() :
    Question(){}

TextQuestion::TextQuestion(const std::string &q) :
    Question(q) {}

TextQuestion::TextQuestion(const std::string &q, const std::string &a) :
    Question(q, a) {}

void TextQuestion::showQuestion(QLabel *qlbl) const {
    qlbl->setText(QString::fromStdString(_question));
}

void TextQuestion::updateForm(Ui::MainWindow *win) const {
    win->tquestion_text->setText(QString::fromStdString(_question));
    win->tanswer_text->setPlainText(QString::fromStdString(_answer));
    win->tabWidget->setCurrentIndex(0);
}

std::string TextQuestion::label() const {
    return "Question: " + _question;
}

template <class Archive>
void TextQuestion::serialize(Archive &ar) {
    ar(cereal::make_nvp("Question", _question), cereal::make_nvp("Answer",_answer));
}

CEREAL_REGISTER_TYPE(TextQuestion)

CEREAL_REGISTER_POLYMORPHIC_RELATION(Question, TextQuestion)
