#ifndef TEXTQUESTION_H
#define TEXTQUESTION_H


class TextQuestion : public Question
{
public:
    TextQuestion();
    TextQuestion(const std::string &q);
    TextQuestion(const std::string &q, const std::string &a);
    void showQuestion(QLabel *qlbl) const;
    void updateForm(Ui::MainWindow *win) const;
    std::string label() const;
    template <class Archive>
    void serialize(Archive &ar);
};

#endif // TEXTQUESTION_H
