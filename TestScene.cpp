#include <iostream>

#include "TestScene.h"
#include "Game.h"
#include "AssetManager.h"
#include "NoaMath.h"

#include "InputSystem.h"
#include "Player.h"

using namespace std;

Sprite * sprites[100];

Sprite map;

void CreateMap(const char* fileName, Sprite* map, int w, int h);


void OnTestSceneStart()
{
	//��Ϸ������ʼ��
	cout << "TestScene loading" << endl;

	//��ʼ������
	OnPlayerStart();

	CreateMap(MAP,&map, 1920, 1080);
	
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

}

void OnTestSceneUpdate()
{
	//��Ϸ��������
	
	DrawSprite(sprites);

	OnPlayerLoop();
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

