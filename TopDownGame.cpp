#include "raylib.h"
#include "raymath.h"
#include "Hero.h"

int main()
{
    const int windowWidth{950};
    const int windowHeight{950};
    InitWindow(windowWidth, windowHeight, "James' Top Down");

    Texture2D map = LoadTexture("map_tileset/TopDownMap.png");
    Vector2 mapPos{0.0, 0.0};
    const float mapScale{4.0f};

    Hero knight{windowWidth, windowHeight};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);

        mapPos = Vector2Scale(knight.getWorldPos(), -1.f);

        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);

        knight.tick(GetFrameTime());
        // check map bounds
        if(knight.getWorldPos().x < 0.f ||
           knight.getWorldPos().y < 0.f ||
           knight.getWorldPos().x + windowWidth > map.width * mapScale ||
           knight.getWorldPos().y + windowHeight > map.height * mapScale)
        {
            knight.undoMovement();
        }
        
        EndDrawing();
    }
     CloseWindow();
}