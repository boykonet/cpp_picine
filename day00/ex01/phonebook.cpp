#include "contact.hpp"

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

void 					getNum(Contact contacts[8], const int index)
{
	std::string 		num;
	int 				count;
	int 				neg;
	int 				n;

	count = 0;
	n = 0;
	neg = 1;
	std::cout << "\e[1;32mEnter contact number:\e[0m ";
	std::getline(std::cin, num);
	while (num[count] == '-' || num[count] == '+')
	{
		if (num[count] == '-')
			neg = -1;
		count++;
	}
	while (num[count] >= '0' && num[count] <= '9')
		n = n * 10 + num[count++] - '0';
	if (num[count])
		std::cout << "\e[1;31mThis is not a number.\e[0m";
	else
	{
		n = n * neg;
		if (n > 0 && n < index + 1)
			contacts[n - 1].printContactData();
		else
			std::cout << "\e[1;31mSomething went wrong. Try it again.\e[0m";
	}
}

void 					searchCmd(Contact contacts[8], const int index)
{
	int 				count;

	count = 0;
	while (count < index)
		contacts[count++].printList();
	if (count > 0)
		getNum(contacts, index);
	else
		std::cout << "\e[1;31mContact list is empty. You must add at least 1 contact.\e[0m";
	std::cin.clear();
}

int						main(void)
{
	Contact				contacts[8];
	std::string			str;
	int					i;

	i = 0;
	std::cout << "\e[1;33mHello!\e[0m ";
	std::cout << "\e[1;33mYou can use the next commands: ";
	std::cout << "ADD, SEARCH and EXIT.\e[0m" << std::endl;
	while (TRUE)
	{
		std::cout << "\e[1;32mEnter command:\e[0m ";
		std::getline(std::cin, str);
		if (str == "SEARCH")
		{
			searchCmd(contacts, i);
			std::cout << std::endl;
		}
		else if (str == "ADD")
			addCmd(contacts[i], i);
		else if (str == "EXIT")
			break ;
	}
	std::cout << "\e[1;33mBye!\e[0m" << std::endl;
	return (0);
}
