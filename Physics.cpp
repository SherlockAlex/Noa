#include "Physics.h"
#include "SDL2/SDL.h"

float startTime = 0;

void ApplyGrivaty(float* y, bool on)
{
	
	//��Ҫ��һ�����õ���ʱ��ģ�����ǰ��ʼ�����
	float value = *y;
	startTime = on ? (startTime + 3) : 0;
	value += 0.0025 * startTime * startTime;
	*y = value;

}

void OnCollidersUpdate(Collider* colliders)
{
	//������ײ��֮�����ײ����
	
}
