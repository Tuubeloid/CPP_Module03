/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:34:46 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/07 15:36:42 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
    hitPoints = FragTrap::hitPoints;      // from FragTrap
    energyPoints = ScavTrap::energyPoints; // from ScavTrap
    attackDamage = FragTrap::attackDamage; // from FragTrap
    std::cout << "DiamondTrap " << name << " has been created!" << std::endl;
}

// Destructor
DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << _name << " has been destroyed!" << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {
    std::cout << "DiamondTrap " << _name << " has been copied!" << std::endl;
}

// Assignment operator overload
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
        ScavTrap::operator=(other);
        FragTrap::operator=(other);
        this->_name = other._name;
    }
    std::cout << "DiamondTrap " << _name << " has been assigned!" << std::endl;
    return *this;
}

// Overridden attack function from ScavTrap
void DiamondTrap::attack(const std::string& target) {
    ScavTrap::attack(target);  // Use ScavTrap's attack method
}

// Special function to display the DiamondTrap's name and ClapTrap name
void DiamondTrap::whoAmI() {
    std::cout << "I am " << _name << ", and my ClapTrap name is " << ClapTrap::name << "!" << std::endl;
}