/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbazart <gbazart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:50:10 by gbazart           #+#    #+#             */
/*   Updated: 2024/02/10 18:14:37 by gbazart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATREARIASOURCE_HPP
# define MATREARIASOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &MateriaSource);
		MateriaSource(const std::string name);
		~MateriaSource();

		MateriaSource			&operator=(const MateriaSource &MateriaSource);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif