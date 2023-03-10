#ifndef NOA_PHYSICS_H
#define NOA_PHYSICS_H

/*游戏的物理模块*/

typedef struct Collider {

};

extern void ApplyGrivaty(float * y,bool on);

/*处理游戏中物体的碰撞*/
extern void OnColliderUpdate();

#endif // !NOA_PHYSICS_H
