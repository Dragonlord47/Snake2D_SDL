#include "Actor.h"
#include "TextureManager.h"

Actor::Actor(const char* textureSheet, int x, int y) {
	actorTexture = TextureManager::loadTexture(textureSheet);

	velocity.x = 1;
	velocity.y = 0;
	srcRect.h = 8;
	srcRect.w = 8;
	srcRect.x = 0;
	srcRect.y = 0;
	destRect.w = srcRect.w;
	destRect.h = srcRect.h;

	position.x = x;
	position.y = y;
	
}

Actor::~Actor()
{
	SDL_DestroyTexture(actorTexture);
}
