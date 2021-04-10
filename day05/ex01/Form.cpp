#include "Form.hpp"

Form::Form() : _name("Bureaucrat"), \
_indicate(0), _sign(10), _execute(10)
{
}

Form::Form(std::string const &name, int sign, int execute) : _name(name), \
_indicate(0), _sign(sign), _execute(execute)
{
	try
	{
		if (this->_sign < GRADE_MAX || this->_execute < GRADE_MAX)
			throw Form::GradeTooHighException();
		if (this->_sign > GRADE_MIN || this->_execute > GRADE_MIN)
			throw Form::GradeTooLowException();
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
}

Form::~Form()
{
}

Form::Form(Form const &o) : _name(o.getName()), _indicate(o.getIndicate()), \
_sign(o.getSign()), _execute(o.getExecute())
{
	*this = o;
}

Form						&Form::operator=(Form const &o)
{
	(void)o;
	return *this;
}

const char					*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

const char					*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
}

std::string const			&Form::getName() const
{
	return this->_name;
}

bool 						Form::getIndicate() const
{
	return this->_indicate;
}

int 						Form::getSign() const
{
	return this->_sign;
}

int 						Form::getExecute() const
{
	return this->_execute;
}

void 						Form::beSigned(Bureaucrat const &o)
{
	try
	{
		if (o.getGrade() > this->_sign && o.getGrade() > this->_execute)
			throw Form::GradeTooLowException();
		std::cout << "Form is sign." << std::endl;
		this->_indicate = 1;
		o.signForm(1);
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
}

std::ostream 				&operator<<(std::ostream &os, Form const &o)
{
	os << o.getName() << " has " << o.getIndicate() \
	<< " - indicator whether it is signed, " << o.getSign() \
	<< " - a grade required to sign it and " << o.getExecute() \
	<< " - a grade required to execute it." << std::endl;
	return (os);
}