/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 05:16:49 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/07 11:21:40 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");

    clap.attack("target dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    //clap.guardGate(); // Error: 'class ClapTrap' has no member named 'guardGate'

    scav.attack("target dummy");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    return 0;
}