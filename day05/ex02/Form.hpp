#ifndef FORM_HPP
# define FORM_HPP

class	Bureaucrat;
# define GRADE_MAX	1
# define GRADE_MIN	150
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class 			Form
{
public:
	Form(std::string const &name, int gradeForSign, int gradeForExecute, std::string const &target);
	virtual ~Form();
	Form(Form const &o);
	virtual std::string const	&getName() const;
	virtual bool 				getIndicate() const;
	virtual int 				getSign() const;
	virtual int 				getExecute() const;
	virtual std::string const	&getTarget() const;
	void 						beSigned(Bureaucrat const &o);

	class 	GradeTooHighException : public std::exception
	{
	public:
		virtual const char		*what() const throw();
	};
	class 	GradeTooLowException : public std::exception
	{
	public:
		virtual const char		*what() const throw();
	};
	virtual void				execute(Bureaucrat const &executor) const = 0;

private:
	Form();
	Form						&operator=(Form const &o);
	std::string const			_name;
	bool						_indicate;
	int const 					_sign;
	int const 					_execute;
	std::string const			_target;
};

std::ostream 					&operator<<(std::ostream &os, Form const &o);

#endif