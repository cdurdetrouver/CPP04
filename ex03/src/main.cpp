/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:41:02 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:48:33 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

void subject()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

void	more_test(void)
{
	Character		*me;
	Character		*bob;
	MateriaSource	*src;
	AMateria		*floor[42] = {NULL};
	int j = 0;

	me = new Character("me");
	bob = new Character("bob");
	src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	me->equip(src->createMateria("ice"));

	me->equip(src->createMateria("cure"));

	me->equip(src->createMateria("fire"));

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	*(bob) = *(me);

	floor[j++] = me->getItem(0);
	me->unequip(0);
	floor[j++] = me->getItem(1);
	me->unequip(1);

	for (int i = 0; i < 42; i++)
		delete floor[i];
	delete src;
	delete bob;
	delete me;

}

int main(void)
{
	std::cout << "--------------------" << std::endl;
	std::cout << "MANDATORY TEST" << std::endl;
	subject();
	std::cout << "--------------------" << std::endl;
	std::cout << "PERSONNALIZE TEST" << std::endl;
	more_test();
}