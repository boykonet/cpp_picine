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
	std::string const				_target;
public:
	RobotomyRequestForm(std::string const &target);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &o);
	std::string const				&getTarget() const;
	class 	FormNotBeenSigned : public std::exception
	{
	public:
		virtual const char		*what() const throw();
	};
	void 							execute(Bureaucrat const &executor) const;

};

#endif