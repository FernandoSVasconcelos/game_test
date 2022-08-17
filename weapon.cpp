#include <iostream>
#include "weapon.hpp"
using std::string;


Weapon::Weapon(string name, int ammu) {
    Name = name;
    Ammu = ammu;
}

void Weapon::SetName(string name) {
    Name = name;
}

string Weapon::GetName() {
    return Name;
}

void Weapon::SetAmmul(int ammu) {
    Ammu = ammu;
}

int Weapon::GetAmmu() {
    return Ammu;
}

void Weapon::weapon_status() {
    std::cout << "Infos" << std::endl;
    std::cout << "\tWeapon: " << Name << std::endl;
    std::cout << "\tAmmunation: " << Ammu << std::endl;
}

/*
int main() {
    Weapon arma = Weapon("9mm", 100);
    arma.weapon_status();

}
*/