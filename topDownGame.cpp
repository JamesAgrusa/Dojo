#include "raylib.h"
#include "raymath.h"

int main()
{
    const int windowWidth{600};
    const int windowHeight{600};
    InitWindow(windowWidth, windowHeight, "James' Top Down");

    Texture2D map = LoadTexture("nature_tileset/OpenWorldMap24x24.png");
    Vector2 mapPos{0.0, 0.0};
    float speed{4.0};

    Texture2D axe{LoadTexture("Weapons/Axe/Axe.png")};
    
    
    Texture2D soldier_walk = LoadTexture("newcharacters/soldier_walk.png");
    Texture2D soldier = LoadTexture("newcharacters/soldier_walk.png");
    Vector2 soldierPos{
        (float)windowWidth/2.0f - 4.0f * (0.5f * (float)soldier.width/4.0f),
        (float)windowHeight/2.0f - 4.0f * (0.5f * (float)soldier.height)
    };

    // 1 : facing right, -1 : facing left
    float rightLeft{1.f};
    // animation variables
    float runningTime{};
    int frame{};
    const int maxFrames{4};
    const float updateTime{1.f/10.f};
    float scale{4.0f};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // moving the character
        
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

       
        
        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);

        // update animation frame
        runningTime += GetFrameTime();
        if (runningTime >= updateTime)
        {
            frame++;
            runningTime = 0.f;
            if (frame > maxFrames) frame = 0;
        }

        // draw the character
       
        Rectangle source{frame * (float)soldier.width/4.f, 0.f, rightLeft * (float)soldier.width/4.f, (float)soldier.height};
        Rectangle dest{soldierPos.x, soldierPos.y, 3.0f * (float)soldier.width/4.0f, 3.0f * (float)soldier.height};
        DrawTexturePro(soldier, source, dest, Vector2{}, 0.f, WHITE);

        // swing the axe

        Vector2 origin{};
        Vector2 offset{};
        float rotation{};
        if (rightLeft > 0.f)
        {
            origin = {axe.width * scale, axe.height  * scale};
            offset = {40.f, 60.f};
            offset.x = 40.f;
            offset.y = 55.f;
            
            rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? 30.f : 0.f;
        }
        else
        {
            origin = {axe.width * scale, axe.height * scale};
            offset = {50.f, 100.f};
            offset.x = 50.f;
            offset.y = 55.f;
           
            rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? -30.f : 0.f;
        }

        
        // draw the axe 

        Rectangle source1{0.f, 0.f, static_cast<float>(axe.width) * rightLeft, static_cast<float>(axe.height)};
        Rectangle dest1{soldierPos.x + offset.x, soldierPos.y + offset.y, axe.width * scale, axe.height * scale};
        DrawTexturePro(axe, source1, dest1, origin, rotation, WHITE);

        EndDrawing();
    }
    CloseWindow();
}
