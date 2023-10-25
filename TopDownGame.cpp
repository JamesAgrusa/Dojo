#include "raylib.h"
#include "raymath.h"

int main()
{
    const int windowWidth{384};
    const int windowHeight{384};
    InitWindow(windowWidth, windowHeight, "Another Top Down");

    Texture2D map = LoadTexture("nature_tileset/OpenWorldMap24x24.png");
    Vector2 mapPos{0.0, 0.0};
    float speed{4.0};

    Texture2D soldier_idle = LoadTexture("newcharacters/soldier_idle.png");
    Texture2D soldier_run = LoadTexture("newcharacters/soldier_walk.png");
    Texture2D soldier = LoadTexture("newcharacters/soldier_idle.png");
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
    const float updateTime{1.f/9.f};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

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
            soldier = soldier_run;
        }
        else
        {
            soldier = soldier_idle;
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

        // draw the character walking
       
        Rectangle source{frame * (float)soldier.width/4.f, 0.f, rightLeft * (float)soldier.width/4.f, (float)soldier.height};
        Rectangle dest{soldierPos.x, soldierPos.y, 4.0f * (float)soldier.width/4.0f, 4.0f * (float)soldier.height};
        DrawTexturePro(soldier, source, dest, Vector2{}, 0.f, WHITE);

        EndDrawing();
    }
    CloseWindow();
}
