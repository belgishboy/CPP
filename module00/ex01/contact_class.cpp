/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:17:55 by vheymans          #+#    #+#             */
/*   Updated: 2022/07/05 17:14:14 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_bk.h"



Contact::Contact( void)
{
	return ;
}

void Contact::set_contact(int index)
{
	this->index = index;

	std::cout << std::endl << "Enter contact's first name:" << std::endl;
	std::cin >> this->fname;

	std::cout << std::endl << "Enter contact's last name:" << std::endl;
	std::cin >> this->lname;

	std::cout << std::endl << "Enter contact's nickname:" << std::endl;
	std::cin >> this->nname;

	std::cout << std::endl << "Enter contact's phone number:" << std::endl;
	std::cin >> this->ph_nbr;

	std::cout << std::endl << "Enter contact's darkest secret:" << std::endl;
	std::cin >> this->secret;

	return ;
}

void Contact::get_contact(void)
{
	std::cout << "|" << std::setw(10) << this->index << "|";
	
	if (this->fname.length() > 10)
		std::cout << this->fname.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->fname << "|";
		
	if (this->lname.length() > 10)
		std::cout << this->lname.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->lname << "|";
		
	if (this->nname.length() > 10)
		std::cout << this->nname.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << this->nname << "|";
	std::cout << std::endl;

	return ;
}

void Contact::get_secret(void)
{
	
	std::cout << std::endl << "Contact's first name:" << std::endl;
	std::cout << this->fname;

	std::cout << std::endl << "Contact's last name:" << std::endl;
	std::cout << this->lname;

	std::cout << std::endl << "Contact's nickname:" << std::endl;
	std::cout << this->nname;

	std::cout << std::endl << "Contact's phone number:" << std::endl;
	std::cout << this->ph_nbr;
	
	std::cout << std::endl << "Contact's darkest secret:" << std::endl;
	std::cout << this->secret;

	return ;
}

Contact::~Contact(void)
{
	return ;
}
