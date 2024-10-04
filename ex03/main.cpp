/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvalimak <tvalimak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 05:16:49 by tvalimak          #+#    #+#             */
/*   Updated: 2024/10/04 05:34:29 by tvalimak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");
    FragTrap frag("FR4G-TP");

    clap.attack("target dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    scav.attack("target dummy");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();

    frag.attack("target dummy");
    frag.takeDamage(40);
    frag.beRepaired(20);
    frag.highFivesGuys();

    return 0;
}