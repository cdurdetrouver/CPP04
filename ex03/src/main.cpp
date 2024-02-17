/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:41:02 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/17 17:33:56 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main(void)
{
	ICharacter		*me;
	ICharacter		*bob;
	IMateriaSource	*src;
	AMateria		*tmp;
	AMateria		*floor[42];

	me = new Character("me");
	bob = new Character("bob");
	src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	tmp = src->createMateria("fire");
	me->equip(tmp);

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	bob = me;

	floor[0] = ((Character *)me)->getItem(0);
	me->unequip(0);
	floor[1] = ((Character *)me)->getItem(1);
	me->unequip(1);

	delete floor[0];
	delete floor[1];
	delete src;
	delete bob;
	// delete bob;

	return 0;
}