#include "contact.hpp"

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
	std::cout << this->darkestSecret;
}
