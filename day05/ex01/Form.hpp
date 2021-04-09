#ifndef FORM_HPP
# define FORM_HPP

# define GRADE_MAX	1
# define GRADE_MIN	150
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class 			Form
{
public:
	Form(std::string const &name, int gradeForSign, int gradeForExecute);
	virtual ~Form();
	Form(Form const &o);
	Form						&operator=(Form const &o);
	std::string const			&getName() const;
	bool const					getIndicate() const;
	int 						getGradeForSign() const;
	int 						getGradeForExecute() const;
	void 						beSigned(Bureaucrat const &o);
	class 	GradeTooLowException
	{
	public:
		virtual const char* what() const throw()
		{
			return "Grade too low exception";
		}
	};

private:
	Form();
	std::string const			_name;
	bool						_indicate;
	int const 					_gradeForSign;
	int const 					_gradeForExecute;
};

std::ostream 					&operator<<(std::ostream &os, Form const &o);

#endif