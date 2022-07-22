#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <cstdlib>

// CLASS

class Span
{
	typedef	std::vector<int>::iterator iter;

	public :
		Span (unsigned int const n);
		Span (Span const & src);			//CANONICAL: Constructor by copy
		~Span (void);							//CANONICAL: Default Destructor

		Span & operator=(Span const & rhs);	//CANONICAL: To assign the values of one class to another

		void addNumber(int n);
		int shortestSpan(void);
		int longestSpan(void);
		void addNumber(iter s, iter e);
		std::vector<int> & getL(void);

		class OutOfBounds : public std::exception
		{
			public :
				const char* what() const throw()
				{
					return ("Span already full.");
				}
		};
		class TooShort : public std::exception
		{
			public :
				const char* what() const throw()
				{
					return ("Span too small.");
				}
		};

	private :
		Span (void);							//CANONICAL: Default Constructor
		unsigned int const _n;
		bool _sort;
		std::vector<int> _l;

};

#endif
