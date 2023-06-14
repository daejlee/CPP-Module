#include "MutantStack.hpp"
#include <list>

void	list_test(){
	std::list<int> li;
	li.push_back(5);
  li.push_back(17);
  std::cout << li.back() << std::endl;
  li.pop_back();
  std::cout << li.size() << std::endl;
  li.push_back(3);
  li.push_back(5);
  li.push_back(737);
  li.push_back(0);
  std::list<int>::iterator it = li.begin();
  std::list<int>::iterator ite = li.end();
  ++it;
  --it;
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  std::list<int> s(li);
}

void const_iter_test() {
  MutantStack<char> mstack;
  mstack.push('a');
  mstack.push('b');
  mstack.push('c');
  mstack.push('d');
  mstack.push('e');
  MutantStack<char>::const_iterator cit = mstack.begin();
  MutantStack<char>::const_iterator cite = mstack.end();
  while (cit != cite) {
    std::cout << *cit << std::endl;
    ++cit;
  }
}

void reverse_iter_test() {
  MutantStack<double> mstack;
  mstack.push(1.1);
  mstack.push(2.2);
  mstack.push(3.3);
  mstack.push(4.4);
  mstack.push(5.5);
  MutantStack<double>::reverse_iterator rit = mstack.rbegin();
  MutantStack<double>::reverse_iterator rite = mstack.rend();
  while (rit != rite) {
    std::cout << *rit << std::endl;
    ++rit;
  }
}

void const_reverse_iter_test() {
  MutantStack<std::string> mstack;
  mstack.push("one");
  mstack.push("two");
  mstack.push("three");
  mstack.push("four");
  mstack.push("five");
  MutantStack<std::string>::const_reverse_iterator crit = mstack.rbegin();
  MutantStack<std::string>::const_reverse_iterator crite = mstack.rend();
  while (crit != crite) {
    std::cout << *crit << std::endl;
    ++crit;
  }
}

int main()
{
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
	std::cout << "--------------0---------------\n\n";
	list_test();
	std::cout << "--------------1---------------\n\n";
	const_iter_test();
	std::cout << "--------------2---------------\n\n";
	reverse_iter_test();
	std::cout << "--------------3---------------\n\n";
	const_reverse_iter_test();
  return 0;
}