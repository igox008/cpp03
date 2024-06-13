/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 01:19:26 by alaassir          #+#    #+#             */
/*   Updated: 2024/06/12 16:44:17 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->name = "Default";
	std::cout << "ScavTrap "<< this->name << " Default constructor is called!\n";
	this->hit_points = 100;
	this->enrgy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(std::string _name)
{
	this->name = _name;
	std::cout << "ScavTrap "<< this->name << " parametrized constructor is called\n";
	this->hit_points = 100;
	this->enrgy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap "<< this->name << " Destructor is called!\n";
}

ScavTrap::ScavTrap(const ScavTrap &_copy)
{
	*this = _copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ST)
{
	this->name = ST.name;
	this->hit_points = ST.hit_points;
	this->enrgy_points = ST.enrgy_points;
	this->attack_damage = ST.attack_damage;
	std::cout << "ScavTrap "<< this->name << " assignement operator is called" << std::endl;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->enrgy_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target << \
		", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->enrgy_points--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode.\n";
}
