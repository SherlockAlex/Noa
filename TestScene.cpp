#include "TestScene.h"
#include "Game.h"
#include "AssetManager.h"
#include "NoaMath.h"
#include <iostream>

using namespace std;

Sprite * sprites[100];

void CreateMap(const char * fileName,Sprite * map,int w,int h);
void CreatePlayer(const char* fileName,Sprite * player,int w,int h);

Sprite map;
Sprite player;

void OnTestSceneStart()
{
	//游戏场景初始化
	cout << "TestScene loading" << endl;
	//创建图片，创建人物
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
	cout << factorial(5) << endl;

}

void OnTestSceneUpdate()
{
	//游戏场景运行
	
	//cout << "TestScene running" << endl;
	DrawSprite(sprites);

	player.displayRect.y += 1;
}

void CreateMap(const char* fileName, Sprite* map, int w, int h) {
	/*这段代码主要是绘制地图*/

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

	cout << "绘制地图成功" << endl;
	
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

	cout <<"绘制角色成功" << endl;
}