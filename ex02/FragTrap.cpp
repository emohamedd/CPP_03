/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:03:41 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 07:30:18 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ScavTrap(){
    std::cout << "FragTrap default constructor called" << std::endl;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name){
    std::cout << "FragTrap name constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & frag) : ScavTrap(frag){
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = frag;
}

void FragTrap::highFivesGuys(){
    std::cout << "FragTrap " << this->name << " wants to high five you" << std::endl;
}

Fragtrap& FragTrap::operator=(FragTrap const & frag){
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->name = frag.name;
    this->hitPoints = frag.hitPoints;
    this->energyPoints = frag.energyPoints;
    this->attackDamage = frag.attackDamage;
    return (*this);
}