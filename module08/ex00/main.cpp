#include "easyfind.hpp"

int main(){
    std::vector<int> v;
    std::list<int> l;
    std::deque<int> d;
    for (int i = 0; i < 10; i++){
        v.push_back(i);
        l.push_back(i);
        d.push_back(i);
    }
    try{
        std::cout << *easyfind(v, 9) << std::endl;
        std::cout << *easyfind(l, 7) << std::endl;
        std::cout << *easyfind(d, 0) << std::endl;
        std::cout << *easyfind(d, 20) << std::endl;
    }
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
    return 0;
}