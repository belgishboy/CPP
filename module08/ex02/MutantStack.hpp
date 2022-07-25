#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <iterator>
# include <cstdlib>

// CLASS
template< typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>, std::iterator
{
	public :
	
	typedef	Container::iterator iterator;
	typedef Container::const_iterator const_iterator;

	
		iterator begin( void );
		const_iterator begin ( void ) const ;
		iterator end( void );
		const_iterator end() const;

};

#include "MutantStack.tpp"
#endif
