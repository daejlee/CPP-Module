#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	// Animal	a;
	// a.makeSound();
	// Dog		b;
	// b.makeSound();
	// Dog		c = b;
	// c.makeSound();
	// Cat		d;
	// d.makeSound();
	// Cat		e = d;
	// e.makeSound();
	const WrongAnimal*	meta = new WrongAnimal();
	const Animal*	j = new Dog();
	const WrongAnimal*	i = new WrongCat();

	j->makeSound();
	i->makeSound();

	return (0);
}