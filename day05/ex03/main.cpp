#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main()
{
	Intern				maya;
	Form				*form1 = NULL;
	Form				*form2 = NULL;
	Form				*form3 = NULL;
	Form				*form4 = NULL;

	std::cout << "Create SomeRandomForm form:" << std::endl;
	try
	{
		form1 = maya.makeForm("SomeRandomForm", "me");
		std::cout << *form1;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "\e[1;4;33m" << "PresidentialPardonForm" << "\e[0m" << std::endl;
	std::cout << "Create presidential pardon form:" << std::endl;
	form1 = maya.makeForm("presidential pardon", "me");
	std::cout << *form1;
	std::cout << std::endl;

	std::cout << "Create presidential pardon form:" << std::endl;
	form2 = maya.makeForm("presidential pardon form", "me");
	std::cout << *form2;
	std::cout << std::endl;

	std::cout << "Create PresidentialPardon form:" << std::endl;
	form3 = maya.makeForm("PresidentialPardon", "me");
	std::cout << *form3;
	std::cout << std::endl;

	std::cout << "Create PresidentialPardonForm form:" << std::endl;
	form4 = maya.makeForm("PresidentialPardonForm", "me");
	std::cout << *form4;
	std::cout << std::endl;
	delete form1;
	delete form2;
	delete form3;
	delete form4;

	form1 = NULL;
	form2 = NULL;
	form3 = NULL;
	form4 = NULL;

	std::cout << "\e[1;4;33m" << "ShrubberyCreationForm" << "\e[0m" << std::endl;
	std::cout << "Create shrubbery creation form:" << std::endl;
	form1 = maya.makeForm("shrubbery creation", "me");
	std::cout << *form1;
	std::cout << std::endl;

	std::cout << "Create shrubbery creation form:" << std::endl;
	form2 = maya.makeForm("shrubbery creation form", "Alisa");
	std::cout << *form2;
	std::cout << std::endl;

	std::cout << "Create ShrubberyCreation form:" << std::endl;
	form3 = maya.makeForm("ShrubberyCreation", "Kolya");
	std::cout << *form3;
	std::cout << std::endl;

	std::cout << "Create ShrubberyCreationForm form:" << std::endl;
	form4 = maya.makeForm("ShrubberyCreationForm", "Venera");
	std::cout << *form4;
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
	delete form4;

	form1 = NULL;
	form2 = NULL;
	form3 = NULL;
	form4 = NULL;

	std::cout << "\e[1;4;33m" << "RobotomyRequestForm" << "\e[0m" << std::endl;
	std::cout << "Create robotomy request form:" << std::endl;
	form1 = maya.makeForm("robotomy request", "me");
	std::cout << *form1;
	std::cout << std::endl;

	std::cout << "Create robotomy request form:" << std::endl;
	form2 = maya.makeForm("robotomy request form", "Alisa");
	std::cout << *form2;
	std::cout << std::endl;

	std::cout << "Create RobotomyRequest form:" << std::endl;
	form3 = maya.makeForm("RobotomyRequest", "Kolya");
	std::cout << *form3;
	std::cout << std::endl;

	std::cout << "Create RobotomyRequestForm form:" << std::endl;
	form4 = maya.makeForm("RobotomyRequestForm", "Venera");
	std::cout << *form4;

	delete form1;
	delete form2;
	delete form3;
	delete form4;

	return 0;
}
