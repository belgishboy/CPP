#ifndef SPAN_HPP
# define SPAN_HPP

# include <list>
# include <iostream>
# include <algorithm>

// CLASS

class Span
{
	public :
		Span (unsigned int const n);
		Span (Span const & src);			//CANONICAL: Constructor by copy
		~Span (void);							//CANONICAL: Default Destructor

		Span & operator=(Span const & rhs);	//CANONICAL: To assign the values of one class to another

		void addNumber(int n);
		int const shortestSpan(void);
		int const longestSpan(void);

		class OutOfBounds : public std::exception
			{
				public :
					virtual const char* what() const throw()
					{
						return ("Span already full.")
					}
			};

	private :
		Span (void);							//CANONICAL: Default Constructor
		unsigned int const _n;
		bool _sort;
		unsigned int _i;
		std::list<int> _l;

};

#endif