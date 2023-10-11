#ifndef BASE_HERO_H
#define BASE_HERO_H

#include "raylib.h"
#include "BaseHero.h"


class Hero : public BaseHero
{
public:
Hero(int winWidth, int winHeight);
virtual void tick(float deltaTime);
virtual Vector2 getScreenPos();

private:
int windowWidth{};
int windowHeight{};

};

#endif