/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:26:08 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/11 00:40:05 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &cure);
		~Cure();

		Cure&		operator=(const Cure &cure);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};


#endif
