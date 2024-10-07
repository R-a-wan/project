#include<iostream>
#include <stdlib.h>
#include "game.hpp"


int main() {
    
    menu();

    int option;

    std::cin>>option;
 

    if(option == 1){
        dis_board();
    
        int y;
        std::cout<<"Enter the position: \n";
        std::cin>>y;
        play(y);
    }
    else if(option == 2){
        dis_history();
    }
    else if(option == 3){
        c_history();
    }
        
    return 0;
}
