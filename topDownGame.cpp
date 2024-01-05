#include "raylib.h"
#include "raymath.h"
#include "Hero.h"
#include "Monster.h"
#include <string>

int main()
{
    const int windowWidth{1100};
    const int windowHeight{900};
    InitWindow(windowWidth, windowHeight, "Soldier Destruction");

    Texture2D map = LoadTexture("nature_tileset/SDmap.png");
    Vector2 mapPos{0.0, 0.0};
    // const float mapScale{2};
                    

    Hero soldier{windowWidth, windowHeight};

    Monster eye{
         Vector2{600, 300},
        LoadTexture("newcharacters/eye_walk.png"),
    };

    Monster troll{
        Vector2{800, 300},
        LoadTexture("newcharacters/troll_walk.png"),
    };

    Monster bat{
        Vector2{700, 300},
        LoadTexture("newcharacters/bat_walk.png"),
    };

    Monster* monsters[]{
        &eye,
        &troll,
        &bat
    };

    for (auto monster : monsters)
    {
    monster->setTarget(&soldier);
    }

    
                    
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);
                            
        mapPos = Vector2Scale(soldier.getWorldPos(), -1.f);

        soldier.tick(GetFrameTime());

        for (auto monster : monsters)
        {
            monster->tick(GetFrameTime());
        }

         if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON))
        {
            for (auto monster : monsters)
            {
                if (CheckCollisionRecs(monster->getCollisionRec(), soldier.getWeaponCollisionRec()))
                {
                    monster->setAlive(false);
                }
            }
        }

        if (!soldier.getAlive()) // character not alive
        {
            DrawText("Game Over!", 55.f, 45.f, 40, RED);
            // EndDrawing;
            continue;
        }
        else // character is alive: Display Health
        {
        std::string soldierHealth = "Health: ";
        soldierHealth.append(std::to_string(soldier.getHealth()), 0, 5);
        DrawText(soldierHealth.c_str(), 55.f, 45.f, 40, RED);
        }

                       
        EndDrawing();
    }
    CloseWindow();
}
    