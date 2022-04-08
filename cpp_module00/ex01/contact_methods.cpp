#include "includes.hpp"

Contact::Contact(void) {
    this->ContactID = 0;
    this->FirstName = "";
    this->LastName = "";
    this->Nickname = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
    return ;
}

Contact::Contact(int id, const std::string& fn, const std::string& sn, const std::string& nick,
			const std::string& phone, const std::string& secret) {
    this->ContactID = id;
    this->FirstName = fn;
    this->LastName = sn;
    this->Nickname = nick;
    this->PhoneNumber = phone;
    this->DarkestSecret = secret;
    return ;
}

Contact::~Contact(void) { return ; }

void    Contact::display_contact_id(void) {
    
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
    std::cout << std::string(field_room * 4 + 4, '-') << std::endl;
    return ;
}

void    Contact::display_contact_fully(void) {

    std::cout << "First name: " << FirstName << std::endl;
    std::cout << "Last name: " << LastName << std::endl;
    std::cout << "Nickname: " << Nickname << std::endl;
    std::cout << "Phone number: " << PhoneNumber << std::endl;
    std::cout << "Darkest secret: " << DarkestSecret << std::endl;
    return ;
}
