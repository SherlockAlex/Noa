#ifndef NOA_INPUTSYSTEM_H
#define NOA_INPUTSYSTEM_H

#include "SDL2/SDL.h"

/*���ģ����Ҫ������Ϸ�������¼�*/
extern SDL_Event* inputEvent;

extern void AddToInputEvent(void (*keyEvent)(void));

//����������������û�������
void OnInput(void);

#endif // !NOA_INPUTSYSTEM_H

