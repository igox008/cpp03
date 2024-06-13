/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 01:04:39 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/01 01:04:50 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("Second ClapTrap");
    ClapTrap claptrap3 = claptrap2;

    claptrap1.attack("Target 1");
    claptrap2.takeDamage(5);
    claptrap3.beRepaired(3);

    claptrap1 = claptrap3;

    claptrap2.attack("Target 2");
    claptrap3.takeDamage(8);
    claptrap1.beRepaired(2);

    ClapTrap claptrap4 = claptrap1;
    claptrap4.attack("Target 3");

    return 0;
}