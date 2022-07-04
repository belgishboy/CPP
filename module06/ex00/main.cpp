// int limits 

// and take stuff for main1 about inff

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
	bool inff = 0;
	bool inf = 0;
	bool nan = 0;
	if (s.length() < 1)
	{
		std::cerr << "Invalid Input." << std::endl;
		return (1);
	}
	if ((s.compare(0,s.length(), "inff") == 0) || (s.compare(0,s.length(), "-inff") == 0) || (s.compare(0,s.length(), "+inff") == 0))
		inff = 1;
	else if ((s.compare(0,s.length(), "inf") == 0) || (s.compare(0,s.length(), "-inf") == 0) || (s.compare(0,s.length(), "+inf") == 0))
		inf = 1;
	else if ((s.compare(0,s.length(), "nan") == 0) || (s.compare(0,s.length(), "nanf") == 0))
		nan = 1;
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

	std::cout << "int : ";
	if (inff || inf || nan || v > INT32_MAX || v < INT32_MIN)
		std::cout << "impossible" << std::endl;
	else
	{
		try 
		{
			int i = static_cast<int>(v);
			std::cout << i << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "float : ";
	if (nan)
		std::cout << "nanf" << std::endl;
	else
	{
		try 
		{
			float f = static_cast<float>(v);
			std::cout << std::setprecision(1) << f << "f" << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	std::cout << "double : ";
	if (nan)
		std::cout << "nan" << std::endl;
	else if (inf || inff)
		std::cout << "inf" << std::endl;
	else
	{
		try 
		{
			double d = static_cast<double>(v);
			std::cout << d << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
