#include "BaseHero.h"
#include "raymath.h"

BaseHero::BaseHero()
{

}

void BaseHero::tick(float deltaTime)
{
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

        runningTime += GetFrameTime();
        if (runningTime >= updateTime)
        {
            frame++;
            runningTime = 0.f;
            if (frame > maxFrames) frame = 0;
        }

        // Draw the character

        Rectangle source{frame * width, 0.f, rightLeft * width, height};
        Rectangle dest{getScreenPos().x, getScreenPos().y, 4.0f * width, 4.0f * height};
        DrawTexturePro(soldier, source, dest, Vector2{}, 0.f, WHITE);
}