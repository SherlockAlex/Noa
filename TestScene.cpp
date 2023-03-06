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
	//游戏场景初始化
	cout << "TestScene loading" << endl;

	//初始化人物
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
	//游戏场景运行
	
	DrawSprite(sprites);

	OnPlayerLoop();
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

