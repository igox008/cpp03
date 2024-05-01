/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 00:02:52 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/01 01:07:31 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hit_points;
		unsigned int	enrgy_points;
		unsigned int	attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap &CT);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &CT);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int	amount);
		void	beRepaired(unsigned int	amount);
};



#endif
