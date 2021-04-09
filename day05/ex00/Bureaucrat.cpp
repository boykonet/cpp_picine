#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade < GRADE_MAX - 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > GRADE_MIN + 1)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &o) : _name(o.getName())
{
	*this = o;
}

Bureaucrat					&Bureaucrat::operator=(Bureaucrat const &o)
{
	if (this != &o)
	{
		this->_grade = o.getGrade();
	}
	return *this;
}

std::string const			&Bureaucrat::getName() const
{
	return this->_name;
}

int 						Bureaucrat::getGrade() const
{
	return this->_grade;
}

void						Bureaucrat::increase()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void 						Bureaucrat::decrease()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

std::ostream 				&operator<<(std::ostream &os, Bureaucrat const &o)
{
	os << o.getName() << ", bureaucrat grade " << o.getGrade() << std::endl;
	return (os);
}