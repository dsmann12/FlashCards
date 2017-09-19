#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <string>
#include "textquestion.h"
#include <vector>
#include "card.h"
#include <iostream>
#include <fstream>
#include <QFileDialog>
#include <cereal/archives/xml.hpp>
#include <cereal/types/polymorphic.hpp>
#include "imagequestion.h"
#include <cereal/types/vector.hpp>
#include <QList>
#include <algorithm>
#include <random>
#include <iterator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->listWidget, &QListWidget::currentRowChanged, [=](int x) {
        if(x >= 0) {
            _test[x]->updateForm(ui);
        }
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

const std::vector<std::shared_ptr<Question>> & MainWindow::test() const {
    return _test;
}

void MainWindow::on_add_tquestion_button_clicked()
{
    TextQuestion *q = new TextQuestion(ui->tquestion_text->text().toStdString(), ui->tanswer_text->toPlainText().toStdString());
    std::shared_ptr<Question> p(q);
    _test.push_back(p);
    ui->listWidget->addItem(QString::fromStdString(q->label()));
    ui->listWidget->setCurrentRow(_test.size()-1);
}

void MainWindow::on_remove_tquestion_button_clicked()
{
    int index = ui->listWidget->currentRow();
    qDeleteAll(ui->listWidget->selectedItems());
    ui->listWidget->setCurrentItem(0);
    _test.erase(_test.begin()+index);
}

void MainWindow::on_clear_tquestion_button_clicked()
{
    ui->tquestion_text->clear();
    ui->tanswer_text->clear();
}

void MainWindow::on_update_tquestion_button_clicked()
{
    int index = ui->listWidget->currentRow();
    _test[index]->setQuestion(ui->tquestion_text->text().toStdString());
    _test[index]->setAnswer(ui->tanswer_text->toPlainText().toStdString());
    ui->listWidget->item(index)->setText(QString::fromStdString(_test[index]->label()));
}

void MainWindow::on_take_test_button_clicked()
{
    std::vector<std::shared_ptr<Question>> shuffled = _test;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(shuffled.begin(), shuffled.end(), g);
    Card *card = new Card(this, shuffled);
    card->exec();
    delete card;
}

void MainWindow::on_study_test_button_clicked()
{
    Card *card = new Card(this, _test);
    card->exec();
    delete card;
}

void MainWindow::on_delete_test_button_clicked()
{
    int x = ui->tabWidget->currentIndex();
    QString str = "Current index is" + QString::number(x);
    QMessageBox::information(this, "Which Index", str);
    ui->tabWidget->setCurrentIndex(1);
}

void MainWindow::on_actionLoad_triggered()
{
    try {
        QString filename = QFileDialog::getOpenFileName(this, "Open File", ".");
        std::ifstream file {filename.toStdString()};
        if(!file) {
            throw std::exception();
        }

        cereal::XMLInputArchive iarchive(file);
        _test.clear();
        iarchive(_test);
        ui->listWidget->clear();
        for(unsigned int i = 0; i < _test.size(); i++) {
            ui->listWidget->addItem(QString::fromStdString(_test[i]->label()));
        }
    }
    catch(std::exception e) {
        QMessageBox::critical(this, "File Error", "A file error has occured!");
    }
}

void MainWindow::on_actionSave_triggered()
{
    QString filename = QFileDialog::getSaveFileName(this, tr("Save File"), ".");
    std::ofstream file(filename.toStdString());
    cereal::XMLOutputArchive oarchive(file);

        oarchive(_test);

}

void MainWindow::on_actionNew_triggered()
{
    ui->listWidget->clear();
    ui->tquestion_text->clear();
    ui->tanswer_text->clear();
    ui->iquestion_text->clear();
    ui->ianswer_text->clear();
    _test.clear();
}

void MainWindow::on_browse_button_clicked()
{
    QString pathname = QFileDialog::getOpenFileName(this, "Open File", ".");
    ui->iquestion_text->setText(pathname);
}

void MainWindow::on_add_iquestion_button_clicked()
{
    ImageQuestion *q = new ImageQuestion(ui->iquestion_text->text().toStdString(), ui->ianswer_text->toPlainText().toStdString());
    std::shared_ptr<Question> p(q);
    _test.push_back(p);
    ui->listWidget->addItem(QString::fromStdString(q->label()));
    ui->listWidget->setCurrentRow(_test.size()-1);
}

void MainWindow::on_update_iquestion_button_clicked()
{
    int index = ui->listWidget->currentRow();
    _test[index]->setQuestion(ui->iquestion_text->text().toStdString());
    _test[index]->setAnswer(ui->ianswer_text->toPlainText().toStdString());
    ui->listWidget->item(index)->setText(QString::fromStdString(_test[index]->label()));
}

void MainWindow::on_remove_iquestion_button_clicked()
{
    int index = ui->listWidget->currentRow();
    qDeleteAll(ui->listWidget->selectedItems());
    ui->listWidget->setCurrentItem(0);
    _test.erase(_test.begin()+index);
}

void MainWindow::on_clear_iquestion_button_clicked()
{
    ui->iquestion_text->clear();
    ui->ianswer_text->clear();
}
