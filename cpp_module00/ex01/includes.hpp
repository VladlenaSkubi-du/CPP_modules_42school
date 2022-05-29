#ifndef INCLUDES_HPP
#define INCLUDES_HPP

#include <iostream>
#include <map>
#include <iomanip>
#include <ctime>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

int		validate_names(const std::string& name);
int		validate_number(const std::string& num);
int		validate_text(const std::string& text);

#endif