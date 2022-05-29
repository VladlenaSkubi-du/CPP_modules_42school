#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include "Contact.class.hpp"

class PhoneBook {
	private:
		int			id;
		int			capacity;
		Contact		*YourBook;
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add_to_phonebook();
		void	display_contact_for_search();
		// void	display_contact_by_id(short);
};

//геттеры и сеттеры

#endif
