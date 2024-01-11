#include "raylib.h"
#include "BaseHero.h"
#include "Hero.h"

class Monster : public BaseHero
{
public:
    Monster(Vector2 pos, Texture2D idle_texture);
    virtual void tick (float deltaTime) override;
    virtual Vector2 getScreenPos() override;
    void setTarget(Hero* hero) { target = hero; }

private:
    Hero* target;
    float damagePerSec{10.f};
    float radius{25.f};
};