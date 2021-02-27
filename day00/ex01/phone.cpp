#include "phone.hpp"

Contact::Contact()
{
	this->index = 0;
}

Contact::~Contact()
{
	this->index = 0;
}

void 		Contact::addNewContact(int ind)
{
	this->index = ind;
	std::cout << "\e[1;36mEnter first name\e[0m: ";
	std::cin >> this->firstName;
	std::cout << "\e[1;36mEnter last name\e[0m: ";
	std::cin >> this->lastName;
	std::cout << "\e[1;36mEnter nickname\e[0m: ";
	std::cin >> this->nickname;
	std::cout << "\e[1;36mEnter login\e[0m: ";
	std::cin >> this->login;
	std::cout << "\e[1;36mEnter postal address\e[0m: ";
	std::cin >> this->postalAddress;
	std::cout << "\e[1;36mEnter email address\e[0m: ";
	std::cin >> this->email;
	std::cout << "\e[1;36mEnter phone number\e[0m: ";
	std::cin >> this->phoneNumber;
	std::cout << "\e[1;36mEnter birthday date\e[0m: ";
	std::cin >> this->birthdayDate;
	std::cout << "\e[1;36mEnter favorite meal\e[0m: ";
	std::cin >> this->favoriteMeal;
	std::cout << "\e[1;36mEnter underwear color\e[0m: ";
	std::cin >> this->underwearColor;
	std::cout << "\e[1;36mEnter darkest secret\e[0m: ";
	std::cin >> this->darkestSecret;
}

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

void 		Contact::printContactData()
{
	std::cout << std::setw(30) << "\e[1;35mFirst name\e[0m: ";
	std::cout << this->firstName << std::endl;
	std::cout << std::setw(30) << "\e[1;35mLast name\e[0m: ";
	std::cout << this->lastName << std::endl;
	std::cout << std::setw(30) << "\e[1;35mNickname\e[0m: ";
	std::cout << this->nickname << std::endl;
	std::cout << std::setw(30) << "\e[1;35mLogin\e[0m: ";
	std::cout << this->login << std::endl;
	std::cout << std::setw(30) << "\e[1;35mPostal address\e[0m: ";
	std::cout << this->postalAddress << std::endl;
	std::cout << std::setw(30) << "\e[1;35mEmail address\e[0m: ";
	std::cout << this->email << std::endl;
	std::cout << std::setw(30) << "\e[1;35mPhone number\e[0m: ";
	std::cout << this->phoneNumber << std::endl;
	std::cout << std::setw(30) << "\e[1;35mBirthday date\e[0m: ";
	std::cout << this->birthdayDate << std::endl;
	std::cout << std::setw(30) << "\e[1;35mFavorite meal\e[0m: ";
	std::cout << this->favoriteMeal << std::endl;
	std::cout << std::setw(30) << "\e[1;35mUnderwear color\e[0m: ";
	std::cout << this->underwearColor << std::endl;
	std::cout << std::setw(30) << "\e[1;35mDarkest secret\e[0m: ";
	std::cout << this->darkestSecret << std::endl;
}