#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <vector>

class 			Span
{
private:
	Span();
	std::vector<int>			_arr;
	std::vector<int>::iterator	_it;
public:
	Span(unsigned int N);
	virtual ~Span();
	Span(Span const &o);
	Span						&operator=(Span const &o);
	void 						addNumber(int n);
	int 						shortestSpan() const;
	int 						longestSpan() const;

	class 						ErrAddNum : public std::exception
	{
	public:
		virtual const char 		*what() const throw();
	};
};

#endif