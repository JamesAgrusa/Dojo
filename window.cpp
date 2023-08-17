#include "raylib.h"
int main()
{
    int width;
    width = 450;
    InitWindow(width, 350, "James Window");

    while(true)
    {
       BeginDrawing();
       ClearBackground(RED);
       EndDrawing(); 
    }
}