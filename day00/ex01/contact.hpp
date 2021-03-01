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

	void			addNewContact(int ind);
	void			printList();
	void 			printContactData();

private:
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
	int				index;
};

void				addCmd(Contact &contacts, int &index);
void 				searchCmd(Contact contacts[8], const int i);
void				printToken(std::string token);

#endif
