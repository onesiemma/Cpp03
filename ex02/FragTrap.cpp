/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 23:31:51 by ombatkam          #+#    #+#             */
/*   Updated: 2026/02/06 14:17:39 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hPoints = 100;
    ePoints = 100;
    aDamage = 30;
    std::cout << "FragTrap Default constructor called !" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    hPoints = 100;
    ePoints = 100;
    aDamage = 30;
    std::cout << "FragTrap constructor called for " << name << " !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called !" << std::endl;
    *this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap: assignment operator" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called !" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (hPoints <= 0 || ePoints <= 0)
    {
        std::cout << "FragTrap " << name << " cannot attack !" << std::endl;
        return;
    }

    ePoints--;
    std::cout << "FragTrap " << name << " attacks " << target
              << ", causing " << aDamage << " damage !" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << name << " requests a high-fives ✋😄!" << std::endl;
}
