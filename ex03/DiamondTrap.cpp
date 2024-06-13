/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:01:01 by alaassir          #+#    #+#             */
/*   Updated: 2024/06/12 17:17:22 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "Default";
	ClapTrap::name = "Default_clap_name";
	std::cout << "DiamondTrap "<< this->name << " Default constructor is called!\n";
	this->hit_points = FragTrap::hit_points;
	this->enrgy_points = ScavTrap::enrgy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(std::string _name)
{
	this->name = _name;
	ClapTrap::name = _name + "_clap_name";
	std::cout << "DiamondTrap "<< this->name << " parametrized constructor is called\n";
	this->hit_points = FragTrap::hit_points;
	this->enrgy_points = ScavTrap::enrgy_points;
	this->attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &_copy)
{
	*this = _copy;
	std::cout << "DiamondTrap "<< this->name << " copy constructor is called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap "<< this->name << " destructor is called\n";
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &DT)
{
	this->name = DT.name;
	this->hit_points = DT.hit_points;
	this->enrgy_points = DT.enrgy_points;
	this->attack_damage = DT.attack_damage;
	std::cout << "DiamondTrap "<< this->name << " assignement operator is called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::name << std::endl;
}