#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"

void gameEventDrawn(struct game_data* game)
{
    if (game->turns == 9 && game->win == 0) {
        game->win = 1;
        printf("You have DRAWN\n");
    }
}

