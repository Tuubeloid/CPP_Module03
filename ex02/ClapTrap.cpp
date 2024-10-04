/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 04:59:07 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 05:01:47 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " has been created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name << " has been destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
    : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "ClapTrap " << name << " has been copied!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    std::cout << "ClapTrap " << name << " has been assigned!" << std::endl;
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    hitPoints -= amount;
    if (hitPoints < 0) hitPoints = 0;
    std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! "
              << "Remaining hit points: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0 && hitPoints > 0) {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " repairs itself, regaining "
                  << amount << " hit points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has no energy or hit points left to repair itself!" << std::endl;
    }
}