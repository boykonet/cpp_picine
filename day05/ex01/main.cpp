#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main()
{
	Bureaucrat			vasya = Bureaucrat("Vasiliy", 11);
	Bureaucrat			valera = Bureaucrat("Valera", 1);

	std::cout << vasya << valera;

	std::cout << "\e[1;33m" << "Create form1 with grade for sign == 0 and grade for execute == 14" << "\e[0m" << std::endl;
	try
	{
		Form				*form1 = new Form("Form1", 0, 14);
		std::cout << *form1;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Create form2 with grade for sign == 14 and grade for execute == 0" << "\e[0m" << std::endl;
	try
	{
		Form				*form2 = new Form("Form2", 14, 0);
		std::cout << *form2;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Create form1.1 with grade for sign == 1 and grade for execute == 151" << "\e[0m" << std::endl;
	try
	{
		Form				*form11 = new Form("Form1.1", 1, 151);
		std::cout << *form11;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Create form2.1 with grade for sign == 151 and grade for execute == 1" << "\e[0m" << std::endl;
	try
	{
		Form				*form22 = new Form("Form2.1", 151, 1);
		std::cout << *form22;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Create form3 with grade for sign == 1 and grade for execute == 150 and \n"
							"form4 with grade for sign == 150 and grade for execute == 1" << "\e[0m" << std::endl;
	try
	{
		std::cout << "\e[1;33m" << "Create form3" << "\e[0m" << std::endl;
		Form				*form3 = new Form("Form3", 1, 150);
		std::cout << *form3;
		delete form3;

		std::cout << "\e[1;33m" << "Create form4" << "\e[0m" << std::endl;
		Form				*form4 = new Form("Form4", 150, 1);
		std::cout << *form4;
		delete form4;
	}
	catch(std::exception &e)
	{
		std::cerr << "\e[1;31m" << "Error: " << e.what() << "\e[0m" << std::endl;
	}
	std::cout << std::endl;


	std::cout << "\e[1;33m" << "Create form5 with grade for sign == 10 and grade for execute == 10" << "\e[0m" << std::endl;
	Form				form5 = Form("Form5", 10, 10);
	std::cout << form5;

	std::cout << "Vasya is trying to sign Form5:" << std::endl;
	vasya.signForm(form5);

	std::cout << "Valera is trying to sign Form5:" << std::endl;
	valera.signForm(form5);

	std::cout << "Vasya is trying to sign the already signed Form5" << std::endl;
	valera.signForm(form5);

	return 0;
}
