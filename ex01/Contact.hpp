/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:32:16 by tsurma            #+#    #+#             */
/*   Updated: 2024/07/31 16:50:29 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
		Contact(void);
		~Contact();
		int SetFirstName(std::string FirstName);
		int SetLastName(std::string LastName);
		int SetNickname(std::string Nickname);
		int SetPhoneNumber(std::string PhoneNumber);
		int SetDarkestSecret(std::string DarkestSecret);
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickname(void);
		std::string GetPhoneNumber(void);
		std::string GetDarkestSecret(void);
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	Nickname;
		std::string	PhoneNumber;
		std::string	DarkestSecret;
};
#endif
