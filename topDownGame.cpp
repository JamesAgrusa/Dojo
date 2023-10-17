#include "raylib.h"
#include "raymath.h"

int main()
{
    const int windowWidth{1500};
    const int windowHeight{800};
    InitWindow(windowWidth, windowHeight, "The Top Down");

    Texture2D map = LoadTexture("nature_tileset/Map.png");
    Vector2 mapPos{0.0, 0.0};
    float speed{6.0};

    
    Texture2D knight_run = LoadTexture("newcharacterspack/solider.png");

    Texture2D knight = LoadTexture("newcharacterpack/soldier.png");
    Vector2 knightPos{
        (float)windowWidth/6.0f - 3.5f * (0.5f * (float)knight.width/4.0f), // c style cast. turning width 'int' into a 'float'
        (float)windowHeight/6.0f - 3.5f *  (0.5f * (float)knight.height/2)
    };

    float rightLeft{1.f};
    float runningTime{};
    int frame{};
    const int maxFrames{4};
    const float updateTime{1.f/12.f};


    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(BLUE);

        
        Vector2 direction{};
        if (IsKeyDown(KEY_A)) direction.x -= 1.0;
        if (IsKeyDown(KEY_D)) direction.x += 1.0;
        if (IsKeyDown(KEY_W)) direction.y -= 1.0;
        if (IsKeyDown(KEY_S)) direction.y += 1.0;
        if (Vector2Length(direction) != 0.0)
        {
            // set mapPos = mapPos - direction
            
            mapPos = Vector2Subtract(mapPos, Vector2Scale(Vector2Normalize(direction), speed));
            
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

        // draw the character
        Rectangle source{1.f, 1.f, (float)knight.width/1.0f, (float)knight.height/4.0f};
        Rectangle dest{knightPos.x, knightPos.y, 5.0f * (float)knight.width/1.0f, 5.0f * (float)knight.height/4.0f};
        DrawTexturePro(knight, source, dest, Vector2{}, -1.0f, WHITE);

        EndDrawing();
    }
     CloseWindow();
}