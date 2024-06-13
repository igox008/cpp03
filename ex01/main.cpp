/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 01:04:39 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/02 11:20:59 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	// Testing ClapTrap
	{
		std::cout << "Testing ClapTrap:" << std::endl;
		ClapTrap clapTrap1("Clap1");
		ClapTrap clapTrap2(clapTrap1);
		ClapTrap clapTrap3 = clapTrap2;
		clapTrap1.attack("Target1");
		clapTrap2.takeDamage(5);
		clapTrap3.beRepaired(2);
	}
	// Testing ScavTrap
	{
		std::cout << "\nTesting ScavTrap:" << std::endl;
		ScavTrap scavTrap1("Scav1");
		ScavTrap scavTrap2(scavTrap1);
		ScavTrap scavTrap3 = scavTrap2;
		std::string target = "Target2";
		scavTrap1.attack(target);
		scavTrap2.takeDamage(15);
		scavTrap3.beRepaired(5);
		scavTrap1.guardGate();
	}

	return 0;
}