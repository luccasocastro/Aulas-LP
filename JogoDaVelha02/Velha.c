#include "Velha.h"
#include <stdio.h>

void startBoard(Game *test){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            test->board[i][j] = 'a';
        }
    }
}

int validateCharacter(char a){
    if(a == 'x' || a == '0')
        return 1;
    else
        return 0;
}

int validateCoordinate(int x, int y){
    if(x >= 0 && x < 3)
        if(y >= 0 && y < 3)
            return 1;
    return 0;
}

int emptyPosition(Game* test, int x, int y){
    if(test->board[x][y] != 'x' && test->board[x][y] != '0')
        return 1;
    else
        return 0;
}

int wonByTheLine(Game* test){
    int i, j, cont = 0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(validateCharacter(test->board[i][j]) && test->board[i][j] == test->board[i][j+1])
                cont++;
        }
        if(cont == 3)
            return 1;
        cont = 1;
    }
    return 0;
}