#include <iostream>
#include "weapon.hpp"
#include "character.hpp"

int main() {
	Weapon arma = Weapon("9mm", 100);
	arma.weapon_status();

	Character main_char = Character("Billy");
	main_char.print_stats();
}