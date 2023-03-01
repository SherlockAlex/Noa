#define SDL_MAIN_HANDLED
#include "Game.h"
#include "Runtime.h"
#include "TestScene.h"

int main(int argc,char * argv) {
	
	/*对游戏场景进行注册*/
	SetSceneRuntime(OnTestSceneStart, OnTestSceneUpdate);

	return GameMain();
}