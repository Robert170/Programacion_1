#include "my.h"
#include <iostream>
using namespace std;

//profe va a ver un problema por tener dos mains para que funcione ponga todo un codigo en comentarios y luego el otro
//perdon las molestias

int foo;
int Drill()
{

	foo = 7;
	print_foo();
	int i = 99;
	print(i);
	std::cin.get();
	return 0;
}

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

int Drill2()
{
	int a = 7;
	int b = 6;
	swap(a, b);
	cout << b << endl;
	cout << a << endl;
	cin.get();
	return 5;
}

namespace X
{
	int var;

	void print()
	{
		cout << var << endl;
	}

}
namespace Y
{
	int var;
	void print()
	{
		cout << var << endl;
	}

}
namespace Z
{
	int var;
	void print()
	{
		cout << var << endl;
	}

}

int main()
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

	cin.get();
	print();
	X::print();
	Drill();
	Drill2();
	return 0;
}


