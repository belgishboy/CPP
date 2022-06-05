
# include "sed.h"

int main(int argc, char **argv)
{
	std::ifstream ifs;
	if (argc != 4)
	{
		std::cout << std::endl << "Incorrect number of arguments given" << std::endl;
		return (1);
	}

	ifs.open (argv[1], std::ifstream::in);
	if (!ifs.good())
	{
		std::cout << std::endl << "Incorrect file given given" << std::endl;
		return (1);
	}

	std::string fname;
	fname.append(argv[1]);
	fname.append(".replace");
	std::ofstream newFile(fname.c_str());
	replace(ifs, newFile, argv[2], argv[3]);

	ifs.close();
	newFile.close();

	return 0;
}
