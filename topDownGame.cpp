#include "raylib.h"
#include "raymath.h"
#include "Hero.h"

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
// Initialization
//--------------------------------------------------------------------------------------
const int screenWidth = 800;
const int screenHeight = 450;

InitWindow(screenWidth, screenHeight, "Soldier Destruction");

GameScreen currentScreen = LOGO;

// TODO: Initialize all required variables and load all required data here!

int framesCounter = 0;          // Useful to count frames

SetTargetFPS(60);               // Set desired framerate (frames-per-second)
//--------------------------------------------------------------------------------------

// Main game loop
while (!WindowShouldClose())    // Detect window close button or ESC key
{
    // Update
    //----------------------------------------------------------------------------------
    switch(currentScreen)
    {
            case LOGO:
            {
            // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 6 seconds (360 frames) before jumping to TITLE screen
                if (framesCounter > 60)
                {
                currentScreen = TITLE;
                }
            } break;
        case TITLE:
        {
            // TODO: Update TITLE screen variables here!

            // Press enter to change to GAMEPLAY screen
            if (IsMouseButtonDown(MOUSE_RIGHT_BUTTON) || IsGestureDetected(GESTURE_TAP))
            {
                currentScreen = GAMEPLAY;
            }
        } break;
        case GAMEPLAY:
        {
            // TODO: Update GAMEPLAY screen variables here!

            // Press enter to change to ENDING screen
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
            {
                currentScreen = ENDING;
            }
        } break;
        case ENDING:
        {
            // TODO: Update ENDING screen variables here!

            // Press enter to return to TITLE screen
            if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
            {
                currentScreen = TITLE;
            }
        } break;
        default: break;
    }
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

        ClearBackground(ORANGE);

        switch(currentScreen)
        {
            case LOGO:
            {
            // TODO: Draw LOGO screen here!
                DrawText("UnrealityArts", 230, 20, 40, BLACK);
                DrawText("The Second UnrealityArts Game", 150, 220, 30, BLACK);

            } break;
            case TITLE:
            {
                // TODO: Draw TITLE screen here!
                DrawRectangle(0, 0, screenWidth, screenHeight, DARKBLUE);
                DrawText("Soldier Destruction", 150, 20, 50, WHITE);
                DrawText("Right click to Start", 220, 220, 30, WHITE);

            } break;
            case GAMEPLAY:
            {
                {
                    const int windowWidth{1100};
                    const int windowHeight{900};
                    InitWindow(windowWidth, windowHeight, "Soldier Destruction");

                    Texture2D map = LoadTexture("nature_tileset/OpenWorldMap24x24.png");
                    Vector2 mapPos{0.0, 0.0};
                    // const float mapScale{4.0f};
                    

                    Hero soldier{windowWidth, windowHeight};
        
                    
                    SetTargetFPS(60);
                    while (!WindowShouldClose())
                        {
                            BeginDrawing();
                            ClearBackground(WHITE);

                            // draw the map
                            DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);
                            
                            mapPos = Vector2Scale(soldier.getWorldPos(), -1.f);

                            soldier.tick(deltaTime());
        
                            
                            EndDrawing();
                        }
                    CloseWindow();
                }

            } break;
            case ENDING:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
                    DrawText("ENDING SCREEN", 20, 20, 40, DARKBLUE);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, DARKBLUE);

                } break;
            default: break;
        }

        EndDrawing();
    //----------------------------------------------------------------------------------
}

// De-Initialization
//--------------------------------------------------------------------------------------

// TODO: Unload all loaded data (textures, fonts, audio) here!

CloseWindow();        // Close window and OpenGL context
//--------------------------------------------------------------------------------------

return 0;
}