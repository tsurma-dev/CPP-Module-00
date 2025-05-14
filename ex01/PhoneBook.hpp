#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook(void);
	~PhoneBook();
	void ADD(void);
	void SEARCH(void);
private:
	Contact contacts[8];
};



#endif
