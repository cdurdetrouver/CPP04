/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 16:30:24 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 18:24:33 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{

}

Character::Character(const std::string name)
{
	this->name = name;
}

Character::Character(const Character &character)
{
	this->name = character.name;
}

Character::~Character()
{

}

Character	&Character::operator=(const Character &character)
{
	if (this != &character)
	{
		this->name = character.name;
		for (int i = 0; i < 4; i++)
		{
			this->items[i] = character.items[i];
		}
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->items[i] == NULL)
		{
			this->items[i] == m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	this->items[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	this->items[idx]->use(target);
}
