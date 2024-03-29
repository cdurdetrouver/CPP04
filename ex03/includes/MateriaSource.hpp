/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:50:10 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/19 13:39:35 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATREARIASOURCE_HPP
# define MATREARIASOURCE_HPP

#include "main.h"
#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*items[4];
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &MateriaSource);
		~MateriaSource();

		MateriaSource	&operator=(const MateriaSource &MateriaSource);
		void			learnMateria(AMateria *materia);
		AMateria*		createMateria(std::string const & type);
};

#endif
