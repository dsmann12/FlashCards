#include "card.h"
#include "ui_card.h"
#include "question.h"

Card::Card(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Card)
{
    ui->setupUi(this);   
    index = 0;
}

Card::Card(QWidget *parent,
           std::vector<std::shared_ptr<Question>> test) :
    QDialog(parent),
    ui(new Ui::Card)
{
    ui->setupUi(this);
    test_ = test;
    index = 0;
    ui->qlabel->adjustSize();
    test_[index]->showQuestion(ui->qlabel);
}

Card::~Card()
{
    delete ui;
}

void Card::on_show_button_clicked()
{
    ui->alabel->setText(QString::fromStdString(test_[index]->answer()));
}

void Card::on_next_button_clicked()
{
    index++;
    if(index < test_.size()) {
        ui->qlabel->clear();
        ui->alabel->clear();
        test_[index]->showQuestion(ui->qlabel);
    }
    else {
        this->close();
    }
}

void Card::on_back_button_clicked()
{
    if(index > 0){
        index--;
        ui->qlabel->clear();
        ui->alabel->clear();
        test_[index]->showQuestion(ui->qlabel);
    }

}
