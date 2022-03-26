#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#pragma once /* Защита от двойного подключения заголовочного файла */
#include <iostream>
#include <map>
#include <iomanip>
#include <ctime>

class PhoneBookContact {
	private:
		short	ContactID;
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string	PhoneNumber; 
		std::string	DarkestSecret;
	public:
		PhoneBookContact(void);
		PhoneBookContact(short id, const std::string& fn, const std::string& sn, const std::string& nick,
			const std::string& phone, const std::string& secret);
		~PhoneBookContact(void);
		void		display_while_search(void);
		// int			add_contact(const std::string&, const std::string&);
		// void		display_contact_information(void);
};

class PhoneBook {
	private:
		PhoneBookContact	YourContact[8]; //оператор равно - обработка
	public:
		PhoneBook(void); //можно делать сколько угодно конструкторов
		~PhoneBook(void);
		short	print_phonebook_contacts(void);
		// void	add_to_phonebook(void);
		// void	display_contact_by_id(short);
};

//геттеры и сеттеры

#endif
