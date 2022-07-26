#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

// CLASS
template< typename T, typename Container = std::deque<T> >
class MutantStack: public std::stack<T, Container>
{
	public :
	
	typedef	typename Container::iterator		iterator;
	typedef typename Container::const_iterator	const_iterator;

	
		iterator begin( void )
		{
			return (this->c.begin());
		}
		const_iterator begin ( void ) const 
		{
			return (this->c.begin());
		}
		iterator end( void )
		{
			return (this->c.end());
		}
		const_iterator end() const
		{
			return (this->c.end());
		}

};

#endif
