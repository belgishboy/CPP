
//INCLUDES

#include "Admin.h"

int main()
{
	Bureaucrat v("Vincent", 150);
	Bureaucrat h("Hendrik", 1);
	Bureaucrat k("Krisi", 5);

	Form i("Test Form1", 10, 4);
	Form x("Test Form2", 150, 1);
	try
	{
		Form y("Test Form3", 1000, 4);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}


	std::cout << v << std::endl << h << std::endl << k << std::endl;

	v.signForm(i);
	h.signForm(x);

	std::cout << i << std::endl << x << std::endl;

	return (0);
}
