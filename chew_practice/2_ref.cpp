#include <iostream>

//ref
int	main_0()
{
	int		a = 3;
	int&	b = a;

	b = a;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	return (0);
}

/*
difference between ref and pointer
1. ref need to be set at declaration.
	ex) int& b; == impossible
2. ref when it's been set, it can't be changed.
	ex) &b = a; == impossible
3. ref can be non-existing on memory.
*/

int	change_val(int &p)
{
	p = 3;

	return (0);
}

int	main_1()
{
	int	num = 5;

	std::cout << num << std::endl;
	change_val(num);
	std::cout << num << std::endl;
	return (0);
}

//ref to const.
int	main_2()
{
	//int	&ref = 4; -> 불가능.
	const int	&ref = 4; // -> 가능.

	std::cout << ref << std::endl;
	return (0);
}

//array of ref. -> cannot exist. (why?: ref normally cannot exist on memory)
int	main_3()
{
	// int	a, b;
	// int&	arr[2] = {a, b}; -> cannot exist.

	int	arr[3] = {1, 2, 3};
	int	(&ref)[3] = arr;

	ref[0] = 2;
	ref[1] = 3;
	ref[2] = 1;

	std::cout << arr[0] << arr[1] << arr[2] << std::endl;
	return (0);
}

int&	function_0()
{
	int	a = 2;
	return (a);
}

//returns ref of local var.
int	main_4()
{
	int	b = function_0();

	b = 3;
	/* upper is like.
	int& ref = a;

	// 근데 a 가 사라짐
	int b = ref;  // !!! -> dangling ref.
	*/
	return (0);
}

int&	function_1(int& a)
{
	a = 5;
	return (a);
}

//returns ref of extern var.
int	main_5()
{
	int	b = 2;
	int	c = function_1(b);

	std::cout << b << std::endl;
	return (0);
}

int	function_2()
{
	int	a = 5;
	return (a);
}

//recieve funct that returns non-ref as ref.
int	main_6()
{
	//int&	c = function(); -> X
	const int&	c = function_2();
	//when receiving ret as const ref, ret val survives throughout with ref.

	std::cout << c << std::endl;
	return (0);
}
