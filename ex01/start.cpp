#include "PhoneBook.hpp"

int main(void) {
  PhoneBook phonebook;
  std::string line;

  while (true) {
    std::cout << "Please enter a command (ADD, SEARCH, EXIT)" << std::endl;
    std::getline(std::cin, line);
    if (!line.empty()) {
      if (line == "ADD")
        phonebook.ADD();
      else if (line == "SEARCH")
        phonebook.SEARCH();
      else if (line == "EXIT")
        return (0);
    }
  }
}
