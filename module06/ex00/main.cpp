

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <fstream>

void floo(float f)
{
	try 
	{
		char c = static_cast<char>(f);
		std::cout << "char : " << c << std::endl;
	}
	catch( std::exception& e)
	{
		std::cerr << "char (NP): " << e.what() << std::endl;
	}
	try 
	{
		int i = static_cast<int>(f);
		std::cout << "int : " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "int : " << e.what() << std::endl;
	}
	try 
	{
		float f = static_cast<float>(f);
		std::cout << "float : " << f << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "float : " << e.what() << std::endl;
	}
	try 
	{
		double d = static_cast<double>(f);
		std::cout << "double : " << d << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "double : " << e.what() << std::endl;
	}

	exit(0);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid number of arguments." << std::endl;
		return (1);
	}

	std::string s = argv[1];
	void *t;

	if (s.length() < 1)
	{
		std::cerr << "Invalid Input." << std::endl;
		return (1);
	}
	if ((s.compare(0,s.length(), "inff") == 0) || (s.compare(0,s.length(), "-inff") == 0) || (s.compare(0,s.length(), "+inff") == 0))
	{
		float ff = std::stof(s);
		t = (void *) &ff;
	}
	else if ((s.compare(0,s.length(), "inf") == 0) || (s.compare(0,s.length(), "-inf") == 0) || (s.compare(0,s.length(), "+inf") == 0))
	{
		double df = std::stod(s);
		t = (void *) &df;
	}
	else if ((s.compare(0,s.length(), "nan") == 0) || (s.compare(0,s.length(), "nanf") == 0))
	{
		double nan = std::stof(s);
		t = (void *) &nan;
	}
		else if (s.length() > 1)
		{
			if (s.find(".", 1) != std::string::npos)
			{
				if (s.find("f", 2))
				{
					float f = std::stof(s);
					t = (void *) &f;
				}
				else
				{
					double d = std::stod(s);
					t = (void *) &d;
				}
			}
		}

	return (0);
}