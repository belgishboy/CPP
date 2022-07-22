
#include <iostream>
#include "Span.hpp"

int main(int, char**)
{
	Span s(4);

	s.addNumber(4);
	try
	{
		s.longestSpan();
	}
	catch (Span::TooShort &e)
	{
		std::cerr << e.what() << std::endl;
	}
	s.addNumber(5);
	s.addNumber(10);
	s.addNumber(-5);
	std::cout << s.longestSpan() << std::endl;
	std::cout << s.shortestSpan() << std::endl;
	try
	{
		s.addNumber(16);
	}
	catch (Span::OutOfBounds &e)
	{
		std::cerr << e.what() << std::endl;
	}
	Span temp(2);
	temp.addNumber(1);
	temp.addNumber(0);
	s.addNumber((temp.getL()).begin(), (temp.getL()).end());
	return (0);
}
