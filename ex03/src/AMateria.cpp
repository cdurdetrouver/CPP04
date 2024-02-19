/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:53:24 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:38:11 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("undefined")
{
	if (DEBUG)
		std::cout << "Default AMateria created with type: " << type << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	if (DEBUG)
		std::cout << "Creating AMateria with type: " << type << std::endl;
}

AMateria::AMateria(const AMateria &materia)
{
	if (DEBUG)
		std::cout << "Copying AMateria with type: " << materia.type << std::endl;
	*this = materia;
}

AMateria	&AMateria::operator=(const AMateria &materia)
{
	if (this != &materia)
	{
		if (DEBUG)
			std::cout << "Assigning AMateria with type: " << materia.type << std::endl;
		this->type = materia.type;
	}
	return (*this);
}

AMateria::~AMateria()
{	if (DEBUG)
		std::cout << "Deleting AMateria with type: " << this->type << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	if (DEBUG)
		std::cout << "Using AMateria of type: " << this->type << " on target: " << target.getName() << std::endl;
}
