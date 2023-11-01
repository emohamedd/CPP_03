/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:03:02 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 08:55:30 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        DiamondTrap(DiamondTrap const & diamond);
        // void setter(std::string name);
        
        void whoAmI();
    private:
        std::string name;
};