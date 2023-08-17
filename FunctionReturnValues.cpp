#include "raylib.h"
int main()
{
    int width;
    width = 500;
    InitWindow(width, 400, "James' Window");

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(GREEN);
        EndDrawing();
        
    }

}