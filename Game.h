#ifndef NOA_GAME_H
#define NOA_GAME_H

#include "Graphic.h"
#include <iostream>

using namespace std;

//��Ϸ����
extern const char* gameName;
//���ڸ߶�
extern const int height;
//���ڿ��
extern const int width;

//��Ϸ�Ƿ�������
extern bool run;

//��Ϸ����
extern SDL_Window* gameWindow;
//��Ϸ��Ⱦ��
extern SDL_Renderer* gameRenderer;

//��Ϸ����������Ϸ���гɹ�������0�������0
extern int GameMain();

#endif // !NOA_GAME_H

