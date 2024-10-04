/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 05:15:59 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 05:34:29 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);

    void attack(const std::string& target); // Override attack
    void guardGate(); // Unique function for ScavTrap
};

#endif // SCAVTRAP_HPP