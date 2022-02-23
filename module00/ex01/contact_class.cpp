/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:17:55 by vheymans          #+#    #+#             */
/*   Updated: 2022/02/13 15:19:01 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"



Contact::Contact( void)
{
	std::cout << "Contact Constructor called" << std::endl;

	std::cout << std::endl << "Enter contact's first name:" << std::endl;
	std::cin >> Contact::fname;

	std::cout << std::endl << "Enter contact's last name:" << std::endl;
	std::cin >> Contact::lname;

	std::cout << std::endl << "Enter contact's nickname:" << std::endl;
	std::cin >> Contact::nname;

	std::cout << std::endl << "Enter contact's phone number:" << std::endl;
	std::cin >> Contact::ph_nbr;

	std::cout << std::endl << "Enter contact's darkest secret:" << std::endl;
	std::cin >> Contact::secret;

	return ;
}

Contact::~Contact( void )
{
	std::cout << "Contact Destructor called" << std::endl;

	return ;
}