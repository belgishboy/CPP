/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact_class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:39 by vheymans          #+#    #+#             */
/*   Updated: 2022/07/05 17:08:18 by vheymans         ###   ########.fr       */
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
		void set_contact(int index);
		void get_contact(void);
		void get_secret(void);

	private:
		int			index;
		std::string	fname;
		std::string	lname;
		std::string	nname;
		std::string	ph_nbr;
		std::string	secret;
};

#endif
