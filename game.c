#include <avr/io.h>
#include <stdlib.h>
#include "game.h"

void initGameState(GameState *gc)
{
	// where the player starts.
	gc->playerX = 42;
	gc->playerY = 24;
	gc->score = 0;
	int i = 0;
	for(;i < MAX_SPRITES;i++)
	{
		gc->spriteIndex[i] = ITEM_DEFAULT;
	}
	for(i = 0;i < 2; i++)
	{
		gc->spriteIndex[i] = ITEM_APPLE;
		gc->spriteX[i] = (rand() % 60) + 4;
		gc->spriteY[i] = (rand() % 35) + 5;
	}
}

int updateGame(GameState *gc)
{
	char input = PIND;
	int needToUpdate = 0;
	if((input & BTN_UP) == 0)
	{
		gc->playerY -= 1;
		needToUpdate = 1;
	}
	else if((input & BTN_LEFT) == 0)
	{
		gc->playerX -= 1;
		needToUpdate = 1;
	}
	else if((input & BTN_DOWN) == 0)
	{
		gc->playerY += 1;
		needToUpdate = 1;
	}
	else if((input & BTN_RIGHT) == 0)
	{
		gc->playerX += 1;
		needToUpdate = 1;
	}
	
	// block on edge.
	if(gc->playerX <= 2) gc->playerX = 2;
	if(gc->playerX >= 82) gc->playerX = 82;
	if(gc->playerY <= 6) gc->playerY = 6;
	if(gc->playerY >= 46) gc->playerY = 46;
	
	return needToUpdate;
}
