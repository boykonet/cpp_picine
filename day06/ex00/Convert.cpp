#include "Convert.hpp"

Convert::Convert() : _dnum(0)
{
}

Convert::~Convert()
{
}

Convert::Convert(Convert const &o) : _dnum(o.getDNum())
{
	*this = o;
}

Convert			&Convert::operator=(Convert const &o)
{
	if (this != &o)
		this->_dnum = o.getDNum();
	return *this;
}

void 			Convert::setDNum(double num)
{
	this->_dnum = num;
}

long double		Convert::getDNum() const
{
	return this->_dnum;
}

void 			Convert::convertPrintChar() const
{
	std::cout << "char: ";
	if (!isascii(static_cast<int>(this->_dnum)))
		throw Impossible();
	if (!isprint(static_cast<int>(this->_dnum)))
		throw NotDisplayable();
	std::cout << static_cast<char>(this->_dnum);
	std::cout << std::endl;
}

void 			Convert::convertPrintInt() const
{
	std::cout << "int: ";
	if ((this->_dnum > std::numeric_limits<int>::max() ||
	this->_dnum < std::numeric_limits<int>::min()) ||
	isnan(this->_dnum) || isinf(this->_dnum))
		throw Impossible();
	std::cout << static_cast<int>(this->_dnum);
	std::cout << std::endl;
}

void 			Convert::convertPrintFloat() const
{
	std::cout << "float: ";
	if ((fabs(this->_dnum - std::numeric_limits<float>::min()) < 1e-14
	|| fabs(this->_dnum - std::numeric_limits<float>::max()) < 1e-14)
	&& (isnan(static_cast<float>(this->_dnum))
	&& isinf(static_cast<float>(this->_dnum))))
		throw Impossible();
	if (fabs(this->_dnum - floorf(static_cast<float>(this->_dnum))) < 1e-14)
		std::cout << std::fixed << std::setprecision(1) << static_cast<float>(this->_dnum);
	else
		std::cout << std::setprecision(6) << static_cast<float>(this->_dnum);
	std::cout << "f";
	std::cout << std::endl;
}

void 			Convert::convertPrintDouble() const
{
	std::cout << "double: ";
	if ((fabs(this->_dnum - std::numeric_limits<double>::min()) < 1e-14
	|| fabs(this->_dnum - std::numeric_limits<double>::max()) < 1e-14)
	&& (isnan(this->_dnum) || isinf(this->_dnum)))
		throw Impossible();
	if (fabs(this->_dnum - floor(static_cast<double>(this->_dnum))) < 1e-7)
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(this->_dnum);
	else
		std::cout << std::setprecision(6) << static_cast<double>(this->_dnum);
	std::cout << std::endl;
}

void 			Convert::exceptionHandler(std::string const &name) const
{
	std::string 		params[4] = { "char", "int", "float", "double" };
	Convert::FuncPtr		func[4] = { &Convert::convertPrintChar, &Convert::convertPrintInt,
							  &Convert::convertPrintFloat, &Convert::convertPrintDouble };

	for (int i = 0; i < 4; i++)
	{
		if (name == params[i])
		{
			try
			{
				(*this.*func[i])();
			}
			catch(std::exception &e)
			{
				std::cout << e.what() << std::endl;
			}
			break ;
		}
	}
}

const char		*NotDisplayable::what() const throw()
{
	return "not displayable";
}

const char		*Impossible::what() const throw()
{
	return "impossible";
}