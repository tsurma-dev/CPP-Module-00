/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 12:02:31 by tsurma            #+#    #+#             */
/*   Updated: 2024/07/31 12:23:13 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int j = 1; argv[j]; ++j) {
		for (int i = 0; argv[j][i]; ++i) {
			if (islower(argv[j][i]) != 0)
				std::cout << char(toupper(argv[j][i]));
			else
				std::cout << argv[j][i];
		}
	}
	std::cout << std::endl;
	return (0);
}
