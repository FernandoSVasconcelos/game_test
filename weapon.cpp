#include <iostream>
#include "weapon.hpp"
using std::string;


Weapon::Weapon(string name, int ammu) {
    Name = name;
    Ammu = ammu;
    weapon_power();
}

void Weapon::SetName(string name) {
    Name = name;
    weapon_power();
}

string Weapon::GetName() {
    return Name;
}

void Weapon::SetAmmu(int ammu) {
    Ammu = ammu;
}

int Weapon::GetAmmu() {
    return Ammu;
}

void Weapon::SetPower(float power) {
    Power = power;
}

float Weapon::GetPower() {
    return Power;
}

void Weapon::weapon_status() {
    std::cout << "Infos" << std::endl;
    std::cout << "\tWeapon: " << Name << std::endl;
    std::cout << "\tAmmunation: " << Ammu << std::endl;
    std::cout << "\tPower: " << Power << std::endl;
}

void Weapon::weapon_power(){
    if(Name == "9mm"){
        Power = 3.0;
    }
    else if (Name == "Shotgun")
    {
        Power = 7.0;
    }
    
}