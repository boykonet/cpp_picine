#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	PresidentialPardonForm			&operator=(PresidentialPardonForm const &o);
	std::string const				_target;
public:
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &o);
	std::string const				&getTarget() const;
	class 	FormNotBeenSigned : public std::exception
	{
	public:
		virtual const char			*what() const throw();
	};
	void 							execute(Bureaucrat const &executor) const;

};

#endif