#include "Form.hpp"

Form::Form() : _name("Bureaucrat"), \
_indicate(false), _sign(10), _execute(10)
{
}

Form::Form(std::string const &name, int sign, int execute) : _name(name), \
_indicate(false), _sign(sign), _execute(execute)
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
_sign(o.getSign()), _execute(o.getExecute())
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
	return "grade too high exception";
}

const char					*Form::GradeTooLowException::what() const throw()
{
	return "grade too low exception";
}

const char					*Form::FormAlreadySigned::what() const throw()
{
	return "form already been signed";
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
		throw Form::FormAlreadySigned();
	if (o.getGrade() > this->_sign)
		throw Form::GradeTooLowException();
	this->_indicate = true;
}

std::ostream 				&operator<<(std::ostream &os, Form const &o)
{
	os << "\e[1;34m" << o.getName() << " form has " << o.getIndicate() \
	<< " - indicator whether it is signed, " << o.getSign() \
	<< " - a grade required to sign it and " << o.getExecute() \
	<< " - a grade required to execute it." << "\e[0m" << std::endl;
	return (os);
}