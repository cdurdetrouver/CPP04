/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gabriel.bazart@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:41:02 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/11 01:05:44 by gbazart          ###   ########.fr       */
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
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	{
		std::cout << "---------------------------" << std::endl;
		Character *toto = new Character(*me);
		toto->unequip(3);
		toto->use(3, *bob);
		toto->use(0, *bob);
		// delete toto;
		std::cout << "---------------------------" << std::endl;
	}
	me->use(3, *bob);
	std::cout << "---------------------------" << std::endl;
	me->unequip(0);
	me->unequip(3);
	me->unequip(1);
	me->unequip(17);
	me->unequip(0);
	me->use(3, *bob);
	me->equip(tmp);
	me->use(0, *bob);

	delete bob;
	delete me;
	delete src;

	return 0;
}
