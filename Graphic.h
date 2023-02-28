#ifndef NOA_GRAPHIC_H
#define NOA_GRAPHIC_H

//��ͼ����ص�
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

//����ṹ��
typedef struct Sprite {
	SDL_Surface* surface;
	SDL_Texture* Texture;

	/*��Ⱦ�õ���Ϣ*/
	SDL_FRect displayRect;
	
	/*ͼƬ����Ϣ*/
	SDL_Rect imageRect;
};

#endif // !NOA_GRAPHIC
