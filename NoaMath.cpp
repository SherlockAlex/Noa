#include "NoaMath.h"

float noaSqrt(float x)
{
	float y = x;
	int i = *(int*)&y;
	i = 0x1fc00000 + (i >> 1);
	y = *(float*)&(i);
	y = 0.5 * (y + x *inv(y));
	return y;
}

float inv(float x)
{
	float y = x;
	int i = *(int*)&y;
	i = 0x7f000000 - i;
	y = *(float*)&i;
	y = y * (2 - x * y);
	return y;
}

float factorial(float x)
{
	if (x <= 1) {
		return 1;
	}

	float value = 1;

	for (int i = 1; i < x;i++) {
		value *= i;
	}

	return value;

	//return (x) * factorial(x-1);
}
