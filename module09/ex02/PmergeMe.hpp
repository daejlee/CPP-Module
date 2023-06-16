#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <list>
# include <iostream>
# include <string>

class PmergeMe
{
    private:
        std::vector<int>                    _vec;
        std::vector<std::pair<int, int> >   _pairVec;
    public:
                                PmergeMe();
                                PmergeMe(const PmergeMe& obj);
        PmergeMe&               operator=(const PmergeMe& obj);
                                ~PmergeMe();
        void                    push_vec(char **args);
        void                    push_pair();
        void                    launchSort(char **args);
};

#endif