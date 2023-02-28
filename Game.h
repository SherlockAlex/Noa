#ifndef NOA_GAME_H
#define NOA_GAME_H

#include "Graphic.h"
#include <iostream>

using namespace std;

//游戏名称
extern const char* gameName;
//窗口高度
extern const int height;
//窗口宽度
extern const int width;

//游戏是否在运行
extern bool run;



//游戏主函数，游戏运行成共，但会0，否则非0
extern int GameMain();

#endif // !NOA_GAME_H

