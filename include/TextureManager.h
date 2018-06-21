#ifndef TEXTUREMANAGER_H
#define TEXTUREMANAGER_H
#include <iostream>
#include <map>
#include <SDL.h>

class TextureManager
{
    public:

        ~TextureManager();

        static TextureManager* Instance();

        bool load(std::string fileName,std::string id, SDL_Renderer* pRenderer);

        // draw
        void draw(std::string id, int x, int y, int width, int height, SDL_Renderer* pRenderer,
                  SDL_RendererFlip flip = SDL_FLIP_NONE);
        // drawframe
        void drawFrame(std::string id, int x, int y, int width, int height, int currentRow, int currentFrame,
                       SDL_Renderer* pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

    protected:

    private:
        TextureManager();

        static TextureManager* s_pInstance;
        std::map<std::string, SDL_Texture*> m_textureMap;
};

typedef TextureManager TheTextureManager;

#endif // TEXTUREMANAGER_H
