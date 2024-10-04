/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 05:16:25 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 05:18:15 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name) { // Call base class constructor
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap " << name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << name << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other) { // Call base class copy constructor
    *this = other;
    std::cout << "ScavTrap " << name << " has been copied!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); // Call base class assignment operator
    }
    std::cout << "ScavTrap " << name << " has been assigned!" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "ScavTrap " << name << " ferociously attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode!" << std::endl;
}