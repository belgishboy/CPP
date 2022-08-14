#include "Base.hpp"
#include "Alphabete.hpp"

# include <cstdlib>
# include <iostream>

Base * generate(void)
{
	int i = rand();
	Base *p = NULL;
	if (i % 3 == 0)
		p = new A();
	else if (i % 3 == 1)
		p = new B();
	else
		p = new C();
	return (p);
}

void identify(Base* p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << "This is a A object" << std::endl;
	else if (b != NULL)
		std::cout << "This is a B object" << std::endl;
	else if (c != NULL)
		std::cout << "This is a C object" << std::endl;
	else
		std::cout << "ERROR" << std::endl;
	return ;
	
}

void identify(Base& p)
{
	try 
	{
		A & a = dynamic_cast<A &>(p);
		std::cout << &a << "\n Pointer: This is a A object" << std::endl;
		return ;
	}
	catch ( std::bad_cast &bc)
	{
	}
	try 
	{
		B & b = dynamic_cast<B &>(p);
		std::cout << &b << "\n Pointer: This is a B object" << std::endl;
		return ;
	}
	catch ( std::bad_cast &bc)
	{
	}
	try 
	{
		C & c = dynamic_cast<C &>(p);
		std::cout << &c << "\n Pointer: This is a C object" << std::endl;
		return ;
	}
	catch ( std::bad_cast &bc)
	{
		std::cout << "ERROR" << std::endl;
	}
	return ;
}

int main(void)
{
	srand(22*rand());
	Base *b = generate();
	identify(b);
	//delete b;
	//b = generate();
	identify(*b);
	delete b;
	return (0);
}
