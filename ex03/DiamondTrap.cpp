/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:08:15 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 12:37:05 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap() , FragTrap(){ 
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->name = "DiamondTrap";
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
    
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_clap_name") , FragTrap(name + "_clap_name"){
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}
DiamondTrap::DiamondTrap(DiamondTrap const & diamond) : ScavTrap(diamond) , FragTrap(diamond){
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = diamond;
}
    
void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name is " << this->name << std::endl;
    std::cout << "DiamondTrap ClapTrap name is " << ClapTrap::name << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & diamond){
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    this->name = diamond.name;
    this->hitPoints = diamond.hitPoints;
    this->energyPoints = diamond.energyPoints;
    this->attackDamage = diamond.attackDamage;
    return *this;
}