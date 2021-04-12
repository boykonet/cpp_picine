#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137, "my")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("shrubbery creation", 145, 137, target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o) : Form(o)
{
	*this = o;
}

ShrubberyCreationForm				&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &o)
{
	(void)o;
	return *this;
}

void								ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	int					k;
	int					s;
	std::ofstream		ofs;

	if (!this->getIndicate())
	{
		std::cout << "\e[1;31m" << "The " << this->getName() << " has not been signed yet =(" << "\e[0m" << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getExecute())
		throw Form::GradeTooLowException();
	ofs.open(this->getTarget() + "_shrubbery");
	if (ofs.fail())
		std::cerr << "Error: open file" << std::endl;
	for (int i = 0; i < 17; i++)
	{
		if (i == 0)
		{
			s = 1;
			k = 20;
		}
		else if (i == 5 || i == 15)
		{
			s = 5;
			k = 18;
		}
		else if (i == 10)
		{
			s = 9;
			k = 16;
		}
		for (int j = 0; j < k; j++)
			ofs << " ";
		for (int j = 0; j < s; j++)
			ofs << "*";
		for (int j = 0; j < k; j++)
			ofs << " ";
		if (i < 15)
		{
			k--;
			s = s + 2;
		}
		ofs << std::endl;
	}
	ofs.close();
	if (ofs.fail())
		std::cerr << "Error: close file" << std::endl;
}

Form								*Form::copyShrubberyCreationForm(std::string const &target) const
{
	return new ShrubberyCreationForm(target);
}