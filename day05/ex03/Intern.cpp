#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
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
	Form					*form = NULL;
	int 					flag;

	flag = 0;
	flag = (name == "shrubbery creation") : 1 ? flag;
	flag = (name == "robotomy request") : 2 ? flag;
	flag = (name == "presidential pardon") : 3 ? flag;
	if (flag == 0)
	{
		std::cout << "Error: " << name << " doesn't find =(" << std::endl;
		return NULL;
	}
	if (flag == 1)
		form = new ShrubberyCreationForm(target);
	if (flag == 2)
		form = new RobotomyRequestForm(target);
	if (flag == 3)
		form = new PresidentialPardonForm(target);
	std::cout << "Intern creates " << << std::endl;
	return form;
}