#include <iostream>

#include "Player.h"
#include "AssetManager.h"
#include "Physics.h"
#include "InputSystem.h"

using namespace std;

void CreatePlayer(const char* fileName, Sprite* player, int w, int h);
void UpdatePlayerPosition();

Sprite player;
SpriteNode playerNode;

bool isJump = false;
float jumpHeight = 50;

void OnPlayerStart()
{
	CreatePlayer(PLAYER, &player, 192, 256);

	/*��ʼ����ɫ�ڵ�*/
	playerNode.root = &player;
	playerNode.leftNode = NULL;
	playerNode.rightNode = NULL;

	AddToInputEvent(UpdatePlayerPosition);//��UpdatePlayerPosition�󶨵������¼���
}

void OnPlayerLoop()
{
	ApplyGrivaty(&player.displayRect.y, (player.displayRect.y < 300) && !GetJumpState());

	if (player.displayRect.y < (300 - GetJumpHeight())) {
		SetJumpState(false);
		//��Ծ����
	}

	if (GetJumpState())
	{
		player.displayRect.y -= GetJumpHeight();
	}
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

	cout << "���ƽ�ɫ�ɹ�" << endl;
}

void UpdatePlayerPosition() {
	/*ʵ�������ƶ�*/


	switch (inputEvent->key.keysym.sym)
	{
	case SDLK_RIGHT:
		player.displayRect.x += 10;
		break;
	case SDLK_LEFT:
		player.displayRect.x -= 10;
		break;
	case SDLK_UP:
		cout << "��Ծ" << endl;
		SetJumpState(true);
		break;
	default:
		break;
	}

}
