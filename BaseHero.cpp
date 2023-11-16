#include "BaseHero.h"
#include "raymath.h"

BaseHero::BaseHero()
{

}

void BaseHero::tick(float deltaTime)
{
    runningTime += deltaTime;
    if (runningTime >= updateTime)
    {
        frame++;
        runningTime = 0.f;
        if (frame > maxFrames)
            frame = 0;
    }

    if (Vector2Length(velocity) != 0.0)
    {                  
        worldPos = Vector2Subtract(worldPos, Vector2Scale(Vector2Normalize(velocity), speed));
        velocity.x < 0.f ? rightLeft = 1.f : rightLeft = -1.f;
        soldier = soldier_walk;
    }
    else
    {
        frame++;
        runningTime = 0.f;
        if (frame > maxFrames) frame = 4;
        soldier = soldier_walk;
    }
    velocity = {};   
}