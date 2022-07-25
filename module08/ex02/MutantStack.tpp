#include "MutantStack.hpp"

iterator MutantStack::begin( void )
{
	return (this->c.begin());
}

const_iterator MutantStack::begin ( void ) const 
{
	return (this->c.begin());
}

iterator MutantStack::end( void )
{
	return (this->c.end());
}

const_iterator MutantStack::end() const
{
	return (this->c.end());
}
