#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
	private:
		int			id;
		int			capacity;
		Contact		*YourContact;
	public:
		PhoneBook(const int capacity_custom);
		~PhoneBook(void);

		void	add_to_phonebook(int id, int capacity);
		// void	display_contact_by_id(short);
};

//геттеры и сеттеры

#endif
