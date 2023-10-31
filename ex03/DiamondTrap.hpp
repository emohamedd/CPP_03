/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:03:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/31 20:06:26 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual ScavTrap, virtual FragTrap{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(DiamondTrap const & diamond);
        
        void whoAmI();
//         void attack(std::string const & target);
//         void takeDamage(unsigned int amount);
//         void beRepaired(unsigned int amount);
};