/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 05:31:15 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 05:34:29 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
    FragTrap(const std::string& name);
    ~FragTrap();
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);

    void attack(const std::string& target); // Override attack
    void highFivesGuys(); // Unique function for FragTrap
};

#endif // FRAGTRAP_HPP