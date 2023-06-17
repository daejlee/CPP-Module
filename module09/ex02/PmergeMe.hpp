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
        static std::vector<unsigned int>    _vec;
        static std::deque<unsigned int>     _deq;
    public:
                                            PmergeMe();
                                            PmergeMe(const PmergeMe& obj);
        PmergeMe&                           operator=(const PmergeMe& obj);
                                            ~PmergeMe();
        static void                         push_vec(char **args);
        static void                         push_deq(char **args);
        static std::vector<unsigned int>    recurSortVec(std::vector<unsigned int> vecToSort);
        static std::deque<unsigned int>     recurSortDeq(std::deque<unsigned int> deqToSort);
        static void                         launchVecSort(char **args);
        static void                         launchDequeSort(char **args);
        static unsigned int                 getVecSize();
        static unsigned int                 getDeqSize();
};

#endif