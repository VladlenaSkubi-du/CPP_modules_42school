#include "phoneBook.hpp"

PhoneBook::PhoneBook(void) {
	short	i = 0;

	while (i < 8)
	{
		YourContact[i] = PhoneBookContact(); //создание через new или можно так?
		i++;
	}
}

// void PhoneBook::add_to_phonebook(void) {
// 	std::cout << "First name: ";
// }

short PhoneBook::print_phonebook_contacts(void) {
	short	i = 0;
	PhoneBookContact contacts;

	while (i < 8)
	{
		contacts = YourContact[i];
		contacts.display_while_search();
		i++;
	}
	return 1;
}

PhoneBook::~PhoneBook(void) { }