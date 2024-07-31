/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:39:38 by tsurma            #+#    #+#             */
/*   Updated: 2024/07/31 15:57:31 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
