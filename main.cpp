#define SDL_MAIN_HANDLED
#include "Game.h"
#include "Runtime.h"
#include "TestScene.h"

int main(int argc,char * argv) {
	
	/*����Ϸ��������ע��*/
	SetSceneRuntime(OnTestSceneStart, OnTestSceneUpdate);

	return GameMain();
}