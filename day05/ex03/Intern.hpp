#ifndef INTERN_HPP
# define INTERN_HPP

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
	Form						*createNewShrubberyCreationForm(std::string const &target);
	Form						*createNewRobotomyRequestForm(std::string const &target);
	Form						*createNewPresidentialPardonForm(std::string const &target);
	Form						*makeForm(std::string const &name, std::string const &target) const;
	class 	CannotFindForm : public std::exception
	{
	public:
		virtual const char 		*what() const throw();
	};
	typedef Form				*(Intern::*TFormFuncPtr)(std::string const&);
};

#endif
