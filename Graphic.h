#ifndef NOA_GRAPHIC_H
#define NOA_GRAPHIC_H

//与图形相关的
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

//精灵结构体
typedef struct Sprite {
	SDL_Surface* surface;
	SDL_Texture* Texture;

	/*渲染用的信息*/
	SDL_FRect displayRect;
	
	/*图片的信息*/
	SDL_Rect imageRect;
};

#endif // !NOA_GRAPHIC
