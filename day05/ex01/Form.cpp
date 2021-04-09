#include "Form.hpp"

Form::Form() : _name("Bureaucrat"), \
_indicate(0), _gradeForSign(10), _gradeForExecute(10)
{
}

Form::Form(std::string const &name, int gradeForSign, int gradeForExecute) : _name(name), \
_indicate(0), _gradeForSign(gradeForSign), _gradeForExecute(gradeForExecute)
{

}

Form::~Form()
{
}

Form::Form(Form const &o) : _name(o.getName()), _gradeForSign(o.getGradeForSign()), _gradeForExecute(o.getGradeForExecute())
{
	*this = o;
}

Form						&Form::operator=(Form const &o)
{
	if (this != &o)
	{
		this->_indicate = o.getIndicate();
	}
	return *this;
}

std::string const			&Form::getName() const
{
	return this->_name;
}

bool const					Form::getIndicate() const
{
	return this->_indicate;
}

int 						Form::getGradeForSign() const
{
	return this->_gradeForSign;
}

int 						Form::getGradeForExecute() const
{
	return this->_gradeForExecute;
}

void 						Form::beSigned(Bureaucrat const &o)
{

}

std::ostream 				&operator<<(std::ostream &os, Form const &o)
{
	os << o.getName() << " has " << o.getIndicate() \
	<< " - indicator whether it is signed, " << o.getGradeForSign() \
	<< " - a grade required to sign it and " << o.getGradeForExecute() \
	<< " - a grade required to execute it." << std::endl;
	return (os);
}