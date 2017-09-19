#ifndef CARD_H
#define CARD_H

#include <QDialog>
#include <memory>
#include "question.h"

namespace Ui {
class Card;
}

class Card : public QDialog
{
    Q_OBJECT

public:
    explicit Card(QWidget *parent = 0);
    explicit Card(QWidget *parent = 0, std::vector<std::shared_ptr<Question>> test = *(new std::vector<std::shared_ptr<Question>>()));
    ~Card();

private slots:
    void on_show_button_clicked();

    void on_next_button_clicked();

    void on_back_button_clicked();

private:
    Ui::Card *ui;
    std::vector<std::shared_ptr<Question>> test_;
    unsigned int index;
};

#endif // CARD_H
