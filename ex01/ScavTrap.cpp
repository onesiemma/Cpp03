/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 23:31:51 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/06 16:04:05 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    hPoints = 100;
    ePoints = 50;
    aDamage = 20;
    std::cout << "ScavTrap Default constructor called !" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    hPoints = 100;
    ePoints = 50;
    aDamage = 20;
    std::cout << "ScavTrap constructor called for " << name << " !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called !" << std::endl;
    *this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap: assignment operator" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return(*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called !" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (hPoints <= 0 || ePoints <= 0)
    {
        std::cout << "ScavTrap " << name << " cannot attack !" << std::endl;
        return;
    }

    ePoints--;
    std::cout << "ScavTrap " << name << " attacks " << target
              << ", causing " << aDamage << " damage !" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode !" << std::endl;
}
