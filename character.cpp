#include <iostream>
using std::string;
//#include "weapon.hpp"

class Character{
    private:
        string Name;
        int Level;
        //Weapon weapon;

    public:
        Character(string name){
            Name = name;
            Level = 1;
        }

        void SetName(string name){
            Name = name;
        }

        string GetName(){
            return Name;
        }

        void SetLevel(int level){
            Level = level;
        }

        int GetLevel(){
            return Level;
        }

        void print_stats(){
            std::cout << "Player Status" << std::endl;
            std::cout << "\tNome: " << Name << std::endl;
            std::cout << "\tLevel: " << Level << std::endl;
        }

        void increase_level(){
            Level++;
        }
};

/*int main() {
    Character main_char = Character("Billy");
    main_char.print_stats();
    main_char.increase_level();
    main_char.print_stats();

}*/
