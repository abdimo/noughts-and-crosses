#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"

void randomComputerMove(struct game_data* game)
{   
    int row, column;
    
    do {
        row = rand() % 3;
        column = rand() % 3;
    } while (game->grid[row][column] != ' ');

    printf("\nComputer turn:\n\n");
    game->grid[row][column] = 'O'; //Places computer move
    
}

