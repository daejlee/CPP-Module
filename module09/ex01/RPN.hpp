#ifndef RPN_HPP
# define RPN_HPP
# include <stack>
# include <iostream>
# include <string>

class RPN
{
    private:
        std::stack<int>         _stk;
    public:
                                RPN();
                                RPN(const RPN& obj);
        RPN&                    operator=(const RPN& obj);
                                ~RPN();
        void                    calc(const char* str);
};

#endif