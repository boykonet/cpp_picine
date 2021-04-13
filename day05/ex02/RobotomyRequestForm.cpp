#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45), \
_target("me")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("robotomy request", 72, 45), \
_target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &o) : Form(o)
{
	*this = o;
}

RobotomyRequestForm					&RobotomyRequestForm::operator=(RobotomyRequestForm const &o)
{
	(void)o;
	return *this;
}

std::string const					&RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

const char							*RobotomyRequestForm::FormNotBeenSigned::what() const throw()
{
	return "form has not been signed yet =(";
}

void 								RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIndicate())
		throw RobotomyRequestForm::FormNotBeenSigned();
	if (executor.getGrade() > this->getExecute())
		throw Form::GradeTooLowException();
	std::cout << this->getTarget() << " has been robotomized successfully 50% of the time" << std::endl;
}