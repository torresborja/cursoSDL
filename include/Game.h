#ifndef GAME_H
#define GAME_H

#include "SDL.h"
#include "TextureManager.h"
#include <SDLGameObject.h>
#include <Player.h>
#include <vector>

class Game
{
    public:
        ~Game();
        // simply set the running variable to true
        bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
        void render();
        void update();
        void handleEvents();
        void clean();
        // a function to access the private running variable
        bool running() { return m_bRunning; }
        SDL_Renderer* getRenderer() const { return m_pRenderer; }

        // create the public instance function
        static Game* Instance()
        {
            if(s_pInstance == 0)
            {
                s_pInstance = new Game();
                return s_pInstance;
            }
            return s_pInstance;
        }

    protected:

    private:
        bool m_bRunning;
        SDL_Window* m_pWindow;
        SDL_Renderer* m_pRenderer;

        std::vector<SDLGameObject*> m_gameObjects;

        int m_currentFrame;

        Game();
        // create the s_pInstance member variable
        static Game* s_pInstance;
        // create the typedef
        typedef Game TheGame;
};

#endif // GAME_H
