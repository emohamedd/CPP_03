/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:11:03 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 12:36:05 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual protected ClapTrap{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap(ScavTrap const & scav);
        ScavTrap & operator=(ScavTrap const & scav);
        // void attack(std::string const & target);
        // void takeDamage(unsigned int amount);
        // void beRepaired(unsigned int amount);
        void guardGate();
        void attack(std::string const & target);
};

#endif