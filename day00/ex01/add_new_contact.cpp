#include "contact.hpp"

void 		Contact::addNewContact(int ind)
{
	this->index = ind;
	std::cout << "\e[1;36mEnter first name\e[0m: ";
	std::getline(std::cin, this->firstName);
	std::cout << "\e[1;36mEnter last name\e[0m: ";
	std::getline(std::cin, this->lastName);
	std::cout << "\e[1;36mEnter nickname\e[0m: ";
	std::getline(std::cin, this->nickname);
	std::cout << "\e[1;36mEnter login\e[0m: ";
	std::getline(std::cin, this->login);
	std::cout << "\e[1;36mEnter postal address\e[0m: ";
	std::getline(std::cin, this->postalAddress);
	std::cout << "\e[1;36mEnter email address\e[0m: ";
	std::getline(std::cin, this->email);
	std::cout << "\e[1;36mEnter phone number\e[0m: ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "\e[1;36mEnter birthday date\e[0m: ";
	std::getline(std::cin, this->birthdayDate);
	std::cout << "\e[1;36mEnter favorite meal\e[0m: ";
	std::getline(std::cin, this->favoriteMeal);
	std::cout << "\e[1;36mEnter underwear color\e[0m: ";
	std::getline(std::cin, this->underwearColor);
	std::cout << "\e[1;36mEnter darkest secret\e[0m: ";
	std::getline(std::cin, this->darkestSecret);
}
