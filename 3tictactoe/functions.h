#include <stdio.h>
#include <stdlib.h>
#include <curses.h> //#include <conio.h>

//---
char square[10] = { 'o', 
        '1', '2', '3', 
        '4', '5', '6', 
        '7', '8', '9' 
    };

//---

/*******************************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
*******************************************************************/


void displayBoard()
{
    system("clear"); //system("cls");

    printf("\n\n\tTic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");

    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}


//---------------------


/***************************************
set the board with the correct character,
x or o in the correct spot in the array
****************************************/
void markBoard(char mark, int player)
{
    int choice = 0;

    while(choice == 0)
    {
        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        if(square[choice] == 'X' ||  square[choice] == 'O' || choice < 1 || choice > 9)
        {
            printf("Invalid move ");
            choice = 0;
        }

    }
    square[choice] = mark;


}

//-------------------

/*********************************************
FUNCTION TO RETURN GAME STATUS
 1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
 O GAME IS OVER AND NO RESULT
 **********************************************/
int checkForWin()
{


    for(int i = 1 ; i <= 7 ; i+=3) //check rows
    {
        if (square[i] == square[i+1] && square[i] == square[i+2]) { return 1;}
    }
    for(int i = 1 ; i <= 3 ; i++) //check columns
    {
        if (square[i] == square[i+3] && square[i] == square[i+6]) { return 1;}
    }

    //diagonals
    if ( (square[1] == square[5] && square[1] == square[9]) ||
         (square[3] == square[5] && square[3] == square[7]) 
       )
    { return 1; }

    //the game cannot finish if positions 2, 4, 5, 6, 8 are taken but no win has been flagged
    if(square[2] != '2' && 
       square[4] != '4' && square[5] != '5' && square[6] != '6' &&
       square[8] != '8' )
    { return 0; }

    return -1;



}