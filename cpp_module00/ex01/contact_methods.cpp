#include "phoneBook.hpp"

PhoneBookContact::PhoneBookContact(void) {
    this->ContactID = 0;
    this->FirstName = "";
    this->LastName = "";
    this->Nickname = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
}

PhoneBookContact::PhoneBookContact(short id, const std::string& fn, const std::string& sn, const std::string& nick,
			const std::string& phone, const std::string& secret) {
    ContactID = id;
    FirstName = fn;
    LastName = sn;
    Nickname = nick;
    PhoneNumber = phone;
    DarkestSecret = secret;
}

PhoneBookContact::~PhoneBookContact(void) { }

void    PhoneBookContact::display_while_search(void) {
    int field_room = 10;
    
    std::cout << ContactID << std::string(field_room - 1, ' ');
    std::cout << "|";
    if (FirstName.size() <= 10) {
        std::cout << FirstName << std::string(field_room - FirstName.size(), ' ');
    }
    else {
        std::cout << FirstName.substr(0, 9);
        std::cout << ".";
    }
    std::cout << "|";
    if (LastName.size() <= 10) {
        std::cout << LastName << std::string(field_room - LastName.size(), ' ');
    }
    else {
        std::cout << LastName.substr(0, 9);
        std::cout << ".";
    }
    std::cout << "|";
    if (Nickname.size() <= 10) {
        std::cout << Nickname << std::string(field_room - Nickname.size(), ' ');
    }
    else {
        std::cout << Nickname.substr(0, 9);
        std::cout << ".";
    }
    std::cout << "|" << std::endl;
    // std::cout << "First name is: " << FirstName << std::endl;
    // std::cout << "Last name is: " << LastName << std::endl;
    // std::cout << "Nickname is: " << Nickname << std::endl;
    std::cout << std::string(field_room * 4 + 4, '-') << std::endl;
}

