/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:34:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 16:01:35 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->name = "hassan";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::~ScavTrap() {
    std::cout <<  "\033[33mScavTrap destructor called\033[0m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & scav) : ClapTrap(scav){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = scav;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode 🛡" << std::endl;
}

void ScavTrap::attack(std::string const& target)
{
    std::cout << "\033[32mScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage! 🔪\033[0m" << std::endl;
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
        std::cout << "\033[31mScavTrap " << this->name << " lose " << energy - this->energyPoints << " energy points ⚡\033[0m" << std::endl;
    }
}

ScavTrap & ScavTrap::operator=(ScavTrap const & scav){
    std::cout << "ScavTrap assignation operator called" << std::endl;
    // if (this != &scav)
    // {
        this->name = scav.name;
        this->hitPoints = scav.hitPoints;
        this->energyPoints = scav.energyPoints;
        this->attackDamage = scav.attackDamage;
    // }
    return *this;
}