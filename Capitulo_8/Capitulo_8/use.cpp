#include "my.h"
#include <iostream>



int swap(int a, int b)
{
	int temp; 
	temp = a;
	a = b; 
	b = temp;
	return b, a;
}




int swap_r(int&a, int&b)
{
	int temp; temp = a; 
	a = b; 
	b = temp;
	return a, b;
}


int Drill()
{
	int a = 7;
	int b = 6;
	swap(a, b);
	std::cout << b << a;
	std::cin.get();
	return 5;
}

namespace X
{
	int var;

	void print()
	{
		std::cout << var;
	}
}
namespace Y
{
	int var;
	void print()
	{
		std::cout << var;
	}

}
namespace Z
{
	int var;
	void print()
	{
		std::cout << var;
	}

}

int Drill2()
{
	X::var = 7;
	X::print();
	using namespace Y;
	var = 8;
	print();
	{
		using Z::var;

		var = 11;
		Z::print();

	}

	std::cin.get();
	print();
	X::print();
	return 0;
}

int foo;
int main()
{
	
	foo = 7;
	print_foo();
	int i = 99;
	print(i);
	std::cin.get();
	return 0;
}

