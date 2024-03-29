/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:41:55 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:39:15 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include <iostream>
#include "main.h"
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(const AMateria &materia);
		virtual ~AMateria();

		AMateria			&operator=(const AMateria &materia);
		std::string const	&getType() const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif
