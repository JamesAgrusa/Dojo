#include "raymath.h"
#include "BaseHero.h"

BaseHero::BaseHero()
{

}

void BaseHero::tick(float deltaTime)
{
    worldPosLastFrame = worldPos;

   
    
    if (Vector2Length(direction) != 0.0)
        {
            // set mapPos = mapPos - direction
                                
            worldPos = Vector2Subtract(worldPos, Vector2Scale(Vector2Normalize(direction), speed));
            direction.x < 0.f ? rightLeft = 1.f : rightLeft = -1.f;
            soldier = soldier_walk;
        }
        else
        {
            frame++;
            runningTime = 0.f;
            if (frame > maxFrames) frame = 4;
            soldier = soldier_walk;
        }
        
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