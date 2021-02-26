#ifndef PHONE_H
# define PHONE_H

# include <iostream>
# include <iomanip>

# define TRUE 1

class Contact
{
	public:
		Contact(Contact &contact, int index);
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

		void	newContact(Contact &contact);
};

#endif
