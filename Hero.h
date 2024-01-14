#ifndef HERO_H
#define HERO_H

#include "raylib.h"
#include "BaseHero.h"

class Hero : public BaseHero
{
    public:
    Hero(int windowWidth, int windowHeight);
    virtual void tick(float deltaTime) override;
    virtual Vector2 getScreenPos() override;
    float getHealth() const { return health; }
    void takeDamage(float damage);
    Rectangle getWeaponCollisionRec() { return weaponCollisionRec; }

    protected:
    
    private:
    int windowWidth{1100};
    int windowHeight{1100};
    Texture2D axe{LoadTexture("Weapons/Lance2/Lance.png")};
    float health{10};
    Rectangle weaponCollisionRec{};
};

#endif