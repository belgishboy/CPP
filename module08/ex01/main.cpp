
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
	Span _tmp(2);
	temp.addNumber(21);
	temp.addNumber(42);
	_tmp.addNumber((temp.getL()).begin(), (temp.getL()).end());
	std::cout << _tmp << std::endl;

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	return (0);
}
