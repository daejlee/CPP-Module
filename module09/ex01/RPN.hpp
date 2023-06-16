#ifndef RPN_HPP
# define RPN_HPP
# include <stack>
# include <iostream>
# include <string>

class RPN
{
    private:
        static std::stack<double>       _stk;
                                        RPN();
                                        RPN(const RPN& obj);
        RPN&                            operator=(const RPN& obj);
                                        ~RPN();
    public:
        static void                     calc(const std::string& str);
        static int                      isArithmeticToken(char c);
};

#endif