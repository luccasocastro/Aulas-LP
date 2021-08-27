#ifndef VELHA_H

typedef struct game{
    char board[3][3];
    char player1[3][3], player2[3][3];
}Game;

void mostraTabuleiro();
void startBoard(Game*);
int validateCharacter(char);
int validateCoordinate(int, int);
int emptyPosition(Game*, int, int);
int wonByTheLine(Game*);

#endif 