#include "TestScene.h"
#include "Game.h"
#include "AssetManager.h"
#include <iostream>

using namespace std;

Sprite * sprites[100];

Sprite CreateMap(const char * fileName,int w,int h);
Sprite CreatePlayer(const char* fileName,int w,int h);

void OnTestSceneStart()
{
	//游戏场景初始化
	cout << "TestScene loading" << endl;
	//创建图片，创建人物
	Sprite map = CreateMap(MAP, 1920, 1080);
	Sprite player = CreatePlayer(PLAYER, 192, 256);
	sprites[0] = &map;
	sprites[1] = &player;
}

void OnTestSceneUpdate()
{
	//游戏场景运行
	cout << "TestScene running" << endl;
	DrawSprite(sprites);
}

Sprite CreateMap(const char* fileName, int w, int h) {
	SDL_FRect dispRect;

	dispRect.x = 0;
	dispRect.y = 0;
	dispRect.w = w;
	dispRect.h = h;

	SDL_Rect imgRect;

	imgRect.x = 0;
	imgRect.y = 0;
	imgRect.w = w;
	imgRect.h = h;

	return CreateSprite(fileName, &dispRect, &imgRect);
}

Sprite CreatePlayer(const char* fileName, int w, int h) {
	SDL_FRect dispRect;

	dispRect.x = 0;
	dispRect.y = 0;
	dispRect.w = w;
	dispRect.h = h;

	SDL_Rect imgRect;

	imgRect.x = 0;
	imgRect.y = 0;
	imgRect.w = w;
	imgRect.h = h;

	return CreateSprite(fileName, &dispRect, &imgRect);
}