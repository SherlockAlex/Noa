#ifndef NOA_PLAYER_H
#define NOA_PLAYER_H

#include "Graphic.h"
/*完成角色相关的*/

extern Sprite player;

/*人物初始化内容*/
extern void OnPlayerStart();

/*人物循环内容,每一帧都会被调用*/
extern void OnPlayerLoop();

extern float GetJumpHeight();

/*正在跳跃中返回True，否则False*/
extern bool GetJumpState();

extern void SetJumpState();

#endif // !NOA_PLAYER_H


