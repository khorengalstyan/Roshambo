#include <iostream>
void game(size_t counter){
    size_t me = 0;
    size_t comp = 0;
    switch(counter){
        case 1:{
            srand(time(nullptr));
            size_t compDecision = rand() % 3 + 1;
            if (compDecision == 2) {
                ++me;
                std::cout<<"YOU WIN!!!\n";
            }
            else if (compDecision == 3){
                ++comp;
                std::cout<<"YOU LOSE!!!\n";
            }
            else{
                std::cout<<"TRY AGAIN\n";
            }
            break;
        }
        case 2:{
            srand(time(nullptr));
            size_t compDecision = rand() % 3 + 1;
            if (compDecision == 1) {
                ++comp;
                std::cout<<"YOU LOSE!!!\n";
            }
            else if (compDecision == 3){
                ++me;
                std::cout<<"YOU WIN!!!\n";
            }
            else{
                std::cout<<"TRY AGAIN\n";
            }
            break;
        }
        case 3:{
            srand(time(nullptr));
            size_t compDecision = rand() % 3 + 1;
            if (compDecision == 1) {
                ++me;
                std::cout<<"YOU WIN!!!\n";
            }
            else if (compDecision == 2){
                ++comp;
                std::cout<<"YOU LOSE!!!\n";
            }
            else{
                std::cout<<"TRY AGAIN\n";
            }
            break;
        }
    }
}

