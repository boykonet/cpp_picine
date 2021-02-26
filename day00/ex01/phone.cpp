#include "phone.hpp"

Contact::Contact(Contact &contact, int index)
{
	contact.firstName = NULL;
	contact.lastName = NULL;
	contact.nickname = NULL;
	contact.login = NULL;
	contact.postalAddress = NULL;
	contact.email = NULL;
	contact.phoneNumber = NULL;
	contact.birthdayDate = NULL;
	contact.favoriteMeal = NULL;
	contact.underwearColor = NULL;
	contact.darkestSecret = NULL;
	contact.index = index;
}

Contact::~Contact()
{
	return ;
}

void	Contact::newContact(Contact &contact)
{
	std::cout << "Enter first name: ";
	std::cin >> contact.firstName;

	std::cout << "Enter last name: ";
	std::cin >> contact.lastName;

	std::cout << "Enter nickname: ";
	std::cin >> contact.nickname;

	std::cout << "Enter login: ";
	std::cin >> contact.login;

	std::cout << "Enter postal address: ";
	std::cin >> contact.postalAddress;

	std::cout << "Enter email address: ";
	std::cin >> contact.email;

	std::cout << "Enter phone number: ";
	std::cin >> contact.phoneNumber;

	std::cout << "Enter birthday date: ";
	std::cin >> contact.birthdayDate;

	std::cout << "Enter favorite meal: ";
	std::cin >> contact.favoriteMeal;

	std::cout << "Enter underwear color: ";
	std::cin >> contact.underwearColor;

	std::cout << "Enter darkestSecret: ";
	std::cin >> contact.darkestSecret;
}
