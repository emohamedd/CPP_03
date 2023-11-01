/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 08:41:28 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 07:28:17 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>


class  ClapTrap{
    protected:
        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
    public:
        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(ClapTrap const & clap);
        ClapTrap & operator=(ClapTrap const & clap);
        // int getHitPoints();
        // int getEnergyPoints();
        // int getAttackDamage();
        // void setName(std::string name);
        // void setHitPoints(int hit);
        // void setEnergyPoints(int energy);
        // void setAttackDamage(int attack);
        
};
#endif