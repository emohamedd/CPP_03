/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:30:07 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/31 13:51:04 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
int main()
{
    ClapTrap clap("amine");
    ScavTrap scav("hassan");
    clap.attack("hassan");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.attack("amine");
    clap.takeDamage(10);
    clap.beRepaired(10);
    scav.guardGate();
    return (0);
}