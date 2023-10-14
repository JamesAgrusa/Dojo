#ifndef HERO_H
#define HERO_H

#include "raylib.h"
#include "BaseHero.h"

class Character : public BaseCharacter
{
public:
    Character(int winWidth, int winHeight);
    virtual void tick(float deltaTime) override;
    virtual Vector2 getScreenPos() override;
    Rectangle getWeaponCollisionRec() { return weaponCollisionRec; }
    float getHealth() const { return health; }
    void takeDamage(float damage);
private:
    int windowWidth{1000};
    int windowHeight{1000};
    Texture2D weapon{LoadTexture("characters/Sprite.png")};
    Rectangle weaponCollisionRec{};
    float health{1000.f};
};

#endif
