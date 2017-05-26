#include "FragTrap.hpp"

int main() {
	FragTrap jan("jan");
	jan.rangedAttack("Himself");
	jan.takeDamage(20);
	FragTrap victor = jan;
	victor.takeDamage(10);
	jan.meleeAttack("himself again");
	jan.takeDamage(20);
	jan.beRepaired(100);
	std::string koosie = "Koosie";
	jan.vaulthunter_dot_exe(koosie);
}
