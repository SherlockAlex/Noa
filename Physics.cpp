#include "Physics.h"
#include "SDL2/SDL.h"

float startTime = 0;

void ApplyGrivaty(float* y, bool on)
{
	
	//还要有一个设置掉落时间的，进来前开始掐秒表
	float value = *y;
	startTime = on ? (startTime + 3) : 0;
	value += 0.0025 * startTime * startTime;
	*y = value;

}

void OnCollidersUpdate(Collider* colliders)
{
	//处理碰撞体之间的碰撞问题
	
}
