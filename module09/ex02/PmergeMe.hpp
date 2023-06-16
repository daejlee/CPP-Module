#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <vector>
# include <list>
# include <iostream>
# include <string>

class PmergeMe
{
    private:
        std::vector<int>        _vec;
    public:
                                PmergeMe();
                                PmergeMe(const PmergeMe& obj);
        PmergeMe&               operator=(const PmergeMe& obj);
                                ~PmergeMe();
        void                    launchSort(std::string input);
};

#endif