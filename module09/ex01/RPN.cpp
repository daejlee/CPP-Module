#include "RPN.hpp"

enum type{
    PLUS,
    MINUS,
    DIV,
    MUL
};

RPN::RPN(){std::cout << "RPN default constructor called." << std::endl;}

RPN::RPN(const RPN& obj){
    std::cout << "RPN copy constructor called." << std::endl;
    *this = obj;
}

RPN& RPN::operator=(const RPN& obj){
    std::cout << "RPN assignment operator overloading called." << std::endl;
    if (this != &obj)
        _stk = obj._stk;
    return *this;
}

RPN::~RPN(){std::cout << "RPN default destructor called." << std::endl;}

std::string TrimWhitespace(const std::string& str)
{
    std::string result = str;

    // 문자열의 앞부분의 공백 문자 제거
    std::string::size_type start = 0;
    while (start < result.length() && std::isspace(result[start]))
        start++;
    result.erase(0, start);

    // 문자열의 뒷부분의 공백 문자 제거
    std::string::size_type end = result.length() - 1;
    while (end >= 0 && std::isspace(result[end]))
        end--;
    result.erase(end + 1);

    return result;
}

int isArithmeticToken(char c){
    const char  arr[4] = {'+', '-', '/', '*'};
    for (int i = 0; i < 4; i++){
        if (arr[i] == c)
            return i;
    }
    return -1;
}

void    RPN::calc(const char* str){
    char    cur;
    
    for (size_t i = 0; i < strlen(str); i++){
        cur = str[i];
        if (isdigit(cur))
            _stk.push(cur - 48);
        else if (isArithmeticToken(cur) != -1){
            int num1 = _stk.top();
            _stk.pop();
            int num2 = _stk.top();
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
