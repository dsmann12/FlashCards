#include <string>
#include "question.h"

Question::Question() {
    _question = "";
    _answer = "";
}

Question::Question(const std::string &q) {
    _question = q;
    _answer =  "";
}

Question::Question(const std::string &q, const std::string &a) {
    _question = q;
    _answer = a;
}

std::string Question::question() const {
    return _question;
}

std::string Question::answer() const {
    return _answer;
}

void Question::setQuestion(const std::string &q) {
    _question = q;
}

void Question::setAnswer(const std::string &a) {
    _answer = a;
}
