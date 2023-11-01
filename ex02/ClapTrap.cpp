/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:52:41 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 15:37:55 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "\033[33mClapTrap default constructor called\033[0m" << std::endl;
    this->name = "emmd";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "\033[33mClapTrap constructor called\033[0m" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "\033[33mClapTrap destructor called\033[0m" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & clap)
{
    std::cout << "\033[33mClapTrap copy constructor called\033[0m" << std::endl;
    *this = clap;
}

void ClapTrap::attack(std::string const& target)
{
    std::cout << "\033[32mClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! 🔪\033[0m" << std::endl;
    // this->hitPoints -= this->attackDamage;
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        if (this->hitPoints <= 0)
            std::cout << "\033[31mNo hit points left ❌\033[0m" << std::endl;
        else
            std::cout << "\033[31mNo energy points left ❌\033[0m" << std::endl;
    }
    else
    {
        std::cout << this->name << " has " << this->hitPoints << " hit points ❤️" << std::endl;
        int energy = this->energyPoints;
        
        this->energyPoints -= 1;
        std::cout << "\033[31mClapTrap " << this->name << " lose " << energy - this->energyPoints << " energy points ⚡\033[0m" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "\033[31mClapTrap " << this->name << " takes " << amount << " points of damage! 💥\033[0m" << std::endl;
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        if (this->hitPoints <= 0)
            std::cout << "\033[31mNo hit points left ❌\033[0m" << std::endl;
        else
            std::cout << "\033[31mNo energy points left ❌\033[0m" << std::endl;
    }
    if (this->hitPoints > 0)
    {
        int hit = this->hitPoints;
        this->hitPoints -= amount;
        std::cout << "\033[31mClapTrap " << this->name << " lose " << hit - this->hitPoints << " hit points ❤️\033[0m" << std::endl;
        std::cout << this->name << " has " << this->hitPoints << " hit points ❤️" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "\033[34mClapTrap " << this->name << " is repaired for " << amount << " points of damage! 🛠️\033[0m" << std::endl;
    if (this->hitPoints <= 0 || this->energyPoints <= 0)
    {
        if (this->hitPoints <= 0)
            std::cout << "\033[31mNo hit points left ❌\033[0m" << std::endl;
        else
            std::cout << "\033[31mNo energy points left ❌\033[0m" << std::endl;
    }
    else
    {   
        int energy = this->energyPoints;
        this->energyPoints -= 1;
        std::cout << "\033[31mClapTrap " << this->name << " lose " << energy - this->energyPoints << " energy points ⚡\033[0m" << std::endl;
        int hit = this->hitPoints;
        this->hitPoints += amount;
        std::cout << "\033[34mClapTrap " << this->name << " gain " << this->hitPoints - hit << " hit points ❤️\033[0m" << std::endl;
    }
}

ClapTrap & ClapTrap::operator=(ClapTrap const & clap)
{
    std::cout << "\033[33mClapTrap assignation operator called\033[0m" << std::endl;
    this->name = clap.name;
    this->hitPoints = clap.hitPoints;
    this->energyPoints = clap.energyPoints;
    this->attackDamage = clap.attackDamage;
    return (*this);
}