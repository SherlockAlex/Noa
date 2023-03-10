#ifndef NOA_PHYSICS_H
#define NOA_PHYSICS_H

/*��Ϸ������ģ��*/

/*��ײ�壬ӵ�и����������������Ϣ*/
typedef struct Collider {
	/*�ֱ��Ӧ��������*/
	float x, y;
	float horizontal,vertical;
	bool direction[4] = {false,false,false,false};
};

extern void ApplyGrivaty(float * y,bool on);

/*������Ϸ���������ײ���*/
extern void OnCollidersUpdate(Collider * colliders);

#endif // !NOA_PHYSICS_H
