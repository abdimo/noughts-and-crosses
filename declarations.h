
struct game_data {
    int win;          // Either 0 or 1.
    int turns;        // Ranges from 0 to 9(game end).
    int turn;         // Either 0 or 1 where 0 is human player
    char grid[3][3];  // Grid
};

void intro(void);                                    // Game intro
void gameSetup(struct game_data* game);              // Determines first player
void playerOneMove(struct game_data* game);          // Player one input
void randomComputerMove(struct game_data* game);     // Computer move
void drawUpdatedGrid(const struct game_data* game);  // Draw updated grid
void gameEventWon(struct game_data* game);           // Checks for winners
void gameEventDrawn(struct game_data* game);         // Checks for draws
char threeInARow(char grid[][3]);                    // Checks for three-in-a-row
