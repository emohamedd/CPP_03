/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:30:07 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 15:23:18 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("emmd");
    ClapTrap clap01("hassan");

    clap.attack("hassan");
    clap01.takeDamage(5);
    clap.beRepaired(5);

    clap01.attack("emmd");
    clap.takeDamage(5);
    clap01.beRepaired(5);
    return (0);
}