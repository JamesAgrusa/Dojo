#include "raylib.h"
#include "raymath.h"
#include "Hero.h"

Hero::Hero(int winWidth, int winHeight) :
windowWidth(winWidth),
windowHeight(winHeight)
{
    width = texture.width / maxFrames;
    height = texture.height;
}

Vector2 Hero::getScreenPos()
{
    return Vector2{
        static_cast<float>(windowWidth) / 2.0f - scale * (0.5f * width),
        static_cast<float>(windowHeight) / 2.0f - scale * (0.5f * height)
    };
}

void Hero::tick(float deltaTime)
{
    worldPosLastFrame = worldPos;

    Vector2 velocity{};
    if (IsKeyDown(KEY_A)) velocity.x -= 1.0;
    if (IsKeyDown(KEY_D)) velocity.x += 1.0;
    if (IsKeyDown(KEY_W)) velocity.y -= 1.0;
    if (IsKeyDown(KEY_S)) velocity.y += 1.0;
    
    if (Vector2Length(velocity) != 0.0)
        {
            // set mapPos = mapPos - velocity
                                
            worldPos = Vector2Subtract(worldPos, Vector2Scale(Vector2Normalize(velocity), speed));
            velocity.x < 0.f ? rightLeft = -1.f : rightLeft = 1.f;
            texture = soldier_walk;
        }
        else
        {
            frame++;
            runningTime = 0.f;
            if (frame > maxFrames) frame = 4;
            texture = soldier_walk;
        }
        velocity = {};

    // Draw the character

    Rectangle source{frame * width, 0.f, rightLeft * width, height};
    Rectangle dest{getScreenPos().x, getScreenPos().y, 3.0f * width/4.0f, 3.0f * height};
    DrawTexturePro(soldier, source, dest, Vector2{}, 0.f, WHITE);

     // Vector2 origin{};
     // Vector2 offset{};
     // float rotation{};
     // if (rightLeft > 0.f)
     // {
         // origin = {axe.width * scale, axe.height  * scale};
         // offset = {40.f, 60.f};
         // offset.x = 25.f;
         // offset.y = 75.f;
                                
         // rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? 85.f : 60.f;
     // }
     // else
     // {
        // origin = {axe.width * scale, axe.height * scale};
        // offset = {50.f, 100.f};
        // offset.x = 40.f;
        // offset.y = 50.f;
                                
        // rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? -85.f : -60.f;
    // }

        
    // draw the axe 

    // Rectangle source1{0.f, 0.f, static_cast<float>(axe.width) * rightLeft, static_cast<float>(axe.height)};
    // Rectangle dest1{soldierPos.x + offset.x, soldierPos.y + offset.y, axe.width * scale, axe.height * scale};
    // DrawTexturePro(axe, source1, dest1, origin, rotation, WHITE);

}