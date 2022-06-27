#include <stdio.h>
#include "functions.h"


int player;

int main()
{
    //printf("start\n");
    int gameStatus = -1;
    char mark;
    player = 2;

    //--------

    while(gameStatus == -1)
    {
        displayBoard();

        // change turns
        if(player == 1) { player = 2; }
        else { player = 1; }

        // set the correct character based on player turn
        mark = player == 1 ? 'X' : 'O';

        markBoard(mark, player);


        gameStatus = checkForWin();
   

    }

    displayBoard();

    if (gameStatus == 1) { printf("\aPlayer %d win\n", player); }
    else { printf("\aGame draw"); }

    //printf("end\n");

    return 0;




}



