#ifndef NOA_GRAPHIC_H
#define NOA_GRAPHIC_H

//��ͼ����ص�
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

//��Ϸ����
extern SDL_Window* gameWindow;
//��Ϸ��Ⱦ��
extern SDL_Renderer* gameRenderer;

//����ṹ��
typedef struct Sprite {
	SDL_Surface* surface;
	SDL_Texture* texture;

	/*��Ⱦ�õ���Ϣ*/
	SDL_FRect * displayRect;
	
	/*ͼƬ����Ϣ*/
	SDL_Rect * imageRect;
};

//�����Ծ����ʼ��
extern void CreateSprite(const char * imageName, Sprite* sprite,SDL_FRect * dispRect,SDL_Rect * imgRect);

//���ƾ���
extern void DrawSprite(Sprite* sprite);

//�������ص�
extern void DrawPixel(int x, int y);

#endif // !NOA_GRAPHIC
