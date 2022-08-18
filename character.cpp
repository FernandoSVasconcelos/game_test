#include <iostream>
#include "character.hpp"
using std::string;


    Character::Character(string name){
        Name = name;
        Level = 1;
    }

    void Character::SetName(string name){
        Name = name;
    }

    string Character::GetName(){
        return Name;
    }

    void Character::SetLevel(int level){
        Level = level;
    }

    int Character::GetLevel(){
        return Level;
    }

    void Character::print_stats(){
        std::cout << "Player Status" << std::endl;
        std::cout << "\tNome: " << Name << std::endl;
        std::cout << "\tLevel: " << Level << std::endl;
    }

    void Character::increase_level(){
        Level++;
    }