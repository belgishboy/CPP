
#ifndef DATA_HPP
# define DATA_HPP

# include "Serial.h"

// CLASS

class Data
{
	public :
		Data (void);							//CANONICAL: Default Constructor
		Data (int const n);
		Data (Data const & src);			//CANONICAL: Constructor by copy
		~Data (void);							//CANONICAL: Default Destructor

		Data & operator=(Data const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Data const & rhs) const;

		int getFoo (void) const;

	private :
		int _foo;

};

//USEFUL: used to output the contents of the class into a stream
std::ostream & operator<<(std::ostream & o, Data const & i);
#endif
