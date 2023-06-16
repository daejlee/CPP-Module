#include "RPN.hpp"

enum type{
    PLUS,
    MINUS,
    DIV,
    MUL
};

std::stack<double> RPN::_stk;

RPN::RPN(){}

RPN::RPN(const RPN& obj){*this = obj;}

RPN& RPN::operator=(const RPN& obj){
    if (this != &obj)
        _stk = obj._stk;
    return *this;
}

RPN::~RPN(){}

int RPN::isArithmeticToken(char c){
    const char  arr[4] = {'+', '-', '/', '*'};
    for (int i = 0; i < 4; i++){
        if (arr[i] == c)
            return i;
    }
    return -1;
}

void    RPN::calc(const std::string& str){
    char    cur;
    
    for (size_t i = 0; i < str.size(); i++){
        cur = str[i];
        if (isdigit(cur))
            _stk.push(cur - 48);
        else if (isArithmeticToken(cur) != -1){
            double num1 = _stk.top();
            _stk.pop();
            double num2 = _stk.top();
            _stk.pop();
            switch (isArithmeticToken(cur)){
                case PLUS:
                    _stk.push(num2 + num1);
                    break;
                case MINUS:
                    _stk.push(num2 - num1);
                    break;
                case DIV:
                    _stk.push(num2 / num1);
                    break;
                case MUL:
                    _stk.push(num2 * num1);
                    break;
            }
        }
        else if (cur != ' '){
            std::cerr << "Error!" << std::endl;
            return ;
        }
    }
    std::cout << _stk.top() << std::endl;
}
