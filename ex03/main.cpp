/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:06:31 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/31 14:06:34 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    ClapTrap clap("amine");
    ScavTrap scav("hassan");
    FragTrap frag("hamza");
    clap.attack("hassan");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.attack("amine");
    frag.attack("amine");
    clap.beRepaired(10);
    scav.guardGate();
    frag.highFivesGuys();
    return (0);
}