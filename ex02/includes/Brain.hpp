/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 15:01:35 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:11:19 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include "Brain.hpp"

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(const Brain& Brain);
		~Brain();

		Brain	&operator=(const Brain& Brain);
};

#endif