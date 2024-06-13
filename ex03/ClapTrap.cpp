/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 00:30:07 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/02 11:13:29 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor is called" << std::endl;
	this->name = "Default";
	this->hit_points = 10;
	this->enrgy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(std::string _name)
{
	std::cout << "ClapTrap parametrized constructor is called" << std::endl;
	this->name = _name;
	this->hit_points = 10;
	this->enrgy_points = 10;
	this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &CT)
{
	std::cout << "ClapTrap "<< this->name << " copy constructor is called" << std::endl;
	*this = CT;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap "<< this->name << " destructor is called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &CT)
{
	std::cout << "ClapTrap "<< this->name << " assignement operator is called" << std::endl;
	this->name = CT.name;
	this->hit_points = CT.hit_points;
	this->enrgy_points = CT.enrgy_points;
	this->attack_damage = CT.attack_damage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->enrgy_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << \
		", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->enrgy_points--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < this->hit_points)
		this->enrgy_points -= amount;
	else if (this->enrgy_points > 0)
		this->enrgy_points = 0;
	else
		std::cout << this->name << " is already dead!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points == 0)
		std::cout << this->name << " is already dead! and cannot repair itself." << std::endl;
	else if (this->enrgy_points == 0)
		std::cout << this->name << " don't enough energy points to repaire itself." << std::endl;
	else if (this->hit_points + amount > 10)
		std::cout << this->name << " can't have more than 10 hit points." << std::endl;
	else
		this->hit_points += amount;
}
