#ifndef NOA_RUNTIME_H
#define NOA_RUNTIME_H

extern void (*SceneStart)(void);
extern void (*SceneUpdate)(void);

/*用来设置哪个场景将会被加载，传的是场景的startFunc和updateFunc*/
extern void SetSceneRuntime(void (*startFunc)(void),void (*updateFunc)(void));

#endif // !NOA_RUNTIME_H
