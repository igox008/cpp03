/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 00:20:07 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/02 09:38:25 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap &_copy);
		~ScavTrap();

		ScavTrap	&operator=(const ScavTrap &ST);

		void	attack(std::string &traget);
		void	guardGate(void);
};



#endif
