#include "Form.hpp"

Form::Form() : _name("Bureaucrat"), \
_indicate(false), _sign(10), _execute(10), _target("my")
{
}

Form::Form(std::string const &name, int sign, int execute, std::string const &target) : _name(name), \
_indicate(false), _sign(sign), _execute(execute), _target(target)
{
	if (this->_sign < GRADE_MAX || this->_execute < GRADE_MAX)
		throw Form::GradeTooHighException();
	if (this->_sign > GRADE_MIN || this->_execute > GRADE_MIN)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(Form const &o) : _name(o.getName()), _indicate(o.getIndicate()), \
_sign(o.getSign()), _execute(o.getExecute()), _target(o.getTarget())
{
	*this = o;
}

Form						&Form::operator=(Form const &o)
{
	(void)o;
	return *this;
}

const char					*Form::GradeTooHighException::what() const throw()
{
	return "Grade too high exception";
}

const char					*Form::GradeTooLowException::what() const throw()
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
	if (this->_indicate)
	{
		std::cout << "\e[1;31m" << this->_name << " was already been signed" << "\e[0m" << std::endl;
		return ;
	}
//	try
//	{
	if (o.getGrade() > this->_sign)
		throw Form::GradeTooLowException();
	this->_indicate = true;
	std::cout << "\e[1;32m" << o.getName() << " signs " << this->_name << "\e[0m" << std::endl;
//	}
//	catch(std::exception &e)
//	{
//		std::cerr << "\e[1;31m" << o.getName() << " cannot sign " << this->_name << " because " << e.what() << "\e[0m" << std::endl;
//	}
}

std::ostream 				&operator<<(std::ostream &os, Form const &o)
{
	os << "\e[1;34m" << o.getName() << " has " << o.getIndicate() \
	<< " - indicator whether it is signed, " << o.getSign() \
	<< " - a grade required to sign it and " << o.getExecute() \
	<< " - a grade required to execute it." << "\e[0m" << std::endl;
	return (os);
}

std::string const			&Form::getTarget() const
{
	return this->_target;
}