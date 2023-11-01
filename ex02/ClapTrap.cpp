/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:52:41 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 07:29:53 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->name = "emmd";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}
ClapTrap& ClapTrap::operator=(ClapTrap const & clap)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = clap.name;
    this->hitPoints = clap.hitPoints;
    this->energyPoints = clap.energyPoints;
    this->attackDamage = clap.attackDamage;
    return (*this);
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}
ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}
ClapTrap::ClapTrap(ClapTrap const & clap) 
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = clap;
}
void ClapTrap::attack(std::string const& target)
{
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->hitPoints -= this->attackDamage;
    int energy = this->energyPoints;
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " lose " << energy - this->energyPoints << " energy points" << std::endl;
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "No point Left" << std::endl;
        return;
    }
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "ClapTrap cant " << std::endl;
        return;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " is repaired for " << amount << " points of damage!" << std::endl;
    int energy = this->energyPoints;
    this->energyPoints -= 1;
    std::cout << "ClapTrap " << this->name << " lose " << energy - this->energyPoints << " energy points" << std::endl;
    int hit = this->hitPoints;
    this->hitPoints += amount;
    std::cout << "ClapTrap " << this->name << " gain " << this->hitPoints - hit << " hit points" << std::endl;
    if (this->hitPoints == 0 || this->energyPoints == 0)
    {
        std::cout << "No point Left" << std::endl;
        return;
    }
}