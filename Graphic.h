#ifndef NOA_GRAPHIC_H
#define NOA_GRAPHIC_H

//与图形相关的
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

//游戏窗口
extern SDL_Window* gameWindow;
//游戏渲染器
extern SDL_Renderer* gameRenderer;

//精灵结构体
typedef struct Sprite {
	SDL_Surface* surface;
	SDL_Texture* texture;

	/*渲染用的信息*/
	SDL_FRect  displayRect;
	
	/*图片的信息*/
	SDL_Rect  imageRect;
};

typedef struct SpriteNode {
	Sprite* root;
	SpriteNode* leftNode;
	SpriteNode* rightNode;
};

//用来对精灵初始化
extern Sprite CreateSprite(const char * imageName,SDL_FRect * dispRect,SDL_Rect * imgRect);

//绘制精灵
extern void DrawSprite(Sprite* sprite);

/*绘画出精灵数组*/
extern void DrawSprite(Sprite * sprites[]);

extern void DrawSprite(SpriteNode * spriteRoot);

extern void PreOrderSpriteTree(SpriteNode* spriteRoot);

//绘制像素点
extern void DrawPixel(int x, int y);

#endif // !NOA_GRAPHIC
