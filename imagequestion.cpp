#include <iostream>
#include "question.h"
#include "imagequestion.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cereal/archives/xml.hpp>
#include <cereal/types/polymorphic.hpp>
#include <QPixmap>

ImageQuestion::ImageQuestion() :
    Question() {}

ImageQuestion::ImageQuestion(const std::string &q) :
    Question(q){}

ImageQuestion::ImageQuestion(const std::string &q, const std::string &a) :
    Question(q, a){}

void ImageQuestion::showQuestion(QLabel *qlbl) const {
    QPixmap pic(QString::fromStdString(_question));
    qlbl->setPixmap(pic.scaled(qlbl->width(), qlbl->height(), Qt::KeepAspectRatio));
}

void ImageQuestion::updateForm(Ui::MainWindow *win) const {
    win->iquestion_text->setText(QString::fromStdString(_question));
    win->ianswer_text->setPlainText(QString::fromStdString(_answer));
    win->tabWidget->setCurrentIndex(1);
}

std::string ImageQuestion::label() const {
    return "Image: " + _question;
}

template <class Archive>
void ImageQuestion::serialize(Archive &ar) {
    ar(cereal::make_nvp("Image", _question), cereal::make_nvp("Answer", _answer));
}

CEREAL_REGISTER_TYPE(ImageQuestion)

CEREAL_REGISTER_POLYMORPHIC_RELATION(Question, ImageQuestion)
