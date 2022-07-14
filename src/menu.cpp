#include <iostream>

#include "../include/game.hpp"
#include "../include/input.hpp"
#include "../include/printMenu.hpp"

enum KEYS {
    w = 119,
    s = 115,
    enter = 10,
};

void menu() {
    cbreak();
    size_t counter = 1;
    size_t me = 0;
    size_t comp = 0;
    while (true) {
        int key = keypress();
        switch(key){
            case KEYS::s:{
                ++counter;
                if (counter == 4) {
                counter = 1;
                }   
                printMenu(counter);
                break;
            }
            case KEYS::w:{
                --counter;
                if (counter == 0){
                    counter = 3;
                }
                printMenu(counter);
                break;
            }
            case KEYS::enter:{
                game(counter);
                break;
            }
        }
    }
}
