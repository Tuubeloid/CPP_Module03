/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 05:16:49 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/07 15:33:48 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    std::cout << "===== Creating DiamondTrap =====" << std::endl;
    DiamondTrap dt("Diamond");

    std::cout << "\n===== Testing attack =====" << std::endl;
    dt.attack("Target");

    std::cout << "\n===== Testing takeDamage =====" << std::endl;
    dt.takeDamage(30);

    std::cout << "\n===== Testing beRepaired =====" << std::endl;
    dt.beRepaired(20);

    std::cout << "\n===== Testing whoAmI =====" << std::endl;
    dt.whoAmI();

    std::cout << "\n===== Destroying DiamondTrap =====" << std::endl;
    return 0;
}