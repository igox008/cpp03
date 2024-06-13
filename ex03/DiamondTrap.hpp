/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:01:07 by alaassir          #+#    #+#             */
/*   Updated: 2024/06/12 17:14:30 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public :
        DiamondTrap();
        DiamondTrap(std::string _name);
        DiamondTrap(const DiamondTrap &_copy);
        ~DiamondTrap();

        DiamondTrap &operator=(const DiamondTrap &DT);

        void	attack(const std::string &target);
        void    whoAmI();
};