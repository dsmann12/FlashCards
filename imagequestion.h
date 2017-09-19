#ifndef IMAGEQUESTION_H
#define IMAGEQUESTION_H


class ImageQuestion : public Question {
    public:
        ImageQuestion();
        ImageQuestion(const std::string &q);
        ImageQuestion(const std::string &q, const std::string &a);
        void showQuestion(QLabel *qlbl) const;
        void updateForm(Ui::MainWindow *win) const;
        std::string label() const;
        template <class Archive>
        void serialize(Archive &ar);
};

#endif // IMAGEQUESTION_H
