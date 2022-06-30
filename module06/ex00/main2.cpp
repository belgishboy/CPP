
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <fstream>
# include <sstream>

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments." << std::endl;
		return (1);
	}

	std::string s = argv[1];
	std::istringstream in(s);
	long double v;

	if (s.length() == 1 && ft_isprint(static_cast<int>(s.at(0))) && !(ft_isdigit(static_cast<int>(s.at(0)))))
	{
		std::cout << "yes is a char" << std::endl;
		v = static_cast<char>(s.at(0));
		char c = v;
		std::cout << "char : " << c << std::endl;
	}
	else
	{
		in >> v;
		std::cout << "char : Not possible" << std::endl;
	}
	try 
	{
		int i = static_cast<int>(v);
		std::cout << "int : " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "int : " << e.what() << std::endl;
	}
	try 
	{
		float f = static_cast<float>(v);
		std::cout << "float : " << f << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "float : " << e.what() << std::endl;
	}
	try 
	{
		double d = static_cast<double>(v);
		std::cout << "double : " << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "double : " << e.what() << std::endl;
	}

	return (0);
}
