#ifndef NOA_PHYSICS_H
#define NOA_PHYSICS_H

/*游戏的物理模块*/

/*碰撞体，拥有该物体的上下左右信息*/
typedef struct Collider {
	bool direction[4] = {false,false,false,false};
};

extern void ApplyGrivaty(float * y,bool on);

/*处理游戏中物体的碰撞检测*/
extern void OnCollidersUpdate(Collider * colliders);

#endif // !NOA_PHYSICS_H
