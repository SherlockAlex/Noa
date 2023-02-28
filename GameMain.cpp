#include "Game.h"
#include "InputSystem.h"
#include "Start.h"
#include "Update.h"
#include "Runtime.h"

int frameStart = 0;

bool run = false;

int GameMain(void) {

	//在这里要先加载场景

	if (SceneStart == NULL) {
		cout << "当前没有任何场景被加载" << endl;
		return -1;
	}

	if (Start()!=0) {
		cout << "游戏初始化失败" << endl;
		return -1;
	}
	
	//场景的初始化
	SceneStart();

	SDL_Event inputEvents;
	inputEvent = &inputEvents;
	run = true;

	while (run) {
		frameStart = SDL_GetTicks();
		OnInput();
		Update();
		SceneUpdate();
		if (SDL_GetTicks()-frameStart<8) {
			SDL_Delay(8 - (SDL_GetTicks() - frameStart));
		}
	}

	//释放游戏资源
	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);

	cout << "退出游戏" << endl;
	return 0;

}