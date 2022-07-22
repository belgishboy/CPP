
#include <iostream>
#include "Span.hpp"

int main(int, char**)
{
	Span s(4);

	s.addNumber(4);
	s.longestSpan();
	s.addNumber(5);
	s.addNumber(10);
	s.addNumber(-5);
	std::cout << s.longestSpan() << std::endl;
	std::cout << s.shortestSpan() << std::endl;
	s.addNumber(16);
	return (0);
}
