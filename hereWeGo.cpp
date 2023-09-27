#include "raylib.h"

int main()
{
    const int windowWidth{1400};
    const int windowHeight{800};
    InitWindow(windowWidth, windowHeight, "Here we go again!");

    Circle shape{windowWidth, windowHeight};

    int shape_x{150};
    int shape_y{110};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        DrawCircle(shape_x, shape_y, 25, BLUE);

        shape.tick(GetFrameTime());

        
        EndDrawing();
    }
    
}