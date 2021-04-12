#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 72, 45, "me")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("PresidentialPardonForm", 72, 45, target)
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

void 									PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIndicate())
	{
		std::cout << "\e[1;31m" << "The " << this->getName() << " has not been signed yet =(" << "\e[0m" << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getExecute())
		throw Form::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}