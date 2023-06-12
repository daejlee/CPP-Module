#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <algorithm>
# include <vector>
# include <list>
# include <deque>

/*!
 * @brief
 * Find the first occurrence of a key in T
 * @param intContainer container of integers
 * @param key value to search for in intContainer
 * @return resulting iterator if occurrence exists, NULL if it doesn't
 */
template <typename T>
typename std::vector<T>::const_iterator easyfind(std::vector<T> &intContainer, const int &key){
    typename std::vector<T>::const_iterator res = std::find(intContainer.begin(), intContainer.begin() + intContainer.size(), key);
    if (res != intContainer.end())
        return res;
    else
        return intContainer.end();
}

/*!
 * @brief
 * Find the first occurrence of a key in T
 * @param intContainer container of integers
 * @param key value to search for in intContainer
 * @return resulting iterator if occurrence exists, NULL if it doesn't
 */
template <typename T>
typename std::list<T>::const_iterator easyfind(std::list<T> &intContainer, const int &key){
    typename std::list<T>::const_iterator res = std::find(intContainer.begin(), intContainer.end(), key);
    if (res != intContainer.end())
        return res;
    else
        return intContainer.end();
}

/*!
 * @brief
 * Find the first occurrence of a key in T
 * @param intContainer container of integers
 * @param key value to search for in intContainer
 * @return resulting iterator if occurrence exists, NULL if it doesn't
 */
template <typename T>
typename std::deque<T>::const_iterator easyfind(std::deque<T> &intContainer, const int &key){
    typename std::deque<T>::const_iterator res = std::find(intContainer.begin(), intContainer.end(), key);
    if (res != intContainer.end())
        return res;
    else
        return intContainer.end();
}

#endif