/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaassir <alaassir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:09:10 by alaassir          #+#    #+#             */
/*   Updated: 2024/05/06 18:38:30 by alaassir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap "<< this->name << " Default constructor is called!\n";
	this->name = "Default";
	this->hit_points = 100;
	this->enrgy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(std::string _name)
{
	std::cout << "FragTrap "<< this->name << " parametrized constructor is called\n";
	this->name = _name;
	this->hit_points = 100;
	this->enrgy_points = 100;
	this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &_copy)
{
	*this = _copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &FT)
{
	this->name = FT.name;
	this->hit_points = FT.hit_points;
	this->enrgy_points = FT.enrgy_points;
	this->attack_damage = FT.attack_damage;
	std::cout << "FragTrap "<< this->name << " assignement operator is called" << std::endl;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (this->enrgy_points > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << \
		", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->enrgy_points--;
	}
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Give me some high fives, guys!\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap "<< this->name << " Destructor is called!\n";
}