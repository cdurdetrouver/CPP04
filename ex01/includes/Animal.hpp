/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:59:33 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:05:44 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal& animal);
		virtual ~Animal();

		Animal			&operator=(const Animal &animal);

		virtual	void	makeSound(void) const;
		std::string	getType(void) const;
};


#endif