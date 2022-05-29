#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#pragma once /* Защита от двойного подключения заголовочного файла */
#include <iostream>
#include <map>
#include <iomanip>
#include <ctime>

class Contact {
	private:
		int			ContactID;
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string	PhoneNumber; 
		std::string	DarkestSecret;
	public:
		Contact(void);
		Contact(int id, const std::string& fn, const std::string& ln, const std::string& nick,
			const std::string& phone, const std::string& secret);
		~Contact(void);

		void	display_contact_id(void);
		void	display_contact_fully(void);
};

//геттеры и сеттеры

#endif
