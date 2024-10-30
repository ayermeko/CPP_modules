/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayermeko <ayermeko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 15:11:33 by ayermeko          #+#    #+#             */
/*   Updated: 2024/10/18 15:43:28 by ayermeko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    this->_name = "default";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap default constructer called!\n";
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << "ClapTrap parameterized constructer called!\n";
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    *this = src;
    std::cout << "Copy constucter called\n";
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "Copy assignment constucter called\n";
    if (this == &src)
        return (*this);    
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap(void) 
{
    std::cout << "ClapTrap destucter called\n";
}

void ClapTrap::attack(const std::string &target)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no hit points, therefore cannot attack!\n";
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no energy, therefore cannot attack!\n";
        return ; 
    }  
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!\n";
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " cannot take damage, it is already broken!\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " amount of damage and... ";
    if (amount >= (unsigned int)_hitPoints)
    {
        std::cout << "breaks\n";
        _hitPoints = 0;
    }
    else
    {
        std::cout << "survives and " << _hitPoints - amount << " hit points left!\n";
        _hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hitPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " is broken, therefore cannot be repaired!\n";
        return ;
    }
    if (_energyPoints <= 0)
    {
        std::cout << "ClapTrap " << _name << " has no enery, therefore cannot be repaired!\n";
        return ;
    }
    std::cout << "ClapTrap " << _name << " successfully repaired from " << _hitPoints << " to " << _hitPoints + amount << " health points.\n";
    _hitPoints += amount;
    this->_energyPoints--;
}
