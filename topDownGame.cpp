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
    const float mapScale{4.0};
                    
    // hero location 
    Hero soldier{windowWidth, windowHeight};

    // monster locations
    Monster eye{
         Vector2{600, 600},
        LoadTexture("newcharacters/eye_walk.png"),
    };

    Monster troll{
        Vector2{800, 600},
        LoadTexture("newcharacters/troll_walk.png"),
    };

    Monster bat{
        Vector2{700, 600},
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

        mapPos = Vector2Scale(soldier.getWorldPos(), -1.f);

        // draw the map
        DrawTextureEx(map, mapPos, 0.0, 4.0, WHITE);

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
                            
        // checking map boundaries
        soldier.tick(GetFrameTime());

        if (soldier.getWorldPos().x < 0.f ||
            soldier.getWorldPos().y < 0.f ||
            soldier.getWorldPos().x + windowWidth > map.width  * mapScale ||
            soldier.getWorldPos().y + windowHeight > map.height * mapScale)
            
        {
            soldier.undoMovement();
           
        }

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

        
        
        EndDrawing();
    }
    CloseWindow();
}
    