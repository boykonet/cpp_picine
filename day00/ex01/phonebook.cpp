#include "./phone.hpp"

void		searchList(Contact (&contacts)[8])
{
	int		i = 0;

	if (contacts[i].index > 0)
	{
		;
	}
}

int			main(void)
{
	Contact				contacts[8];
	std::string			str;
	const std::string	searchToken = "SEARCH";
	const std::string	addToken = "ADD";
	const std::string	exitToken = "EXIT";
	int					i;

	i = 0;
	while (TRUE)
	{
		std::cin >> str;
		if (str == searchToken)
		{
			searchList(contacts, i);
		}
		else if (str == addToken)
		{
			if (i == 7)
				std::cout << "Phonebook is full." << std::endl;
			else
			{
				Contact::Contact(Contact &(contacts[i]), i + 1);
				Contact::newContact(&(contacts[i++]));
			}
		}
		else if (str == exitToken)
			break ;
	}
}
