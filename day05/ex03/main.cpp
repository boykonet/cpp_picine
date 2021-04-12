#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

int			main()
{
	Intern				maya;
	Form				*form;

	form = maya.makeForm("SomeRandomForm", "me");
	if (form == NULL)
		form = maya.makeForm("presidential pardon", "me");

	std::cout << *form;

	delete form;
	return 0;
}
