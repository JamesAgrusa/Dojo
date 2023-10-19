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

    
    Texture2D knight_run = LoadTexture("newcharacterspack/solider_idle.png");

    Texture2D knight = LoadTexture("newcharacterpack/soldier_idle.png");
    Vector2 knightPos{
        (float)windowWidth/2.0f - 4.0f * (0.5f * (float)knight.width/4.0f), // c style cast. turning width 'int' into a 'float'
        (float)windowHeight/2.0f - 4.0f *  (0.5f * (float)knight.height)
    };

    float rightLeft{1.f};
    float runningTime{};
    int frame{};
    const int maxFrames{4};
    const float updateTime{1.f/6.f};


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
        DrawTextureEx(map, mapPos, 0.0, 1.0, WHITE);

        // update animation frame
        runningTime += GetFrameTime();
        if (runningTime >= updateTime)
        {
            frame++;
            runningTime = 0.f;
            if(frame > maxFrames) frame = 0;
        }
        else
        {
           
        }
        // character direction
        

        // draw the character
        Rectangle source{frame * (float)knight.width/4.f, 1.f, rightLeft * (float)knight.width/4.f, (float)knight.height};
        Rectangle dest{knightPos.x, knightPos.y, 4.0f * (float)knight.width/4.0f, 4.0f * (float)knight.height};
        DrawTexturePro(knight, source, dest, Vector2{}, 1.f, WHITE);
       

        EndDrawing();
    }
     CloseWindow();
}


