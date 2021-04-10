#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# define GRADE_MIN	150
# define GRADE_MAX	1
# include <iostream>
# include <string>

class 				Bureaucrat
{
public:
	Bureaucrat(std::string const &name, int grade);
	virtual ~Bureaucrat();
	Bureaucrat(Bureaucrat const &o);
	std::string const		&getName() const;
	int 					getGrade() const;
	void					increase();
	void 					decrease();
	class	GradeTooHighException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
	public:
		virtual const char	*what() const throw();
	};

private:
	Bureaucrat();
	Bureaucrat				&operator=(Bureaucrat const &o);
	std::string const		_name;
	int 					_grade;
};

std::ostream 				&operator<<(std::ostream &os, Bureaucrat const &o);

#endif