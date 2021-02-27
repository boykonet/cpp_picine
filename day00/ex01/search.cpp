#include "phone.hpp"

void		printToken(std::string token)
{
	if (token.length() <= 10)
		std::cout << std::setw(10) << token << "|";
	else
		std::cout << token.substr(0, 9) << "." << "|";
}

void		Contact::printList()
{
	std::cout << std::setw(10) << this->index << "|";
	printToken(this->firstName);
	printToken(this->lastName);
	printToken(this->nickname);
	std::cout << std::endl;
}

void 		Contact::printContactData()
{
	std::cout << this->firstName << std::endl;
	std::cout << this->lastName << std::endl;
	std::cout << this->nickname << std::endl;
	std::cout << this->firstName << std::endl;
	std::cout << this->firstName << std::endl;
	std::cout << this->firstName << std::endl;
	std::cout << this->firstName << std::endl;
	std::cout << this->firstName << std::endl;
	std::cout << this->firstName << std::endl;
	std::cout << this->firstName << std::endl;
	std::cout << this->firstName << std::endl;
}
