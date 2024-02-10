/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:07:20 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 15:58:59 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog();

		Dog		&operator=(const Dog &dog);

		void	makeSound(void) const;
};

#endif