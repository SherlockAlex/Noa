#include "Physics.h"
#include "SDL2/SDL.h"

float startTime = 0;

void ApplyGrivaty(float* y, bool on)
{
	startTime = SDL_GetTicks();
	/*在on的情况下,完成物理重力的模拟*/
	if (!on) {
		return;
	}

	

}
