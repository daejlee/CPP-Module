#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal	a;
	a.makeSound();
	Dog		b;
	b.makeSound();
	Dog		c = b;
	c.makeSound();
	Cat		d;
	d.makeSound();
	Cat		e = d;
	e.makeSound();
	return (0);
}