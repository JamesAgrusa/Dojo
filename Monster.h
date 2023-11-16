#include "raylib.h"
#include "BaseHero.h"
#include "Hero.h"

class Monster : public BaseHero
{
public:
    Monster(Vector2 pos, Texture2D idle_texture, Texture2D run_texture);
    virtual void tick (float deltaTime) override;
    virtual Vector2 getScreenPos() override;

private:
    Hero* target;
};