#include "ClapTrap.hpp"

int main() {
    ClapTrap robot("CL4P-TP");

    robot.attack("target dummy");
    robot.takeDamage(5);
    robot.beRepaired(3);

    robot.attack("target dummy");
    robot.takeDamage(10);
    robot.beRepaired(5);

    return 0;
}