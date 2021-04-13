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

const char 					*Intern::CannotFindForm::what() const throw()
{
	return "form not found";
}

Form						*Intern::makeForm(std::string const &name, std::string const &target) const
{
	Intern					intern;
	std::string				names[12] = { 	"shrubbery creation", "robotomy request", "presidential pardon",
							 				"shrubbery creation form", "robotomy request form", "presidential pardon form",
							 				"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon",
							 				"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"	};
	Intern::TFormFuncPtr	forms[3] = { &Intern::createNewShrubberyCreationForm, \
	&Intern::createNewRobotomyRequestForm, &Intern::createNewPresidentialPardonForm };

	for (int i = 0; i < 12; i++)
	{
		if (name == names[i])
		{
			std::cout << "\e[1;32m" << "Intern created " << name << " form\e[0m" << std::endl;
			return (intern.*forms[i % 3])(target);
		}
	}
	throw Intern::CannotFindForm();
}
