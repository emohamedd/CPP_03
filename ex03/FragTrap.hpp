/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:02:30 by emohamed          #+#    #+#             */
/*   Updated: 2023/11/01 16:56:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap(FragTrap const & frag);
        FragTrap & operator=(FragTrap const & frag);
        
        void highFivesGuys();
};
#endif