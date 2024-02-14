/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:53:24 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/11 00:58:21 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("undefined")
{
	std::cout << "Default AMateria created with type: " << type << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	std::cout << "Creating AMateria with type: " << type << std::endl;
}

AMateria::AMateria(const AMateria &materia)
{
	std::cout << "Copying AMateria with type: " << materia.type << std::endl;
	*this = materia;
}

AMateria	&AMateria::operator=(const AMateria &materia)
{
	if (this != &materia)
	{
		std::cout << "Assigning AMateria with type: " << materia.type << std::endl;
		this->type = materia.type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "Deleting AMateria with type: " << this->type << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "Using AMateria of type: " << this->type << " on target: " << target.getName() << std::endl;
}
