#include <bits/stdc++.h>
#include "game.hpp"

int x;
char mark = 'X';
int no1,no2;

char square[10] = {'0','1', '2', '3', '4', '5', '6','7', '8', '9' };

void dis_board()
{
    system("cls");
    std::cout<<"\n\n Tic Tac Toe game \n\n";
    std::cout<<"Player 1(X) Player 2(O)";

    std::cout<<"   |   |   "<<std::endl;
    std::cout<<square[1]<<" | "<<square[2]<<" | "<<square[3]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<square[4]<<" | "<<square[5]<<" | "<<square[6]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;
    std::cout<<square[7]<<" | "<<square[8]<<" | "<<square[9]<<std::endl;
    std::cout<<"___|___|___"<<std::endl;
    std::cout<<"   |   |   "<<std::endl;

}

bool checkfull(){
    for(int i=0; i< 10; i++){
        if(square[i] != 'X' || square[i]!='O'){
             
             return false;
        }
    }
    return true; 
}
char endMark;

int checkwin(){

    if(square[1] == square[2] == square[3]){
            return 1;
            endMark = square[1];
    }
    else if(square[4] == square[5] == square[6]){
            return 1;
            endMark = square[4];
    }
    else if(square[7] == square[8] == square[9]){
            return 1;
            endMark = square[7];
    }
    else if(square[1] == square[5] == square[9]){
            return 1;
            endMark = square[5];
    }
    else if(square[3] == square[5] == square[7]){
            return 1;
            endMark = square[3];
    }
    else {
        return -1;
    }
}

void dis_play(){
 
        if(play(x) == 2){
            std::cout<<"Player 1 wins";
            no1++;
        }
        else if(play(x) == -2){
            std::cout<<"Player 2 wins";
            no2++;
        }
        else{
            int iRand = 1 + rand() % 9;
            play(iRand);
        }
 

}

void dis_history(){
 
            std::cout<<"Player 1 wins : "<<no1<<"\n";
   
            std::cout<<"Player 2 wins : "<<no2;
 
}

void c_history(){
            no1=0;
            no2=0;
            std::cout<<"Player 1 score "<<no1<<"\n";
   
            std::cout<<"Player 2 score "<<no2;
 
}


int play(int x){

    bool has_winner = checkfull();


   int i;

    do{
        dis_board();
        if(x == 1 && square[1]=='1')
        {
            square[1]= mark;
        }
        else if(x == 2 && square[2]=='2')
        {
            square[2]= mark;
        }
        else if(x == 3 && square[3]=='3')
        {
            square[3]= mark;
        }
        else if(x == 4 && square[4]=='4')
        {
            square[4]= mark;
        }
        else if(x == 5 && square[5]=='5')
        {
            square[5]= mark;
        }
        else if(x == 6 && square[6]=='6')
        {
            square[6]= mark;
        }
        else if(x == 7 && square[7]=='7')
        {
            square[7]= mark;
        }
        else if(x == 8 && square[8]=='8')
        {
            square[8]= mark;
        }
        else if(x == 9 && square[9]=='9')
        {
            square[9]= mark;
        }

        if( checkfull() == 0 ){

             i = checkwin();
             if(i == 1 && endMark =='X'){
                return 2;
             }
             else if(i == 1 && endMark =='O'){
                return -2;
             }
        }
        
        
    }while(i==-1);//still playing

   
}

void menu(){
    std::cout<<"[1] New Game\n";
    std::cout<<"[2] view history\n";
    std::cout<<"[3] clear history\n";  
}









/*
bool haveTheSameValueAndNotEmpty(char x, char y, char z) {
    if(x == y && x == z && x != ' ') {
        return true;
    }
    return false;
}

int checkWinner(char board[3][3]) {
    //  2: X winner
    // -2: O winner
    //  0: Tie
    //  1: No winner

    // For rows
    for(int i = 0; i < 3; i++) {
        if(haveTheSameValueAndNotEmpty(board[i][0], board[i][1], board[i][2])) {
            return board[i][0] == 'X' ? 2 : -2;
        }
    }

    // For cols
    for(int i = 0; i < 3; i++) {
        if(haveTheSameValueAndNotEmpty(board[0][i], board[1][i], board[2][i])) {
            return board[0][i] == 'X' ? 2 : -2;
        }
    }
    
    // Diagonal 1
    if(haveTheSameValueAndNotEmpty(board[0][0], board[1][1], board[2][2])) {
        return board[0][0] == 'X' ? 2 : -2;
    }

    // Diagonal 2
    if(haveTheSameValueAndNotEmpty(board[2][0], board[1][1], board[0][2])) {
        return board[2][0] == 'X' ? 2 : -2;
    }

    // For Tie Case
    bool tie = true;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] == ' ') {
                tie = false;
            }
        }   
    }
    if(tie) return 0;

    // Else
    return 1;
}

void drowBoard(char board[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            std::cout << "| " << board[i][j] << " |";
        }   
        std::cout << "\n -------------- \n";
    }
}

*/

