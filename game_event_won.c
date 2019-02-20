#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"

char threeInARow(char grid[][3])
{
    for (int i = 0; i < 3; i++) {

        //Rows
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            return grid[i][0];
        }

        //Columns
        else if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]) {
            return grid[0][i];
        }
    }

    //Diagonals
    if ((grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) || (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0])) {
        return grid[1][1];
    }

    return ' ';
}

//------------------------------------------------------------------------------------
// Check if Game Won
//------------------------------------------------------------------------------------
void gameEventWon(struct game_data* game)
{
    switch (threeInARow(game->grid)) {
    case 'X':
        game->win = 1;
        printf("You have WON\n");
        break;
    case 'O':
        game->win = 1;
        printf("You have LOST\n");
        break;
    }
}