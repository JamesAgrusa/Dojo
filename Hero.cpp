#include "raylib.h"
#include "raymath.h"
#include "Hero.h"


void Hero::tick(float deltaTime)
{
    Vector2 direction{};
    if (IsKeyDown(KEY_A)) direction.x -= 1.0;
    if (IsKeyDown(KEY_D)) direction.x += 1.0;
    if (IsKeyDown(KEY_W)) direction.y -= 1.0;
    if (IsKeyDown(KEY_S)) direction.y += 1.0;
    if (Vector2Length(direction) != 0.0)
        {
            // set mapPos = mapPos - direction
                                
            mapPos = Vector2Subtract(mapPos, Vector2Scale(Vector2Normalize(direction), speed));
            direction.x < 0.f ? rightLeft = -1.f : rightLeft = 1.f;
            soldier = soldier_walk;
        }
        else
        {
            frame++;
            runningTime = 0.f;
            if (frame > maxFrames) frame = 4;
            soldier = soldier_walk;
        }

    Rectangle source{frame * (float)soldier.width/4.f, 0.f, rightLeft * (float)soldier.width/4.f, (float)soldier.height};
    Rectangle dest{soldierPos.x, soldierPos.y, 3.0f * (float)soldier.width/4.0f, 3.0f * (float)soldier.height};
    DrawTexturePro(soldier, source, dest, Vector2{}, 0.f, WHITE);

    Vector2 origin{};
    Vector2 offset{};
    float rotation{};
    if (rightLeft > 0.f)
    {
        origin = {axe.width * scale, axe.height  * scale};
        offset = {40.f, 60.f};
        offset.x = 25.f;
        offset.y = 75.f;
                                
        rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? 85.f : 60.f;
    }
    else
    {
        origin = {axe.width * scale, axe.height * scale};
        offset = {50.f, 100.f};
        offset.x = 40.f;
        offset.y = 50.f;
                                
        rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? -85.f : -60.f;
    }

        
    // draw the axe 

    Rectangle source1{0.f, 0.f, static_cast<float>(axe.width) * rightLeft, static_cast<float>(axe.height)};
    Rectangle dest1{soldierPos.x + offset.x, soldierPos.y + offset.y, axe.width * scale, axe.height * scale};
    DrawTexturePro(axe, source1, dest1, origin, rotation, WHITE);

}