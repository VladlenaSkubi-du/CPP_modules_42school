#include "includes.hpp"

PhoneBook::PhoneBook(const int capacity_custom) {

	capacity = capacity_custom;
	YourContact = new Contact[capacity];
	return ;
}

PhoneBook::~PhoneBook(void) {
	delete YourContact;
	return ;
}

// void PhoneBook::add_to_phonebook(void) {
// 	std::cout << "First name: ";
// }
