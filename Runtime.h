#ifndef NOA_RUNTIME_H
#define NOA_RUNTIME_H

extern void (*SceneStart)(void);
extern void (*SceneUpdate)(void);

/*���������ĸ��������ᱻ���أ������ǳ�����startFunc��updateFunc*/
extern void SetSceneRuntime(void (*startFunc)(void),void (*updateFunc)(void));

#endif // !NOA_RUNTIME_H
