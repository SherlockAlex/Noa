#include "InputSystem.h"
#include "Game.h"

SDL_Event* inputEvent = NULL;

void (*InputEvent[100]) (void);

void AddToInputEvent(void(*keyEvent)(void))
{
	int i = 0;
	while (InputEvent[i]!=NULL) {
		i++;
		if (i>=100) {
			cout << "事件列表已满" << endl;
			return;
		}
	}

	InputEvent[i] = keyEvent;

}

void InvokeInputEvent(void) {
	for (int i = 0; InputEvent[i] != NULL;i++) {
		InputEvent[i]();
	}
}

void OnInput(void)
{
	if (!SDL_PollEvent(inputEvent)) {
		return;
	}

	switch (inputEvent->type)
	{
	case SDL_QUIT:
		SDL_Quit();
		run = false;
		break;
	case SDL_KEYDOWN:
		InvokeInputEvent();
		break;
	default:
		break;
	}

}
