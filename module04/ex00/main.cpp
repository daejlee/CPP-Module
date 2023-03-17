#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	a;
	Animal	ref_a = a;
	Dog		b;
	Dog		ref_b = b;
	Cat		c;
	Cat		ref_c = c;

	a.makeSound();
	b.makeSound();
	c.makeSound();


const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
meta->makeSound();
	return (0);
}