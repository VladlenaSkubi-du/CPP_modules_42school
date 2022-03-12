#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#pragma once /* Защита от двойного подключения заголовочного файла */
#include <iostream>
#include <map>

class PhoneBook {
	public:
		void add_to_phonebook(const std::string&, const std::string&);
		std::string look_in_phonebook(const std::string&);
	// private:
	// 	std::map<int, std::string> names;
	// 	std::map<int, std::string> phones;
	// найти по id номер телефона
};


#endif
