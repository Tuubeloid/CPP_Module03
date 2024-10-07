/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:34:50 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/07 15:21:41 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string _name;  // DiamondTrap's private name (distinct from ClapTrap's name)

public:
    // Constructor
    DiamondTrap(const std::string& name);

    // Destructor
    virtual ~DiamondTrap();

    // Copy constructor
    DiamondTrap(const DiamondTrap& other);

    // Assignment operator overload
    DiamondTrap& operator=(const DiamondTrap& other);

    // Overridden attack function from ScavTrap
    void attack(const std::string& target);

    // Special function unique to DiamondTrap
    void whoAmI();
};

#endif // DIAMONDTRAP_HPP