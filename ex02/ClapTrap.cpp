/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ombatkam <ombatkam@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:12:48 by ombatkam          #+#    #+#             */
/*   Updated: 2025/11/16 00:20:52 by ombatkam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Name"), hPoints(10), ePoints(10), aDamage(0)
{
    std::cout << "ClapTrap Default constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string nickname) : name(nickname), hPoints(10), ePoints(10), aDamage(0)
{
    std::cout << "ClapTrap constructor called for " << name << " !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    *this = other;
    std::cout << "ClapTrap Copy constructor called for " << name << " !"<< std::endl;
}

ClapTrap&   ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        name = other.name;
        hPoints = other.hPoints;
        ePoints = other.ePoints;
        aDamage = other.aDamage;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (ePoints <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy to be repaired !" << std::endl;
        return;
    }
    if (hPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot repair because it's destroyed !" << std::endl;
        return ;
    }
    hPoints += amount;
    ePoints--;
    std::cout << "ClapTrap " << name << " repairs itself and earn " << amount 
                << " hit points but also lose 1 energy point !" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (ePoints <= 0)
    {
        std::cout << "ClapTrap " << name << " has no energy to attack !" << std::endl;
        return;
    }
    if (hPoints <= 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack because it's destroyed !" << std::endl;
        return ;
    }
    this->hPoints -= aDamage;
    ePoints--;
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << aDamage 
                << " points of damage, and it also lose 1 energy point !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    hPoints -= amount;
    if (hPoints < 0)
        hPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount 
                << " points of damage and it has now " << hPoints << " !!" << std::endl;
}
