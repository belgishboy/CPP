
#ifndef SAMPLE_HPP
# define SAMPLE_HPP

# include "Sample.h"

// CLASS

class Sample
{
	public :
		Sample (void);							//CANONICAL: Default Constructor
		Sample (int const n);
		Sample (Sample const & src);			//CANONICAL: Constructor by copy
		~Sample (void);							//CANONICAL: Default Destructor

		Sample & operator=(Sample const & rhs);	//CANONICAL: To assign the values of one class to another

		bool operator==(Sample const & rhs);

		int getFoo (void) const;

	private :
		int _foo;

};

//USEFUL: used to output the contents of the class into a stream
std::ostream & operator<<(std::ostream & o, Sample const & i);
#endif
