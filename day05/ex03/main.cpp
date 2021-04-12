#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"

int			main()
{
	Intern				maya;
	Form				*form;

	form = maya.makeForm("SomeRandomForm", "me");

	delete form;
	return 0;
}
