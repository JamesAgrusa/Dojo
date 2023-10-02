#include "raylib.h"

int main()
{
    int windowDimensions[2];
    windowDimensions[0] = 1400;
    windowDimensions[1] = 800;
    
    InitWindow(windowDimensions[0], windowDimensions[1], "Here we go again!");
    


    int height{800};
    int width{1400};
   


    int circle_x{360};
    int circle_y{100};

    // axe on top of prize
    int axe_x{200};
    int axe_y{200};
    int axe_length{50};

    // axe on left
    int axe1_x{650};
    int axe1_y{200};
    int axe1_length{50};

    // axe pn right
    int axe2_x{900};
    int axe2_y{650};
    int axe2_length{50};

    // top left axe
    int axe3_x{75};
    int axe3_y{150};
    int axe3_length{50};

    // prize
    int prize_x{1300};
    int prize_y{750};
    int prize_length{100};

    int direction{5};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawText("This Game Is Fun!", 900, 150, 40, RED);
        DrawText("Good Luck and Enjoy!", 900, 250, 40, RED);
        DrawText("Dodge here ->", 10, 160, 15, RED);
        DrawCircle(circle_x, circle_y, 25, GREEN);
        DrawRectangle(axe_x, axe_y, axe_length, axe_length, BLUE);
        DrawRectangle(axe1_x, axe1_y, axe1_length, axe1_length, BLUE);
        DrawRectangle(axe2_x, axe2_y, axe2_length, axe2_length, BLUE);
        DrawRectangle(axe3_x, axe3_y, axe3_length, axe3_length, BLUE);
        DrawRectangle(prize_x, prize_y, prize_length, prize_length, RED);

        // bounce of axe 1
        axe_y += direction;
        if(axe_y > height || axe_y < 250)
            {
                direction = -direction; 
            }
            
        //bounce of axe 2
        axe1_y += direction;
        if(axe1_y > height || axe1_y < 250)
            {
                direction = -direction; 
            }

        // bounce of axe 3
        axe2_x += direction;
        if(axe2_x > width || axe2_x < 75)
            {
                direction = -direction; 
            }

        // bounce of axe 4

        axe3_x += direction;
        if (axe3_x > width || axe_x < 100)
            {
                direction = -direction;
            }

        if (IsKeyDown(KEY_D) && circle_x < 1400)
        {
            circle_x = circle_x + 10;
        }
        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x = circle_x - 10;
        }
        if (IsKeyDown(KEY_S) && circle_y < 800)
        {
            circle_y = circle_y + 10;
        }
        if (IsKeyDown(KEY_W) && circle_y > 0)
        {
            circle_y = circle_y - 10;
        }

        EndDrawing();
    };
    
}