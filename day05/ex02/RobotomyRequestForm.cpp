#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
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
	return *this;
}