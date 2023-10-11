#ifndef BASE_HERO_H
#define BASE_HERO_H
#include "raylib.h"
#include "BaseHero.h"


class Hero
{
public:
Hero(int winWidth, int winHeight);
virtual void tick(float deltaTime) override;
virtual Vector2 getScreenPos() override;

private:
int windowWidth{};
int windowHeight{};

};

#endif