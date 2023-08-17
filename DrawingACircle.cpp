#include "raylib.h"
int main()
{
    

    int width;
    width = 350;
    InitWindow(width, 200, "James' Window");

    while(WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        DrawCircle(175, 100, 25, BLUE); // (half of width, half of height, radius, color of circle)

        EndDrawing();
        
    } 
}