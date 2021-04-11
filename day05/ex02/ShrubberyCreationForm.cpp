#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137)
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
	return *this;
}