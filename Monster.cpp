#include "Monster.h"
#include "raymath.h"

Monster::Monster(Vector2 pos, Texture2D idle_texture, Texture2D run_texture)
{
    worldPos = pos;
    // texture = idle_texture;
    // idle = idle_texture;
    // run = run_texture;
    // width = texture.width / maxFrames;
    // height = texture.height;
    speed = 3.5f;
}

void Monster::tick(float deltaTime)
{
    BaseHero::tick(deltaTime);
}

Vector2 Monster::getScreenPos()
{
    return Vector2Subtract(worldPos, target->getWorldPos());
}
