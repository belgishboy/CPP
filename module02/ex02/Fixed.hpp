
#ifndef FIXED_HPP
# define FIXED_HPP


//LIBRARIES

# include <iostream>
# include <cmath>
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

		bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;

		Fixed operator+(Fixed const & rhs) const;
		Fixed operator-(Fixed const & rhs) const;
		Fixed operator*(Fixed const & rhs) const;
		Fixed operator/(Fixed const & rhs) const;

		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);

		int getRawBits (void) const;
		void setRawBits (int const raw);

		float toFloat(void) const;
		int toInt(void) const;

		static Fixed & min(Fixed & f1, Fixed & f2);
		static const Fixed & min(Fixed const & f1, Fixed const & f2);
		static Fixed & max(Fixed & f1, Fixed & f2);
		static const Fixed & max(Fixed const & f1, Fixed const & f2);


	private :
		int _num;
		static const int _bits;

};	

std::ostream & operator<<(std::ostream & o, Fixed const & i);
#endif
