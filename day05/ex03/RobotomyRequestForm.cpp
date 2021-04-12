#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45, "me")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("robotomy request", 72, 45, target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o) : Form(o)
{
	*this = o;
}

RobotomyRequestForm					&RobotomyRequestForm::operator=(const RobotomyRequestForm &o)
{
	(void)o;
	return *this;
}

void 								RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIndicate())
	{
		std::cout << "\e[1;31m" << "The " << this->getName() << " has not been signed yet =(" << "\e[0m" << std::endl;
		return ;
	}
	if (executor.getGrade() > this->getExecute())
		throw Form::GradeTooLowException();
	std::cout << this->getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
}