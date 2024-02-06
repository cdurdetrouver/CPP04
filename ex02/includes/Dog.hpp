/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:07:20 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/06 15:06:16 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain*		brain;
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog();

		void	operator=(const Dog &dog);

		void	makeSound(void) const;
};

#endif