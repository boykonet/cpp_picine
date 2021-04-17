#include "Scalar.hpp"

Scalar::Scalar() : _dnum(0)
{
}

Scalar::~Scalar()
{
}

Scalar::Scalar(Scalar const &o) : _dnum(o.getDNum())
{
	*this = o;
}

Scalar			&Scalar::operator=(Scalar const &o)
{
	if (this != &o)
		this->_dnum = o.getDNum();
	return *this;
}

void 			Scalar::setDNum(double num)
{
	this->_dnum = num;
}

long double		Scalar::getDNum() const
{
	return this->_dnum;
}

void 			Scalar::convertPrintChar() const
{
	std::cout << "char: ";
	if (!isascii(static_cast<int>(this->_dnum)))
		throw Impossible();
	if (!isprint(static_cast<int>(this->_dnum)))
		throw NotDisplayable();
	std::cout << static_cast<char>(this->_dnum);
	std::cout << std::endl;
}

void 			Scalar::convertPrintInt() const
{
	std::cout << "int: ";
	if ((this->_dnum > std::numeric_limits<int>::max() ||
	this->_dnum < std::numeric_limits<int>::min()) ||
	isnan(this->_dnum) || isinf(this->_dnum))
		throw Impossible();
	std::cout << static_cast<int>(this->_dnum);
	std::cout << std::endl;
}

void 			Scalar::convertPrintFloat() const
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

void 			Scalar::convertPrintDouble() const
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

void 			Scalar::exceptionHandler(std::string const &name) const
{
	std::string 		params[4] = { "char", "int", "float", "double" };
	Scalar::FuncPtr		func[4] = { &Scalar::convertPrintChar, &Scalar::convertPrintInt,
							  &Scalar::convertPrintFloat, &Scalar::convertPrintDouble };

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