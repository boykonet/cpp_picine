#include "scalar.hpp"
#include <exeption>

class	CountArgc : public std::exeption
{
	public:
		virtual const char		*what() const throw();
}

const char						*CountArgc::what() const throw
{
	return "Count argc != 2";
}

int			main(int argc, char **argv)
{
	try
	{
		if (argc != 2)
			CountArgc();
	}
	catch(std::exeprion &e)
	{
		std::cerr << "\e[1;"
	}

}
