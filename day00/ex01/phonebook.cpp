#include "./phone.hpp"

void 		printToken(std::string token)
{
	if (token.length() <= 10)
		std::cout << std::setw(10) << token << "|";
	else
		std::cout << token.substr(0, 9) << "." << "|";
}

void		searchList(Contact (&contacts)[8], const int count)
{
	int		i;

	i = 0;
	while (count > i)
	{
		std::cout << std::setw(10) << contacts[i].index << "|";
		printToken(contacts[i].firstName);
		printToken(contacts[i].lastName);
		printToken(contacts[i].nickname);
		std::cout << std::endl;
		i++;
	}
}

void 		addList(Contact &contact, const int index)
{
	contact.index = index;
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
	std::cout << "Enter darkest secret: ";
	std::cin >> contact.darkestSecret;
}

int			main(void)
{
	Contact				contacts[8];
	std::string			str;
	const std::string	searchToken;
	const std::string	addToken;
	const std::string	exitToken;
	int					i;

	i = 0;
	searchToken = "SEARCH";
	addToken = "ADD";
	exitToken = "EXIT";
	while (TRUE)
	{
		std::cout << "Enter command: ";
		std::cin >> str;
		if (str == searchToken)
			searchList(contacts, i);
		else if (str == addToken)
		{
			if (i == 7)
				std::cout << "Phonebook is full." << std::endl;
			else
			{
				addList(contacts[i], i + 1);
				i++;
			}
		}
		else if (str == exitToken)
			break ;
	}
}
