#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

// //these are going to be the game stats (could make this into a struct laeter but this is easier to use imo)
// #define TITLE 0
// #define PLAYING 1
// #define GAME_OVER 2

//Game values
#define DEBRIS_COUNT 4
#define ASTEROID_COUNT 2
#define PLAYER_WIDTH 16
#define PLAYER_HEIGHT 16
#define DEBRIS_WIDTH 8
#define DEBRIS_HEIGHT 8
#define ASTEROID_WIDTH 16
#define ASTEROID_HEIGHT 16

typedef struct Sprite{
    int row;
    int col;
    int rDel;
    int cDel;
    int width;
    int height;
    int active;
} Sprite;


void initializeGame(void);
void updateGame(void);
void drawStartScreen(void);
void drawGameScreen(void);
void drawWinScreen(void);
void drawLoseScreen(void);
int checkCollision(Sprite s1, Sprite s2);

#endif
