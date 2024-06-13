/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:03:34 by alaassir          #+#    #+#             */
/*   Updated: 2024/06/12 17:01:37 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap // Virtual inheritance ensures that there is only one instance of the base class
{		
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap &_copy);
		virtual ~FragTrap();

		FragTrap	&operator=(const FragTrap &FT);
		
		virtual void	attack(const std::string &target);
		void	highFiveGuys(void);
};




#endif
