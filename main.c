/*

 ____   ____  __ __  ____ |  |___/  |_  ______  /  _ \    ___________  ____  ______ ______ ____   ______
 /    \ /  _ \|  |  \/ ___\|  |  \   __\/  ___/  >  _ </\_/ ___\_  __ \/  _ \/  ___//  ___// __ \ /  ___/
|   |  (  <_> )  |  / /_/  >   Y  \  |  \___ \  /  <_\ \/\  \___|  | \(  <_> )___ \ \___ \\  ___/ \___ \ 
|___|  /\____/|____/\___  /|___|  /__| /____  > \_____\ \ \___  >__|   \____/____  >____  >\___  >____  >
     \/            /_____/      \/          \/         \/     \/                 \/     \/     \/     \/ 

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "declarations.h"

//------------------------------------------------------------------------------------
// Main Loop
//------------------------------------------------------------------------------------
int main(void)
{
    //Initialises Random Number Generator
    srand((unsigned)time(0));

    // Initialising Game State Variables
    struct game_data game = {
        0,
        0,
        0,
        { { ' ', ' ', ' ' },
          { ' ', ' ', ' ' },
          { ' ', ' ', ' ' } }
    };

    intro();
    gameSetup(&game);

    while (game.win == 0) {

        if (game.turn == 0) {

            playerOneMove(&game);
            //RandomComputerMoveTwo(&game);

        }

        else {

            randomComputerMove(&game);

        }

        game.turns++;
        game.turn = !game.turn;

        drawUpdatedGrid(&game);

        gameEventWon(&game);
        gameEventDrawn(&game);
    }

    return 0;
}

