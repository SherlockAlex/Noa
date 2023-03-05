#include <iostream>

#include "TestScene.h"
#include "Game.h"
#include "AssetManager.h"
#include "NoaMath.h"
#include "Physics.h"
#include "InputSystem.h"

using namespace std;

Sprite * sprites[100];

void CreateMap(const char * fileName,Sprite * map,int w,int h);
void CreatePlayer(const char* fileName,Sprite * player,int w,int h);

Sprite map;
Sprite player;

bool isJump = false;
float jumpHeight = 50;


void UpdatePlayerPosition();

void OnTestSceneStart()
{
	//��Ϸ������ʼ��
	cout << "TestScene loading" << endl;
	//����ͼƬ����������
	CreateMap(MAP,&map, 1920, 1080);
	CreatePlayer(PLAYER,&player, 192, 256);
	sprites[0] = &map;
	sprites[1] = &player;

	cout << map.displayRect.x << endl;
	cout << map.displayRect.y << endl;
	cout << map.displayRect.w << endl;
	cout << map.displayRect.h << endl;

	cout << map.imageRect.x << endl;
	cout << map.imageRect.y << endl;
	cout << map.imageRect.w << endl;
	cout << map.imageRect.h << endl;

	cout << noaSqrt(2) << endl;
	cout << inv(4) << endl;
	//cout << factorial(5) << endl;

	/*�������ƶ��ĺ����󶨵������¼���*/
	AddToInputEvent(UpdatePlayerPosition);

}

void OnTestSceneUpdate()
{
	//��Ϸ��������
	
	//cout << "TestScene running" << endl;
	DrawSprite(sprites);

	ApplyGrivaty(&player.displayRect.y, (player.displayRect.y < 300)&&!isJump);

	if (player.displayRect.y<(300-jumpHeight)) {
		isJump = false;
		//��Ծ����
	}

	if (isJump)
	{
		player.displayRect.y -= jumpHeight;
	}

	//player.displayRect.y += 10;

}

void CreateMap(const char* fileName, Sprite* map, int w, int h) {
	/*��δ�����Ҫ�ǻ��Ƶ�ͼ*/

	SDL_FRect dispRect;

	dispRect.x = 0;
	dispRect.y = 0;
	dispRect.w = 980;
	dispRect.h = 480;

	SDL_Rect imgRect;

	imgRect.x = 0;
	imgRect.y = 0;
	imgRect.w = w;
	imgRect.h = h;

	//return CreateSprite(fileName, &dispRect, &imgRect);
	map->surface = IMG_Load(fileName);
	map->texture = SDL_CreateTextureFromSurface(gameRenderer,map->surface);
	map->displayRect = dispRect;
	map->imageRect = imgRect;

	cout << "���Ƶ�ͼ�ɹ�" << endl;
	
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

	cout <<"���ƽ�ɫ�ɹ�" << endl;
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
		cout << "��Ծ����" << endl;
		isJump = true;
		break;
	default:
		break;
	}

}