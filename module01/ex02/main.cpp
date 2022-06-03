# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

int main (void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << std::endl << "string : " << &s << std::endl;
	std::cout << std::endl << "stringPTR : " << &stringPTR << std::endl;
	std::cout << std::endl << "stringREF : " << &stringREF << std::endl;

	std::cout << std::endl << "string : " << s << std::endl;
	std::cout << std::endl << "stringPTR : " << *stringPTR << std::endl;
	std::cout << std::endl << "stringREF : " << stringREF << std::endl;

	/*s = "BYE";

	std::cout << std::endl << "string : " << &s << std::endl;
	std::cout << std::endl << "stringPTR : " << &stringPTR << std::endl;
	std::cout << std::endl << "stringREF : " << &stringREF << std::endl;

	std::cout << std::endl << "string : " << s << std::endl;
	std::cout << std::endl << "stringPTR : " << *stringPTR << std::endl;
	std::cout << std::endl << "stringREF : " << stringREF << std::endl;

	std::string t = "MAMA";
	stringPTR = &t;

		std::cout << std::endl << "string : " << &s << std::endl;
	std::cout << std::endl << "stringPTR : " << &stringPTR << std::endl;
	std::cout << std::endl << "stringREF : " << &stringREF << std::endl;

	std::cout << std::endl << "string : " << s << std::endl;
	std::cout << std::endl << "stringPTR : " << *stringPTR << std::endl;
	std::cout << std::endl << "stringREF : " << stringREF << std::endl;*/

	return (0);
}
