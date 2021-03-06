#include "Enemy.h"
#include <SDL.h>

Enemy::Enemy(const LoaderParams* pParams) : SDLGameObject(pParams)
{
}

void Enemy::draw()
{
    SDLGameObject::draw(); // we now use SDLGameObject
}

void Enemy::update()
{
    m_x += 1;
    m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
}

void Enemy::clean()
{
}


