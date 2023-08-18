#include "raylib.h"
int main()
{
    // window dimensions
    int width{800};
    int height{450};
    InitWindow(width, height, "James' Window");

    //Circle coordinates
    int circle_x{200};
    int circle_y{200};

    // axe coordinates
    int axe_x{400};
    int axe_y{0};


    SetTargetFPS(60);
    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);
        
        // Game logic begins

        DrawCircle(circle_x, circle_y, 25, BLUE); 
        DrawRectangle(axe_x, axe_y, 50, 50, RED);

        // move the axe

        // axe_y = axe_y + 10; is the same as the following
        axe_y += 10;

        if (IsKeyDown(KEY_D) && circle_x < 350)
        {
            circle_x += 10;
        }

        if (IsKeyDown(KEY_A) && circle_x > 0)
        {
            circle_x -= 10;
        }

        
        // Game logic ends

        EndDrawing();
        
    } 
}