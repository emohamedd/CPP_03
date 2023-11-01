/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:02:30 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 12:21:18 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual protected ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap const & frag);
        
        void highFivesGuys();
};
#endif