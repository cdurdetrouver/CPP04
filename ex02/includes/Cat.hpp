/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:06:01 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 16:11:27 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*		brain;
	public:
		Cat(void);
		Cat(const Cat& cat);
		~Cat();

		Cat		&operator=(const Cat& cat);

		void	makeSound(void) const;
};

#endif