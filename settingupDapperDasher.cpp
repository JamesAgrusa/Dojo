#include "raylib.h"

int main()
{

// Window Dimensions
const int windowWidth{512}; // const vairables cannot be changed throughout the code
const int windowHeight{380}; // known as "const correct" by using this in your code
// initialize the window
InitWindow(windowWidth, windowHeight, "Dapper Dasher!");

int setTargetFPS(60);

while (!WindowShouldClose()) // '!' negate value, if true will flip and turn false
                             // and vise versa
{
    // Start drawing
    BeginDrawing();
    ClearBackground(WHITE);

    // Stop Drawing
    EndDrawing();
}
CloseWindow();
}