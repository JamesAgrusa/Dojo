#include "raylib.h"
#include "raymath.h"

int main()
{
    const int windowWidth{950};
    const int windowHeight{950};
    InitWindow(windowWidth, windowHeight, "Another Top Down!");

    Texture2D map = LoadTexture("map_tileset/TopDownMap.png");
    Vector2 mapPos{0.0, 0.0};
    float speed{10.0};
    Texture2D knight_idle = LoadTexture("Textures/knight2.png");
    Texture2D knight_run = LoadTexture("Textures/knight2.png");


    Texture2D knight = LoadTexture("Textures/knight2.png");
    Vector2 knightPos{
        (float)windowWidth/2.0f - 4.0f * (0.5f * (float)knight.width/6.0f),
        (float)windowHeight/2.0f - 4.0f * (0.5f * (float)knight.height)
    };

    //1: facing righ, -1 : facing left
    float rightLeft{1.f};
    // animation variables
    float runningTime{};
    int frame{};
    const int maxFrames{6};
    const float updateTime{1.f/12.f}; // will update 12 times per second


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
            direction.x < 0.f ? rightLeft = -1.f : rightLeft = 1.f; // equivilant to an if else statement. 'ternairy opporator'
            knight = knight_run;
        }
         else
        {
            knight = knight_idle;
        }
        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);

        // update animation frame
        runningTime += GetFrameTime();
        if (runningTime >= updateTime)
        {
            frame++;
            runningTime = 0.f;
            if(frame > maxFrames) frame = 0;
        }
        
        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);

        // draw the character
        Rectangle source{0.f, 0.f, (float)knight.width/6.f, (float)knight.height};
        Rectangle dest{knightPos.x, knightPos.y, 4.0f * (float)knight.width/6.0f, 4.0f * (float)knight.height};
        DrawTexturePro(knight, source, dest, Vector2{}, 0.f, WHITE);

        EndDrawing();
    }
    CloseWindow();
}
