#include "includes.hpp"

char ft_toupper_cpp(const char sy) {
    if (sy <= 'z' && sy >= 'a')
        return sy - ('z' - 'Z');
    return sy;
}

std::string	megaphone_command(const std::string& raw_command) {
	if (!raw_command[0]) {
		return "";
	}
	std::string data(raw_command);
	size_t j = 0;
	while (j < raw_command.size()) {
		data[j] = ft_toupper_cpp(data[j]);
		j++;
	}
	return (data);
}

void add_new_contact(void) {
	std::cout << "adding" << std::endl;
}

void look_for_contact(void) {
	std::cout << "looking" << std::endl;
}

void wrong_command(void) {
	std::cout << "Please, enter \"ADD\", \"SEARCH\" or \"EXIT\"" << std::endl;
}

int main(void) {
	int input = 10;
	std::string command(6, '\0');

	while (1) {
		
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		command.assign(megaphone_command(command));
		PhoneBook	*phonebook = new PhoneBook(8);
		if (command.compare("ADD") == 0) {
			add_new_contact();
		}
		else if (command.compare("SEARCH") == 0) {
			look_for_contact();
		}
		else if (command.compare("EXIT") == 0 || !std::cin) {
			delete phonebook;
			break ;
		}
		else {
			wrong_command();
		}
		input--;
	}
	return 0;
}

//зачем вообще используется getline?