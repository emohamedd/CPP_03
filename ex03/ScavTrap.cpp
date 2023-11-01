/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:34:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 06:50:08 by emohamed         ###   ########.fr       */
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
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & scav) : ClapTrap(scav){
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = scav;
}
ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const & target){
    std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    this->hitPoints -= this->attackDamage;
    int energy = this->energyPoints;
    this->energyPoints -= 1;
    std::cout << "ScavTrap " << this->name << " lose " << energy - this->energyPoints << " energy points" << std::endl;
    if (this->hitPoints <= 0 || this->energyPoints <= 0){
        std::cout << "ScavTrap " << this->name << " is dead" << std::endl;    
        return ;
    }
}