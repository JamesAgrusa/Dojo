#include "Monster.h"
#include "raymath.h"

Monster::Monster(Vector2 pos, Texture2D idle_texture)
{
    worldPos = pos;
    idle = idle_texture;
    width = texture.width / maxFrames;
    height = texture.height - 7;
    speed = 3.5f;
}

void Monster::tick(float deltaTime)
{
    if (!getAlive()) return; 

    velocity = Vector2Subtract(target->getScreenPos(), getScreenPos());
    if (Vector2Length(velocity) < radius) velocity = {};
    BaseHero::tick(deltaTime);

    if (CheckCollisionRecs(target->getCollisionRec(), getCollisionRec()))
    {
        target->takeDamage(damagePerSec * deltaTime);
    }
}

Vector2 Monster::getScreenPos()
{
    return Vector2Subtract(worldPos, target->getWorldPos());
}
