#include <iostream>
#include <ctype.h>
#include <algorithm>

// using namespace std; // so that compiler uses standard library std, its namespaces BUT is forbidden in project

char ft_toupper_cpp(const char sy) {
    if (sy <= 'z' && sy >= 'a')
        return sy - ('z' - 'Z');
    return sy;
}

int main(int argc, const char * argv[]) {
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (int i = 1; i < argc; i++) {
		std::string data(argv[i]);
		std::transform(data.begin(), data.end(), data.begin(), ft_toupper_cpp);
		// std::transform(data.begin(), data.end(), data.begin(), [](unsigned char c) -> unsigned char { return std::toupper(c); });
		// std::transform(data.begin(), data.end(), data.begin(), toupper);
		std::cout << data;
	}
	std::cout << std::endl;
	return 0;
}