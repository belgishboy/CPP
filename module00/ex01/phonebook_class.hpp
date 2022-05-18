/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vheymans <vheymans@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:09:39 by vheymans          #+#    #+#             */
/*   Updated: 2022/05/18 19:36:21 by vheymans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "ph_bk.h"

class Phonebook
{
	public:
		Phonebook (void);
		~Phonebook (void);
		Contact book[8];
		int	index;
		int	e;
		void add(void);
		void search(void);
};

#endif