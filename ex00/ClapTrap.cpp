/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:52:41 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/30 09:04:34 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int ClapTrap::getHitPoints()
{
    return (this->hitPoints);
}

int ClapTrap::getAttackDamage()
{
    return (this->attackDamage);
}
int ClapTrap::getEnergyPoints()
{
    return (this->energyPoints);
}

void ClapTrap::setAttackDamage(int attack)
{
    this->attackDamage = attack;
}
void ClapTrap::setEnergyPoints(int energy)
{
    this->energyPoints  =  energy;
}
void ClapTrap::setHitPoints(int hit)
{
    this->hitPoints = hit;
}
void ClapTrap::setName(std::string name)
{
    this->name = name;
}