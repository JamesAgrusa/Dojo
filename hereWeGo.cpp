#include "raylib.h"

int main()
{
    int windowDimensions[2];
    windowDimensions[0] = 1400;
    windowDimensions[1] = 800;
    
    InitWindow(windowDimensions[0], windowDimensions[1], "Here we go again!");
    


    int height{800};
    int width{1400};
   


    int shape_x{150};
    int shape_y{110};

    // axe 1
    int axe_x{400};
    int axe_y{200};
    int axe_length{50};

    // axe 2
    int axe1_x{700};
    int axe1_y{200};
    int axe1_length{50};

    // axe 3
    int axe2_x{200};
    int axe2_y{200};
    int axe2_length{50};

    int direction{10};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawCircle(shape_x, shape_y, 25, GREEN);
        DrawRectangle(axe_x, axe_y, axe_length, axe_length, BLUE);
        DrawRectangle(axe1_x, axe1_y, axe1_length, axe1_length, BLUE);
        DrawRectangle(axe2_x, axe2_y, axe2_length, axe2_length, BLUE);

        // bounce of axe 1
        axe_y += direction;
        if(axe_y > height || axe_y < 200)
            {
                direction = -direction; 
            }
            
        //bounce of axe 2
        axe1_y += direction;
        if(axe1_y > height || axe1_y < 200)
            {
                direction = -direction; 
            }

        // bounce of axe 3
        axe2_x += direction;
        if(axe2_x >= width || axe2_x =< 100)
            {
                direction = -direction; 
            }

        if (IsKeyDown(KEY_D) && shape_x < 1400)
        {
            shape_x = shape_x + 10;
        }
        if (IsKeyDown(KEY_A) && shape_x > 0)
        {
            shape_x = shape_x - 10;
        }
        if (IsKeyDown(KEY_S) && shape_y < 800)
        {
            shape_y = shape_y + 10;
        }
        if (IsKeyDown(KEY_W) && shape_y > 0)
        {
            shape_y = shape_y - 10;
        }

        EndDrawing();
    };
    
}