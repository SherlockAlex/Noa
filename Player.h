#ifndef NOA_PLAYER_H
#define NOA_PLAYER_H

#include "Graphic.h"
/*��ɽ�ɫ��ص�*/

extern Sprite player;

/*�����ʼ������*/
extern void OnPlayerStart();

/*����ѭ������,ÿһ֡���ᱻ����*/
extern void OnPlayerLoop();

extern float GetJumpHeight();

/*������Ծ�з���True������False*/
extern bool GetJumpState();

extern void SetJumpState();

#endif // !NOA_PLAYER_H


