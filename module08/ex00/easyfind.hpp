#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <stdexcept>
# include <iostream>

/*!
 * @brief
 * Find the first occurrence of a key in T
 * @param intContainer container of integers
 * @param key value to search for in intContainer
 * @return resulting iterator if occurrence exists, throw exception if it doesn't
 */
template <typename T>
typename std::vector<T>::const_iterator easyfind(std::vector<T> &intContainer, const int &key){
    typename std::vector<T>::const_iterator res = std::find(intContainer.begin(), intContainer.begin() + intContainer.size(), key);
    if (res != intContainer.end() || *res == *intContainer.end())
        return res;
    else
        throw std::out_of_range("key is not found within container!");
}

/*!
 * @brief
 * Find the first occurrence of a key in T
 * @param intContainer container of integers
 * @param key value to search for in intContainer
 * @return resulting iterator if occurrence exists, throw exception if it doesn't
 */
template <typename T>
typename std::list<T>::const_iterator easyfind(std::list<T> &intContainer, const int &key){
    typename std::list<T>::const_iterator res = std::find(intContainer.begin(), intContainer.end(), key);
    if (res != intContainer.end())
        return res;
    else
        throw std::out_of_range("key is not found within container!");
}

/*!
 * @brief
 * Find the first occurrence of a key in T
 * @param intContainer container of integers
 * @param key value to search for in intContainer
 * @return resulting iterator if occurrence exists, throw exception if it doesn't
 */
template <typename T>
typename std::deque<T>::const_iterator easyfind(std::deque<T> &intContainer, const int &key){
    typename std::deque<T>::const_iterator res = std::find(intContainer.begin(), intContainer.end(), key);
    if (res != intContainer.end())
        return res;
    else
        throw std::out_of_range("key is not found within container!");
}

#endif