#ifndef NOA_INPUTSYSTEM_H
#define NOA_INPUTSYSTEM_H

#include "SDL2/SDL.h"

/*这个模块主要负责游戏的输入事件*/
extern SDL_Event* inputEvent;

extern void AddToInputEvent(void (*keyEvent)(void));

//这个方法用来处理用户的输入
void OnInput(void);

#endif // !NOA_INPUTSYSTEM_H

