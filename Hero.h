#ifndef HERO_H
#define HERO_H

#include "raylib.h"
#include "BaseHero.h"

class Hero : public BaseHero
{
    public:
    Hero(int windowWidth, int windowHeight);
    virtual void tick(float deltaTime);
    virtual Vector2 getScreenPos();
    const int MaxFrames{4};
    // void undoMovement();
    
    private:
    int windowWidth{1100};
    int windowHeight{900};
    Texture2D axe{LoadTexture("Weapons/Lance2/Lance.png")};
};

#endif