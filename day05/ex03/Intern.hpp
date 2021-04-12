#ifndef INTERN_HPP
# define INTERN_HPP

//class	Form;
//class 	ShrubberyCreationForm;
//class 	RobotomyRequestForm;
//class 	PresidentialPardonForm;

# include <iostream>
# include <string>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class 			Intern
{
public:
	Intern();
	~Intern();
	Intern						&operator=(Intern const &o);
	Intern(Intern const &o);
	Form						*makeForm(std::string const &name, std::string const &target) const;
};

#endif