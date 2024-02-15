/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:41:02 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/15 16:16:41 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Character* me = new Character("me");
	AMateria* ice;
	AMateria* cure;
	ice	 = src->createMateria("ice");
	me->equip(ice);
	me->equip(ice);
	cure = src->createMateria("cure");
	me->equip(cure);
	me->equip(cure);
	me->equip(cure);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	Character *toto = new Character(*me);
	toto->unequip(3);
	toto->use(3, *bob);
	toto->use(0, *bob);
	delete toto;
	me->use(3, *bob);
	me->unequip(0);
	me->unequip(3);
	me->unequip(1);
	me->unequip(17);
	me->unequip(0);
	me->use(3, *bob);
	me->equip(cure);
	me->use(0, *bob);

	delete bob;
	delete me;
	delete src;
	delete cure;
	delete ice;

	return 0;
}
