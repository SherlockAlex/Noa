#include <iostream>

#include "Graphic.h"

using namespace std;

Sprite CreateSprite(const char * imageName, SDL_FRect* dispRect, SDL_Rect* imgRect)
{
	/*创建一个对象*/
	Sprite sprite;

	sprite.surface = IMG_Load(imageName);
	sprite.texture = SDL_CreateTextureFromSurface(gameRenderer,sprite.surface);
	sprite.displayRect = *dispRect;
	sprite.imageRect = *imgRect;

	return sprite;

}

void DrawSprite(Sprite* sprite)
{
	SDL_RenderClear(gameRenderer);
	SDL_RenderCopyF(gameRenderer, sprite->texture, &sprite->imageRect, &sprite->displayRect);
	SDL_RenderPresent(gameRenderer);
}

void DrawSprite(Sprite* sprites[])
{
	SDL_RenderClear(gameRenderer);
	for (int i = 0; sprites[i] != NULL;i++) {
		SDL_RenderCopyF(gameRenderer, sprites[i]->texture, &sprites[i]->imageRect,&sprites[i]->displayRect);
	}
	/*渲染出图片*/
	SDL_RenderPresent(gameRenderer);
	//cout << "渲染图片成功" << endl;
}

void DrawSprite(SpriteNode* spriteRoot)
{
	SDL_RenderClear(gameRenderer);
	PreOrderSpriteTree(spriteRoot);
	SDL_RenderPresent(gameRenderer);
	//cout << "渲染图片成功" << endl;
}

void PreOrderSpriteTree(SpriteNode* spriteRoot)
{
	//前序遍历
	if (spriteRoot==NULL) {
		return;
	}
	SDL_RenderCopyF(gameRenderer, spriteRoot->root->texture, &(spriteRoot->root->imageRect), &(spriteRoot->root->displayRect));
	PreOrderSpriteTree(spriteRoot->leftNode);
	PreOrderSpriteTree(spriteRoot->rightNode);
}

void DrawPixel(int x, int y)
{
	SDL_SetRenderDrawColor(gameRenderer,255,255,255,255);
	SDL_RenderDrawPoint(gameRenderer, x, y);
	SDL_RenderPresent(gameRenderer);
}
