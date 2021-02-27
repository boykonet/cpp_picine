#include "phone.hpp"

void					addCmd(Contact &contacts, int &index)
{
	if (index == 8)
		std::cout << "\e[1;31mPhonebook is full.\e[0m" << std::endl;
	else
	{
		contacts.addNewContact(index + 1);
		index++;
	}
}

void 					searchCmd(Contact contacts[8], const int i)
{
	int 				count;
	int 				num;

	count = 0;
	while (count < i)
		contacts[count++].printList();
	if (count > 0)
	{
		std::cout << "\e[1;32mEnter number of contact:\e[0m ";
		std::cin >> num;
		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "\e[1;32mThis is not a number.\e[0m" << std::endl;
		}
		else if (num > 0 && num < i + 1)
			contacts[num - 1].printContactData();
		else
			std::cout << "\e[1;31mSomething went wrong. "
				"Try it again.\e[0m" << std::endl;
	}
	else
		std::cout << "\e[1;31mContact list is empty. "
			   "You must add at least 1 contact.\e[0m" << std::endl;
}

int						main(void)
{
	Contact				contacts[8];
	std::string			str;
	const std::string	searchToken = "SEARCH";
	const std::string	addToken = "ADD";
	const std::string	exitToken = "EXIT";
	int					i;

	i = 0;
	std::cout << "\e[1;33mHello!\e[0m ";
	std::cout << "\e[1;33mYou can use the next commands: ";
	std::cout << "ADD, SEARCH and EXIT.\e[0m" << std::endl;
	while (TRUE)
	{
		std::cout << "\e[1;32mEnter command:\e[0m ";
		std::cin >> str;
		if (str == searchToken)
			searchCmd(contacts, i);
		else if (str == addToken)
			addCmd(contacts[i], i);
		else if (str == exitToken)
			break ;
	}
	std::cout << "\e[1;33mBye!\e[0m" << std::endl;
	return (0);
}
