#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"

void drawUpdatedGrid(const struct game_data* game)
{

    printf(

        "+---+---+---+\n"
        "| %c | %c | %c |\n"
        "+---+---+---+\n"
        "| %c | %c | %c |\n"
        "----+---+---|\n"
        "| %c | %c | %c |\n"
        "+---+---+---+\n"
        "\n",

        game->grid[0][0], game->grid[0][1], game->grid[0][2],
        game->grid[1][0], game->grid[1][1], game->grid[1][2],
        game->grid[2][0], game->grid[2][1], game->grid[2][2]);
}