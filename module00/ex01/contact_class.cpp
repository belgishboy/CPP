/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:17:55 by vheymans          #+#    #+#             */
/*   Updated: 2022/05/18 19:33:39 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"



Contact::Contact( void)
{
	std::cout << "Contact Constructor called" << std::endl;

	return ;
}

void Contact::set_contact(void)
{
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

void Contact::get_contact(void)
{
	std::cout << std::endl << "Contact's first name:" << std::endl;
	std::cout << Contact::fname;

	std::cout << std::endl << "Contact's last name:" << std::endl;
	std::cout << Contact::lname;

	std::cout << std::endl << "Contact's nickname:" << std::endl;
	std::cout << Contact::nname;

	std::cout << std::endl << "Contact's phone number:" << std::endl;
	std::cout << Contact::ph_nbr;

	return ;
}

void Contact::get_secret(void)
{
	std::cout << std::endl << "Contact's darkest secret:" << std::endl;
	std::cout << Contact::secret;

	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact Destructor called" << std::endl;

	return ;
}