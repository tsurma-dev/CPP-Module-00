/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:32:14 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/02 10:47:22 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor Called" << std::endl;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor Called" << std::endl;
}

void PhoneBook::ADD(void) {
	std::string	line;
	static int i = 0;
	Contact contact;

	while (true) {
		std::cout << "First name: ";
		std::getline(std::cin, line);
		if (contact.SetFirstName(line) == 0)
			break ;
	}
	while (true) {
		std::cout << "Last name: ";
		std::getline(std::cin, line);
		if (contact.SetLastName(line) == 0)
			break ;
	}
	while (true) {
		std::cout << "Nickname: ";
		std::getline(std::cin, line);
		if (contact.SetNickname(line) == 0)
			break ;
	}
	while (true) {
		std::cout << "Phone Number: ";
		std::getline(std::cin, line);
		if (contact.SetPhoneNumber(line) == 0)
			break ;
	}
	while (true) {
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, line);
		if (contact.SetDarkestSecret(line) == 0)
			break ;
	}
	this->contacts[i] = contact;
	if (++i == 8)
		i = 0;
}

void PhoneBook::SEARCH(void) {
	for (int i = 0; i < 8; ++i) {
		std::cout << std::setw(10) << i << "|";
		if (this->contacts[i].GetFirstName().length() > 10)
			std::cout << this->contacts[i].GetFirstName().substr(0, 9) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].GetFirstName() << "|";
		if (this->contacts[i].GetLastName().length() > 10)
			std::cout << this->contacts[i].GetLastName().substr(0, 8) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].GetLastName() << "|";
		if (this->contacts[i].GetNickname().length() > 10)
			std::cout << this->contacts[i].GetNickname().substr(0, 8) << ".|";
		else
			std::cout << std::setw(10) << this->contacts[i].GetNickname() << "|";
	std::cout << std::endl;
	}
	std::string	line;
	int i = -1;
	while (true) {
		std::cout << "Display index:";
		std::getline(std::cin, line);
		i = line[0] - 48;
		if (i <= 7 && i >= 0 && line.length() == 1) {
			break;
		}
		std::cout << "Please use a valid index as an input" << std::endl;
	}
	if (this->contacts[i].GetFirstName().empty() == true) {
		std::cout << "Contact is empty" << std::endl;
		return ;
	}
	std::cout << "First Name:\t" << this->contacts[i].GetFirstName() << "\n" << "Last Name:\t" << this->contacts[i].GetLastName() << "\n" << "Nickname:\t" << this->contacts[i].GetNickname() << "\n" << "Phone Number:\t" << this->contacts[i].GetPhoneNumber() << "\n" << "Darkest Secret:\t" << this->contacts[i].GetDarkestSecret() << std::endl;
}
