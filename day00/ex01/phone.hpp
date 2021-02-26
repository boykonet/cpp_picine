#ifndef PHONE_H
# define PHONE_H

# include <iostream>
# include <iomanip>

# define TRUE 1

class Contact
{
public:
	Contact();
	~Contact();
	std::string		firstName;
	std::string		lastName;
	std::string		nickname;
	std::string		login;
	std::string		postalAddress;
	std::string		email;
	std::string		phoneNumber;
	std::string		birthdayDate;
	std::string		favoriteMeal;
	std::string		underwearColor;
	std::string		darkestSecret;

	int		index;

//	static void	newContact(Contact &contact, const int index);
};

void 		addList(Contact &contact, const int index);
void		searchList(Contact (&contacts)[8]);

#endif
