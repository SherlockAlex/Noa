#include "Start.h"
#include "Game.h"
#include "Graphic.h"

SDL_Window* gameWindow = NULL;
SDL_Renderer* gameRenderer=NULL;

int Start(void)
{
	if(SDL_Init(SDL_INIT_EVERYTHING)!=0)
	{
		cout << "��ʼ��ʧ��" << endl;
		return -1;
	}

	gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height,SDL_WINDOW_SHOWN);
	if (gameWindow==NULL) {
		cout << "��������ʧ��" << endl;
		return -1;
	}
	gameRenderer = SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_PRESENTVSYNC);
	if (gameRenderer==NULL) {
		cout << "������Ⱦ��ʧ��" << endl;
		return -1;
	}
    return 0;
}
