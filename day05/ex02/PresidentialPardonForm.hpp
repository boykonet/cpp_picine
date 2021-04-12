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
public:
	PresidentialPardonForm(std::string const &target);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &o);
	void 							execute(Bureaucrat const &executor) const;

};

#endif