/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 18:28:54 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 18:32:41 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "undefined";
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &materia)
{
	this->type = materia.type;
}

AMateria	&AMateria::operator=(const AMateria &materia)
{
	if (this != &materia)
	{
		this->type = materia.type;
	}
	return (*this);
}

AMateria::~AMateria()
{

}

std::string const	&AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
}