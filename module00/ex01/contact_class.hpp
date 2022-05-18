/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:39 by vheymans          #+#    #+#             */
/*   Updated: 2022/05/18 19:32:50 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class Contact
{
	public:
		Contact (void);
		~Contact (void);
		void set_contact(void);
		void get_contact(void);
		void get_secret(void);

	private:
		std::string	fname;
		std::string	lname;
		std::string	nname;
		std::string	ph_nbr;
		std::string	secret;
};

#endif