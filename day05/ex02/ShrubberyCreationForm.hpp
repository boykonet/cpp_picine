#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm			&operator=(ShrubberyCreationForm const &o);
public:
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm const &o);

};

#endif