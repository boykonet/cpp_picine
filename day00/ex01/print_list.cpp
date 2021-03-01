#include "contact.hpp"

void		printToken(std::string token)
{
	if (token.length() <= 10)
		std::cout << std::setw(10) << token;
	else
		std::cout << token.substr(0, 9) << ".";
	std::cout << "\e[1;31m|\e[0m";
}

void		Contact::printList()
{
	std::cout << std::setw(10) << this->index << "\e[1;31m|\e[0m";
	printToken(this->firstName);
	printToken(this->lastName);
	printToken(this->nickname);
	std::cout << std::endl;
}
