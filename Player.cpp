#include <iostream>

#include "Player.h"
#include "AssetManager.h"

using namespace std;

void CreatePlayer(const char* fileName, Sprite* player, int w, int h);

Sprite player;

bool isJump = false;
float jumpHeight = 50;

void OnPlayerStart()
{
	CreatePlayer(PLAYER, &player, 192, 256);
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

void SetJumpState(bool value)
{
	isJump = value;
}

void CreatePlayer(const char* fileName, Sprite* player, int w, int h) {
	SDL_FRect dispRect;

	dispRect.x = 0;
	dispRect.y = 0;
	dispRect.w = 48;
	dispRect.h = 64;

	SDL_Rect imgRect;

	imgRect.x = 0;
	imgRect.y = 0;
	imgRect.w = w;
	imgRect.h = h;

	player->surface = IMG_Load(fileName);
	player->texture = SDL_CreateTextureFromSurface(gameRenderer, player->surface);
	player->displayRect = dispRect;
	player->imageRect = imgRect;

	cout << "绘制角色成功" << endl;
}
