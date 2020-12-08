
#ifndef GAME_H_
#define GAME_H_

#define BTN_A (1 << PIND2)
#define BTN_B (1 << PIND3)
#define BTN_LEFT (1 << PIND4)
#define BTN_DOWN (1 << PIND5)
#define BTN_UP (1 << PIND6)
#define BTN_RIGHT (1 << PIND7)

#define DETECT_CHANGE (BTN_A | BTN_B | BTN_UP | BTN_DOWN | BTN_LEFT | BTN_RIGHT)
#define MAX_SPRITES 100

#define ITEM_DEFAULT 0xFF
#define ITEM_APPLE 0x01

typedef struct GameState
{
	int playerX;
	int playerY;
	int score;
	uint8_t spriteIndex[MAX_SPRITES];
	uint8_t spriteX[MAX_SPRITES];
	uint8_t spriteY[MAX_SPRITES];
}GameState;

void initGameState(GameState *gc);
int updateGame(GameState *gc);

#endif /* GAME_H_ */