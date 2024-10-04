/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 05:31:30 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 05:34:29 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name) { // Call base class constructor
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " has been created!" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " has been destroyed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
    : ClapTrap(other) { // Call base class copy constructor
    *this = other;
    std::cout << "FragTrap " << name << " has been copied!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); // Call base class assignment operator
    }
    std::cout << "FragTrap " << name << " has been assigned!" << std::endl;
    return *this;
}

void FragTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "FragTrap " << name << " powerfully attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}