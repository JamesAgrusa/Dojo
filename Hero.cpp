#include "raymath.h"
#include "Hero.h"

Hero::Hero(int winWidth, int winHeight) :
windowWidth(winWidth),
windowHeight(winHeight)
{
    float width {};
    float height{};
    int maxFrames{6};
    width = texture.width / maxFrames;
    height = texture.height;
}

Vector2 Hero::getScreenPos()
{
    float width {};
    float height{};
    return Vector2{
        static_cast<float>(windowWidth) / 2.0f - scale * (0.5f * width),
        static_cast<float>(windowHeight) / 2.0f - scale * (0.5f * height)
    };
}

void Hero::tick(float deltaTime)
{
    worldPosLastFrame = worldPos;

    // update animation frame
    runningTime += deltaTime;
    if(runningTime >= updateTime)
    {
        frame++;
        runningTime = 0.f;
        if(frame > maxFrames)
        frame = 0;
    }

    if (Vector2Length(velocity) != 0.0)
    {
        worldPos = Vector2Add(worldPos, Vector2Scale(Vector2Normalize(velocity), speed));
        velocity.x < 0.f ? rightLeft = -1.f : rightLeft = 1.f;
        texture = run;
    }
    else
    {
        texture = idle;
    }
    
    
    // draw the character
    Rectangle source{frame * width, 0.f, rightLeft * width, height};
    Rectangle dest{getScreenPos().x, getScreenPos().y, scale * width, scale * height};
    DrawTexturePro(texture, source, dest, Vector2{}, 0.f, WHITE);
    

    if (IsKeyDown(KEY_A))
        velocity.x -= 1.0;
    if (IsKeyDown(KEY_D))
        velocity.x += 1.0;
    if (IsKeyDown(KEY_W))
        velocity.y -= 1.0;
    if (IsKeyDown(KEY_S))
        velocity.y += 1.0;
    Hero::tick(deltaTime);
}

void Hero::undoMovement()
{
    worldPos = worldPosLastFrame;
}
