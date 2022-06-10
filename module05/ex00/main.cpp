
#include "Admin.h"

int main()
{
	Bureaucrat y;
	Bureaucrat v("Vincent", 150);
	Bureaucrat h("Hendrik", 1);
	Bureaucrat k("Krisi", 5);

	std::cout << v << std::endl << h << std::endl << k << std::endl;

	try
	{
		Bureaucrat t("Try", 250);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << k ++ << std::endl;

	return (0);
}
