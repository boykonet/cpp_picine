#include "Intern.hpp"

//typedef struct			s_form
//{
//	std::string const	name;
//	Form				(*f)(std::string);
//}						t_form;

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
	std::string 			names[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	Form					*(*f)[3](std::string) = { ShrubberyCreationForm, RobotomyRequestForm, PresidentialPardonForm };

	for (int i = 0; i < 3; i++)
	{
		if (name == names[i])
		{
			std::cout << "\e[1;32m" << "Intern created " << name << "\e[0m" << std::endl;]
			return new (*f)[i](target);
		}
	}
	return NULL;
}