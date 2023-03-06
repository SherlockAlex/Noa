#include "Player.h"

void CreateMap(const char* fileName, Sprite* map, int w, int h);
void CreatePlayer(const char* fileName, Sprite* player, int w, int h);

Sprite player;

bool isJump = false;
float jumpHeight = 50;

void OnPlayerStart()
{
}

void OnPlayerLoop()
{
}

float GetJumpHeight()
{
	return jumpHeight;
}

bool GetJumpState()
{
	return isJump;
}

void SetJumpState()
{
}
