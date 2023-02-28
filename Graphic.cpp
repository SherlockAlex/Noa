#include <iostream>

#include "Graphic.h"

using namespace std;

void CreateSprite(const char * imageName, Sprite* sprite, SDL_FRect* dispRect, SDL_Rect* imgRect)
{
	sprite->surface = IMG_Load(imageName);
	if (sprite->surface == NULL) {
		cout << "¶ÁÈ¡Í¼Æ¬Ê§°Ü" << endl;
		return;
	}

	sprite->texture = SDL_CreateTextureFromSurface(gameRenderer,sprite->surface);
	if (sprite->texture) {
		cout << "µ¼ÈëÍ¼Æ¬Ê§°Ü" << endl;
		return;
	}

	sprite->displayRect = dispRect;
	sprite->imageRect = imgRect;

}

void DrawSprite(Sprite* sprite)
{
	SDL_RenderClear(gameRenderer);
	SDL_RenderCopyF(gameRenderer, sprite->texture, sprite->imageRect, sprite->displayRect);
	SDL_RenderPresent(gameRenderer);
}

void DrawPixel(int x, int y)
{
	SDL_SetRenderDrawColor(gameRenderer,255,255,255,255);
	SDL_RenderDrawPoint(gameRenderer, x, y);
	SDL_RenderPresent(gameRenderer);
}
