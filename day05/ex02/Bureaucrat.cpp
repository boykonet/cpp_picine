#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(1)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	if (grade < GRADE_MAX)
		throw Bureaucrat::GradeTooHighException();
	if (grade > GRADE_MIN)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(Bureaucrat const &o) : _name(o.getName()), _grade(o.getGrade())
{
	*this = o;
}

Bureaucrat					&Bureaucrat::operator=(Bureaucrat const &o)
{
	(void)o;
	return *this;
}

const char					*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "grade too high exception";
}

const char					*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "grade too low exception";
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
	try
	{
		if (this->_grade == 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade -= 1;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
}

void 						Bureaucrat::decrease()
{
	try
	{
		if (this->_grade == 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade += 1;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
}

std::ostream 				&operator<<(std::ostream &os, Bureaucrat const &o)
{
	os << "\e[1;37m" << o.getName() << ", bureaucrat grade " << o.getGrade() << "\e[0m" << std::endl;
	return (os);
}

void 						Bureaucrat::signForm(Form &o) const
{
	try
	{
		o.beSigned(*this);
		std::cout << "\e[1;32m" << this->_name << " signs " << o.getName() << " form\e[0m" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << this->_name << " cannot sign " << o.getName() << " form because " << e.what() << "\e[0m" << std::endl;
	}
}

void						Bureaucrat::executeForm(Form const &form) const
{
	try
	{
		form.execute(*this);
		std::cout << "\e[1;32m" << this->_name << " execute " << form.getName() << " form\e[0m" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << "\e[1;31m" << this->_name << " cannot sign " << form.getName() << " form because " << e.what() << "\e[0m" << std::endl;
	}
}