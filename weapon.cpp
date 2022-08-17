#include <iostream>
using std::string;

class Weapon {
private:
    string Name;
    int Ammu;

public:
    Weapon(string name, int ammu) {
        Name = name;
        Ammu = ammu;
    }

    void SetName(string name) {
        Name = name;
    }

    string GetName() {
        return Name;
    }

    void SetAmmul(int ammu) {
        Ammu = ammu;
    }

    int GetAmmu() {
        return Ammu;
    }

    void weapon_status() {
        std::cout << "Infos" << std::endl;
        std::cout << "\tWeapon: " << Name << std::endl;
        std::cout << "\tAmmunation: " << Ammu << std::endl;
    }

};
/*
int main() {
    Weapon arma = Weapon("9mm", 100);
    arma.weapon_status();

}
*/