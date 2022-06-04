
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

		int getRawBits (void) const;
		void setRawBits (int const raw);

	private :
		int _num;
		static const int _bits;

};	

std::ostream & operator<<(std::ostream & o, Fixed const & i);
#endif
