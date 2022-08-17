#include <iostream>
using std::string;

class Character {
private:
    string Name;
    int Level;

public:
    Character(string name);
    void SetName(string name);
    string GetName();
    void SetLevel(int level);
    int GetLevel();
    void print_stats();
    void increase_level();
};
