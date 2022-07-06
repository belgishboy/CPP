#include "Base.hpp"
#include "Alphabete.hpp"

# include <cstdlib>
# include <iostream>

Base * generate(void)
{
	int i = rand();
	Base p;
	if (i % 3 == 0)
		p = A();
	else if (i % 3 == 1)
		p = B();
	else
		p = C();
	return (&p);
}

void identify(Base* p)
{

}

void identify(Base& p)
{

}

int main(void)
{
	
}