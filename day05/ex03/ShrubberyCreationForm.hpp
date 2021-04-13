#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm			&operator=(ShrubberyCreationForm const &o);
	std::string const				_target;
public:
	ShrubberyCreationForm(std::string const &target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &o);
	std::string const				&getTarget() const;
	class 	ErrOpenCloseFile : public std::exception
	{
	public:
		virtual const char			*what() const throw();
	};
	class 	FormNotBeenSigned : public std::exception
	{
	public:
		virtual const char			*what() const throw();
	};
	void							execute(Bureaucrat const &executor) const;
};

#endif