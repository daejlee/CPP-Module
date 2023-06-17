#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <deque>
# include <iostream>
# include <string>
# include <cstdlib>
# include <algorithm>

class PmergeMe
{
    private:
        static std::vector<unsigned int>                               _vec;
    public:
                                            PmergeMe();
                                            PmergeMe(const PmergeMe& obj);
        PmergeMe&                           operator=(const PmergeMe& obj);
                                            ~PmergeMe();
        static void                         push_vec(char **args);
        static std::vector<unsigned int>    push_pair(std::vector<unsigned int> vecToSort);
        static void                         launchVecSort(char **args);
        static void                         launchDequeSort(char **args);
        static unsigned int                 get_size();
};

#endif