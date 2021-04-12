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
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &o);
	void 							execute(Bureaucrat const &executor) const;

};

#endif