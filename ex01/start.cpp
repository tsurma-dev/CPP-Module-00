#include "PhoneBook.hpp"

int main(void) {
	PhoneBook	phonebook;
	std::string line;

	while (true) {
		std::getline(std::cin, line);
		if (!line.empty()) {
			if (line == "ADD")
				phonebook.ADD();
			if (line == "SEARCH")
				phonebook.SEARCH();
			if (line == "EXIT")
				return (0);
		}
	}

}
