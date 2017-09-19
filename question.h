#ifndef QUESTION_H
#define QUESTION_H

#include "ui_mainwindow.h"

class Question {
    public:
        Question();
        Question(const std::string &q);
        Question(const std::string &q, const std::string &a);
        std::string question() const;
        std::string answer() const;
        virtual std::string label() const = 0;
        void setQuestion(const std::string &q);
        void setAnswer(const std::string &a);
        virtual void showQuestion(QLabel *qlbl) const = 0;
        virtual void updateForm(Ui::MainWindow *win) const = 0;
    protected:
        std::string _question;
        std::string _answer;
};

#endif // QUESTION_H
