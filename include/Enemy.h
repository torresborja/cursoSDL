#ifndef ENEMY_H
#define ENEMY_H

#include <SDLGameObject.h>

// Enemy class
class Enemy : public SDLGameObject
{
    public:
        Enemy(const LoaderParams* pParams);
        virtual void draw();
        virtual void update();
        virtual void clean();
};

#endif // ENEMY_H
