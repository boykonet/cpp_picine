#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	RobotomyRequestForm				&operator=(RobotomyRequestForm const &o);
public:
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &o);

};

#endif