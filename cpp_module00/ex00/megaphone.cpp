#include <iostream>
#include <ctype.h>
#include <cstring> 

char ft_toupper_cpp(const char sy) {
    if (sy <= 'z' && sy >= 'a')
        return sy - ('z' - 'Z');
    return sy;
}

void empty_message() {
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}

int main(int argc, const char * argv[]) {
	int empty = 0;
	
	if (argc < 2) {
		empty_message();
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		if (!argv[i] || !argv[i][0]) {
			empty++;
		}
		else {
			std::string data(argv[i]);
			size_t j = 0;
			size_t len = strlen(argv[i]);

			while (j < len) {
				data[j] = ft_toupper_cpp(data[j]);
				j++;
			}
			std::cout << data;
		}
	}
	if (empty == argc - 1) {
		empty_message();
	}
	else {
		std::cout << std::endl;
	}
	return 0;
}

// https://www.cplusplus.com/reference/string/string/
// #include <typeinfo>
// std::cout << typeid(j).name() << std::endl;