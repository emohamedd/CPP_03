/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:06:31 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 11:28:25 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    FragTrap frag("frag");
    ScavTrap scav("scav");
    DiamondTrap diamond("diamond");
    diamond.whoAmI();
    diamond.attack("target");
    diamond.guardGate();
    diamond.highFivesGuys();
    return 0;
}