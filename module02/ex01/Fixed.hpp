
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
		Fixed (const int num);
		Fixed (const float fnum);
		~Fixed (void);

		Fixed & operator=(Fixed const & rhs);

		int getRawBits (void) const;
		void setRawBits (int const raw);

		float toFloat(void) const;
		int toInt(void) const;

	private :
		int _num;
		static const int _bits = 8;

};	

std::ostream & operator<<(std::ostream & o, Fixed const & i);
#endif
