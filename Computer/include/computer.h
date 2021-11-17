#pragma once
#include "Singleton.h"
#include <string>
#include <map>

class computer : public Singleton<computer>
{
    friend Singleton<computer>;
public:
    enum Token_value
    {
        NAME,NUMBER,END,
        PLUS='+', MINUS='-', MUL='*', DIV='/',
        PRINT=';',ASSIGN='=',LP='(',RP=')'
    };
    int active();

private:
    computer();
    double expr(bool get);
    double term(bool get);
    double prim(bool get);
    Token_value get_token();
    double error(const std::string& s);
private:
    std::map<std::string,double> table;
    Token_value curr_tok = PRINT;
    double number_value;
    std::string string_value;

    int no_of_errors;
};