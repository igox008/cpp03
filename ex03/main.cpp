/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 01:04:39 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/06 18:38:53 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Create ClapTrap instances
    ClapTrap clapTrapDefault;
    ClapTrap clapTrapParam("ParameterizedClapTrap");
    
    // Create FragTrap instances
    FragTrap fragTrapDefault;
    FragTrap fragTrapParam("ParameterizedFragTrap");

    // Create ScavTrap instances
    ScavTrap scavTrapDefault;
    ScavTrap scavTrapParam("ParameterizedScavTrap");

    // Test attacks
	clapTrapDefault.attack("Enemy1");
    clapTrapParam.attack("Enemy2");
    fragTrapDefault.attack("Enemy3");
    fragTrapParam.attack("Enemy4");
    scavTrapDefault.attack("Enemy5");
    scavTrapParam.attack("Enemy6");

    // Test high fives
    fragTrapDefault.highFiveGuys();
    fragTrapParam.highFiveGuys();

    // Test guarding gate
    scavTrapDefault.guardGate();
    scavTrapParam.guardGate();

    // Test take damage and repair
    clapTrapDefault.takeDamage(5);
    clapTrapDefault.beRepaired(2);

    fragTrapParam.takeDamage(40);
    fragTrapParam.beRepaired(30);

    scavTrapDefault.takeDamage(15);
    scavTrapDefault.beRepaired(10);

    return 0;
}