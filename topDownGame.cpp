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

    
    Texture2D solider_idle = LoadTexture("newcharacterspack/solider_idle.png");
    Texture2D solider_run = LoadTexture("newcharacterspack/solider_run.png ");
    

    Texture2D solider = LoadTexture("newcharacterpack/soldier_idle.png");
    Vector2 soliderPos{
        (float)windowWidth/2.0f - 4.0f * (0.5f * (float)solider.width/4.0f), // c style cast. turning width 'int' into a 'float'
        (float)windowHeight/2.0f - 4.0f *  (0.5f * (float)solider.height)
    };

    float rightLeft{1.f};
    float runningTime{};
    int frame{};
    const int maxFrames{4};
    const float updateTime{1.f/6.f};
    Vector2 velocity = {};
    Vector2 worldPos{};


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

        }   
        
        
        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 1.0, WHITE);

        float deltaTime;
        // maybe add a do while loop for when key is not pressed for idle
        //then when key is pressed allow the solider to run animate
        //you got this <3
        // update animation frame
        runningTime += deltaTime;
        if (runningTime >= updateTime)
        {
            frame++;
            runningTime = 0.f;
            if(frame > maxFrames) frame = 0;
        }
        
        if (Vector2Length(velocity) != 0.0)
        {
            worldPos = Vector2Add(worldPos, Vector2Scale(Vector2Normalize(velocity), speed));
            velocity.x < 0.f ? rightLeft = -1.f : rightLeft = 1.f;      
        }
     
        // draw the character
        Rectangle source{frame * (float)solider.width/1.f, 1.f, rightLeft * (float)solider.width/1.f, (float)solider.height};
        Rectangle dest{soliderPos.x, soliderPos.y, 4.0f * (float)solider.width/1.0f, 4.0f * (float)solider.height};
        DrawTexturePro(solider, source, dest, Vector2{}, 1.f, WHITE);
       

        EndDrawing();
    }
     CloseWindow();
}

