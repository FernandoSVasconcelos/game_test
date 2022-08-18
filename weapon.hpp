#include <iostream>
using std::string;

class Weapon {
private:
    string Name;
    int Ammu;
    float Power;

public:
    Weapon(string name, int ammu);
    void SetName(string name);
    string GetName();
    void SetAmmu(int ammu);
    int GetAmmu();
    void SetPower(float power);
    float GetPower();
    void weapon_status();
    void weapon_power();
};