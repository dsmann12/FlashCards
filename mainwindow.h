#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "question.h"
#include "card.h"
#include <memory>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    const std::vector<std::shared_ptr<Question> > &test() const;
    ~MainWindow();


private slots:
    void on_add_tquestion_button_clicked();

    void on_remove_tquestion_button_clicked();

    void on_clear_tquestion_button_clicked();

    void on_update_tquestion_button_clicked();

    void on_take_test_button_clicked();

    void on_study_test_button_clicked();

    void on_delete_test_button_clicked();

    void on_actionLoad_triggered();

    void on_actionSave_triggered();

    void on_actionNew_triggered();

    void on_browse_button_clicked();

    void on_add_iquestion_button_clicked();

    void on_update_iquestion_button_clicked();

    void on_remove_iquestion_button_clicked();

    void on_clear_iquestion_button_clicked();

private:
    Ui::MainWindow *ui;
    std::vector<std::shared_ptr<Question>> _test;
};

#endif // MAINWINDOW_H
