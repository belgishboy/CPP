
#include "sed.h"

/**
 * @brief Reads from ifs, checks if it contains s1 (if yes, replaces with s2)
 * and copies it into newFile
 * 
 * @param ifs file read from
 * @param newFile new file copied into 
 * @param s1 string to be replaced
 * @param s2 string that relaces
 */
void	replace( std::ifstream &ifs, std::ofstream &newFile, std::string s1, std::string s2 )
{
	std::string line;
	size_t pos;
	while (ifs.good())
	{
		std::getline (ifs, line, '\n');
		while (line.find(s1) != std::string::npos)
		{
			pos = line.find(s1);
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		newFile << line << std::endl;
	}

	return ;
}
