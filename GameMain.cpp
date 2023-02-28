#include "Game.h"
#include "InputSystem.h"
#include "Start.h"
#include "Update.h"
#include "Runtime.h"

int frameStart = 0;

bool run = false;

int GameMain(void) {

	//������Ҫ�ȼ��س���

	if (SceneStart == NULL) {
		cout << "��ǰû���κγ���������" << endl;
		return -1;
	}

	if (Start()!=0) {
		cout << "��Ϸ��ʼ��ʧ��" << endl;
		return -1;
	}
	
	//�����ĳ�ʼ��
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

	//�ͷ���Ϸ��Դ
	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);

	cout << "�˳���Ϸ" << endl;
	return 0;

}