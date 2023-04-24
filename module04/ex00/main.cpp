#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal		testMeta;
	const Cat			cat;
	const Dog			dog;
	const WrongAnimal	wrongMeta;
	const WrongCat		wrongCat;

	std::cout << "------------Basic function test------------" << std::endl;
	std::cout << testMeta.getType() << " " << cat.getType() << " " << dog.getType() << " " << wrongMeta.getType() << " " << wrongCat.getType() << " " << std::endl;
	testMeta.makeSound();
	cat.makeSound();
	dog.makeSound();
	wrongMeta.makeSound();
	wrongCat.makeSound();
	std::cout << "------------Basic function test end------------" << std::endl;
	std::cout << "------------Subject PDF test start------------" << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	std::cout << "------------Subject PDF test end------------" << std::endl;
	std::cout << "------------Subject PDF related additional test start------------" << std::endl;
	const WrongAnimal*	tempMeta = new WrongAnimal();
	const WrongAnimal*	tempWrongCat = new WrongCat();

	std::cout << tempMeta->getType() << " " << std::endl;
	std::cout << tempWrongCat->getType() << " " << std::endl;
	tempMeta->makeSound();
	tempWrongCat->makeSound();
	std::cout << "------------Subject PDF related additional test end------------" << std::endl;

	delete(meta);
	std::cout << "\n";
	delete(j); // check if virtual destructor is properly working
	std::cout << "\n";
	delete(i);
	std::cout << "\n";
	delete(tempMeta);
	std::cout << "\n";
	delete(tempWrongCat);
	return (0);
}