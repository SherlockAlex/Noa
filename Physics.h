#ifndef NOA_PHYSICS_H
#define NOA_PHYSICS_H

/*游戏的物理模块*/

/*碰撞体，拥有该物体的上下左右信息*/
typedef struct Collider {
	/*分别对应上左下右*/
	/*
	* 检测两个碰撞体的位置坐标，判断上下左右在范围内是否拥有碰撞体，
	* 如果有的话，对应碰撞体之间的上下左右就打开
	* 这就要考虑场景碰撞体之间的存储结构
	*/
	float x, y;
	float horizontal,vertical;
	bool direction[4] = {false,false,false,false};
};

extern void ApplyGrivaty(float * y,bool on);

/*处理游戏中物体的碰撞检测*/
extern void OnCollidersUpdate(Collider * colliders);

#endif // !NOA_PHYSICS_H
