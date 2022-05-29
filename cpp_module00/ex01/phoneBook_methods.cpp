#include "includes.hpp"

PhoneBook::PhoneBook(void) {
	int		i = 0;

	this->id = 0;
	this->capacity = 8;
	while (i < this->capacity) {
		this->YourBook[i] = new Contact();
		i++;
	}
	this->YourBook[this->capacity];
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void PhoneBook::add_to_phonebook(void) {
	std::string fn;
	std::string ln;
	std::string nick;
	std::string phonenb;
	std::string secret;
	int			accepted;
	accepted = 0;
	while (accepted != 1) {
		std::cout << "First name: ";
		std::getline(std::cin, fn);
		if (validate_names(fn) == 1) {
			accepted = 1;
		}
		else {
			std::cout << "First name can consist of [a-z], [A-Z], [0-9] or [-_]" << std::endl;
		}
	}
	accepted = 0;
	while (accepted != 1) {
		std::cout << "Last name: ";
		std::getline(std::cin, ln);
		if (validate_names(ln) == 1) {
			accepted = 1;
		}
		else {
			std::cout << "Last name can consist of [a-z], [A-Z], [0-9] or [-_]" << std::endl;
		}
	}
	accepted = 0;
	while (accepted != 1) {
		std::cout << "Nickname: ";
		std::getline(std::cin, nick);
		if (validate_names(nick) == 1) {
			accepted = 1;
		}
		else {
			std::cout << "Nickname can consist of [a-z], [A-Z], [0-9] or [-_]" << std::endl;
		}
	}
	accepted = 0;
	while (accepted != 1) {
		std::cout << "Phone number: ";
		std::getline(std::cin, phonenb);
		if (validate_number(phonenb) == 1) {
			accepted = 1;
		}
		else {
			std::cout << "Phone nubmer can consist of [0-9] and start with +" << std::endl;
		}
	}
	accepted = 0;
	while (accepted != 1) {
		std::cout << "Darkest secret: ";
		std::getline(std::cin, secret);
		if (validate_text(secret) == 1) {
			accepted = 1;
		}
		else {
			std::cout << "Darkest secret can not be accepted" << std::endl;
		}
	}
	// this->YourBook[this->id](this->id, fn, ln, nick, phonenb, secret);
	return ;
}

void	PhoneBook::display_contact_for_search(void) {
	int	i = 0;
	while (i < capacity) {
		this->YourBook[i].display_contact_id();
		i++;
	}
	return ;
}
