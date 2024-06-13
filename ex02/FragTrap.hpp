/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:03:34 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/06 18:38:22 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{		
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap &_copy);
		~FragTrap();

		FragTrap	&operator=(const FragTrap &FT);
		
		void	attack(const std::string &target);
		void	highFiveGuys(void);
};




#endif
