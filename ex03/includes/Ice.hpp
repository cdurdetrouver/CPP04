/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 22:53:47 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/11 00:40:01 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice &ice);
		~Ice();

		Ice			&operator=(const Ice &ice);

		AMateria*	clone() const;
		void		use(ICharacter& target);
};


#endif
