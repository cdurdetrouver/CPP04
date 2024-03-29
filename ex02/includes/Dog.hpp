/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:07:20 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:53:24 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
	private:
		Brain*		brain;
	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog();

		Dog		&operator=(const Dog &dog);

		void	makeSound(void) const;
};

#endif