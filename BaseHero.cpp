#include "BaseHero.h"
#include "raymath.h"

BaseHero::BaseHero()
{

}

void BaseHero::undoMovement()
{
    worldPos = worldPosLastFrame;
}

Rectangle BaseHero::getCollisionRec()
{
    return Rectangle{
        getScreenPos().x,
        getScreenPos().y,
        width * scale,
        height * scale
    };
}

void BaseHero::tick(float deltaTime)
{
    worldPosLastFrame = worldPos;

    // update animation frame

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
        texture = idle;
        
    }
    else
    {
        frame++;
        runningTime = 0.f;
        if (frame > maxFrames) frame = 4;
        texture = idle;
    }
    velocity = {};  
    

    
     // Draw the character

    Rectangle source{frame * width, 0.f, rightLeft * width, height};
    Rectangle dest{getScreenPos().x, getScreenPos().y, 4.0f * width, 4.0f * height};
    DrawTexturePro(texture, source, dest, Vector2{}, 0.f, WHITE);

    
 
}