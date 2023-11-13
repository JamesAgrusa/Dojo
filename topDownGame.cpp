#include "raylib.h"
#include "raymath.h"
#include "Hero.h"

int main()
{
    const int windowWidth{1100};
    const int windowHeight{900};
    InitWindow(windowWidth, windowHeight, "Soldier Destruction");

    Texture2D map = LoadTexture("nature_tileset/OpenWorldMap24x24.png");
    Vector2 mapPos{0.0, 0.0};
    // const float mapScale{2};
                    

    Hero soldier{windowWidth, windowHeight};
        
                    
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);
                            
        mapPos = Vector2Scale(soldier.getWorldPos(), -1.f);

        soldier.tick(GetFrameTime());

                       
        EndDrawing();
    }
    CloseWindow();
}
    