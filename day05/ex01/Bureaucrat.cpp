#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(1)
{
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
	try
	{
		if (grade < GRADE_MAX)
			throw Bureaucrat::GradeTooHighException();
		if (grade > GRADE_MIN)
			throw Bureaucrat::GradeTooLowException();
		this->_grade = grade;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
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
	return "Grade too high exception";
}

const char					*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too low exception";
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
	os << o.getName() << ", bureaucrat grade " << o.getGrade() << std::endl;
	return (os);
}

void 						Bureaucrat::signForm(int indicate) const
{
	if (indicate)
	{
		std::cout << this->_name << " signs " << std::endl;
		return ;
	}
	std::cout << this->_name << " cannot signs " << o.getName() << " because " << std::endl;
}