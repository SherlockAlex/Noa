#include <iostream>

#include "Graphic.h"

using namespace std;

Sprite CreateSprite(const char * imageName, SDL_FRect* dispRect, SDL_Rect* imgRect)
{
	Sprite sprite;
	sprite.surface = IMG_Load(imageName);
	//if (sprite.surface == NULL) {
	//	cout << "∂¡»°Õº∆¨ ß∞‹" << endl;
	//	return;
	//}

	sprite.texture = SDL_CreateTextureFromSurface(gameRenderer,sprite.surface);
	//if (sprite.texture) {
	//	cout << "µº»ÎÕº∆¨ ß∞‹" << endl;
	//	return;
	//}

	sprite.displayRect = dispRect;
	sprite.imageRect = imgRect;
	return sprite;

}

void DrawSprite(Sprite* sprite)
{
	SDL_RenderClear(gameRenderer);
	SDL_RenderCopyF(gameRenderer, sprite->texture, sprite->imageRect, sprite->displayRect);
	SDL_RenderPresent(gameRenderer);
}

void DrawSprite(Sprite* sprites[])
{
	SDL_RenderClear(gameRenderer);
	for (int i = 0; sprites[i] != NULL;i++) {
		SDL_RenderCopyF(gameRenderer, sprites[i]->texture, sprites[i]->imageRect, sprites[i]->displayRect);
	}
	/*‰÷»æ≥ˆÕº∆¨*/
	SDL_RenderPresent(gameRenderer);
}

void DrawPixel(int x, int y)
{
	SDL_SetRenderDrawColor(gameRenderer,255,255,255,255);
	SDL_RenderDrawPoint(gameRenderer, x, y);
	SDL_RenderPresent(gameRenderer);
}
