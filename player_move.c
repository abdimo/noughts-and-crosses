#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"

void playerOneMove(struct game_data* game)
{
    int row, column;
    do{
        printf("You are 'Crosses'. Please input co-ordinates ...\n");
        if (scanf(" %d %d", &row, &column) != 2) {
        puts("Invalid input");
        exit(EXIT_FAILURE);
        }
        
        if (row < 1 || row > 3 || column < 1 || column > 3) {
        puts("Out of range input");
        exit(EXIT_FAILURE);
        }
    
    } while(game->grid[row - 1][column - 1] != ' ');
    
    game->grid[row - 1][column - 1] = 'X'; //Places player move
    printf("\nYour turn:\n\n");
}