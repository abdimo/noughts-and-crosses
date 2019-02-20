#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"

void intro(void)
{

    printf("\nWelcome to NOUGHTS AND CROSSES\n\n");
    printf("The grid you will be playing on is 3x3 and your input will be "
           "determined by the co ordinates you put in, in the form 'row "
           "column'.\n\n");
    printf("For example an input of '1 1' will put a nought or a cross on the first row "
           "on the "
           "first column. Like so:\n\n");

    printf("    1   2   3  \n"
           "  +---+---+---+\n"
           "1 |1 1|   |   |\n"
           "  +---+---+---+\n"
           "2 |   |   |   |\n"
           "  +---+---+---|\n"
           "3 |   |   |   |\n"
           "  +---+---+---+\n"

           "\n");
}

void gameSetup(struct game_data* game)
{
    char answer;
    
    
    //Allow user to determine first player
    printf("Would you like to play first? y/n \n");
    answer = getchar();
       
    if (answer == 'y') {
        game->turn = 0; //Places player move
        printf("\nYou have chosen to go first\n");
    }
    else if (answer == 'n'){        
        game->turn = 1; //Places player move
        printf("\nYou have chosen to go second\n");
    }
    
    else{    
        puts("Invalid input");
        exit(EXIT_FAILURE);
       }
 
}