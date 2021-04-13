#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 72, 45), \
_target("me")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("presidential pardon", 72, 45), \
_target(target)
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
	(void)o;
	return *this;
}

std::string const						&PresidentialPardonForm::getTarget() const
{
	return this->_target;
}

const char								*PresidentialPardonForm::FormNotBeenSigned::what() const throw()
{
	return "form has not been signed yet =(";
}

void 									PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIndicate())
		throw PresidentialPardonForm::FormNotBeenSigned();
	if (executor.getGrade() > this->getExecute())
		throw Form::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}