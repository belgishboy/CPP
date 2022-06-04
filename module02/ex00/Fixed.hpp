
#ifndef FIXED_HPP
# define FIXED_HPP


//LIBRARIES

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <fstream>

// CLASS

class Fixed
{
	public :
		Fixed (void);
		Fixed (Fixed const & src);
		~Fixed (void);

		Fixed & operator=(Fixed const & rhs);

		bool operator==(Fixed const & rhs);

		int getFoo (void) const;

	private :
		int _foo;

};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
#endif

