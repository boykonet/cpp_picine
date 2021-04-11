#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 72, 45)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &o) : Form(o)
{
	*this = o;
}

PresidentialPardonForm					&PresidentialPardonForm::operator=(PresidentialPardonForm const &o)
{
	return *this;
}