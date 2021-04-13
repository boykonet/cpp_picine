#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form						*Intern::createNewShrubberyCreationForm(std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form						*Intern::createNewRobotomyRequestForm(std::string const &target)
{
	return new RobotomyRequestForm(target);
}

Form						*Intern::createNewPresidentialPardonForm(std::string const &target)
{
	return new PresidentialPardonForm(target);
}


Intern::Intern(Intern const &o)
{
	*this = o;
}

Intern						&Intern::operator=(Intern const &o)
{
	(void)o;
	return *this;
}

Form						*Intern::makeForm(std::string const &name, std::string const &target) const
{
	std::string		names[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	void			(Intern::*forms[3])(std::string const&) = { &Intern::createNewShrubberyCreationForm, &Intern::createNewRobotomyRequestForm, &Intern::createNewPresidentialPardonForm };

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
		{
			std::cout << "\e[1;32m" << "Intern created " << name << "\e[0m" << std::endl;
			return forms[i](target);
		}
	}
	return NULL;
}
