#include "Runtime.h"

void (*SceneStart)(void);
void (*SceneUpdate)(void);

void SetSceneRuntime(void (*startFunc)(void), void (*updateFunc)(void)) 
{
	SceneStart = startFunc;
	SceneUpdate = updateFunc;
}