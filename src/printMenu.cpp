#include <iostream>

void printMenu(size_t counter) {
    switch(counter){
        
        case 1:{
            system("clear");
            std::cout<<"\033[1;31mSTONE\033[0m\n";
            std::cout<<"SCISSORS\n";
            std::cout<<"PAPER\n";
            break;
        }
        case 2:{
            system("clear");
            std::cout<<"STONE\n";
            std::cout<<"\033[1;31mSCISSORS\033[0m\n";
            std::cout<<"PAPER\n";
            break;
        }
        case 3:{
            system("clear");
            std::cout<<"STONE\n";
            std::cout<<"SCISSORS\n";
            std::cout<<"\033[1;31mPAPER\033[0m\n";
            break;
        }
    }
}
