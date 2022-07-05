/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:54:25 by vheymans          #+#    #+#             */
/*   Updated: 2022/07/05 17:08:22 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"

void function(std::string input, Phonebook	*bk)
{
	if (input == "ADD")
		bk->add();
	if (input == "SEARCH")
		bk->search();
	if (input == "EXIT")
		bk->e = 0;
}

int main (void)
{
	Phonebook	bk;
	std::string	input;

	while (bk.e)
	{
		std::cout << std::endl << "Enter one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		std::cin >> input;
		function(input, &bk);
	}
	return (0);
}
