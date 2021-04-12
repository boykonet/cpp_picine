#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main()
{
	Bureaucrat			andrey = Bureaucrat("Andrey", 1);
	Bureaucrat			valera = Bureaucrat("Valera", 150);
	Form				*form1 = new ShrubberyCreationForm("tree");
	Form				*form2 = new RobotomyRequestForm("Masha");
	Form				*form3 = new PresidentialPardonForm("Alisa");


	std::cout << "\e[1;33m" << "Bureaucrats:" << "\e[0m" << std::endl;
	std::cout << andrey << valera;
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Forms:" << "\e[0m" << std::endl;
	std::cout << *form1 << *form2 << *form3;
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Andrey executes unsigned forms:" << "\e[0m" << std::endl;
	andrey.executeForm(*form1);
	andrey.executeForm(*form2);
	andrey.executeForm(*form3);
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Andrey signs forms:" << "\e[0m" << std::endl;
	andrey.signForm(*form1);
	andrey.signForm(*form2);
	andrey.signForm(*form3);
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Forms:" << "\e[0m" << std::endl;
	std::cout << *form1 << *form2 << *form3;
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Andrey executes signed forms:" << "\e[0m" << std::endl;
	andrey.executeForm(*form1);
	andrey.executeForm(*form2);
	andrey.executeForm(*form3);
	std::cout << std::endl;

	std::cout << "\e[1;33m" << "Valera executes forms:" << "\e[0m" << std::endl;
	valera.executeForm(*form1);
	valera.executeForm(*form2);
	valera.executeForm(*form3);
	std::cout << std::endl;

	delete form1;
	delete form2;
	delete form3;
	return 0;
}