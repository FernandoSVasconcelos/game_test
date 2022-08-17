#include <iostream>
using std::string;

class Weapon {
private:
    string Name;
    int Ammu;

public:
    Weapon(string name, int ammu);
    void SetName(string name);
    string GetName();
    void SetAmmul(int ammu);
    int GetAmmu();
    void weapon_status();
};