#ifndef SED_H
# define SED_H


//LIBRARIES

# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <fstream>

//FUNCTIONS

void	replace( std::ifstream &ifs, std::ofstream &newFile, std::string s1, std::string s2 );

#endif
