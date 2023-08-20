#include "raylib.h"

int main()
{

// Window Dimensions
const int windowWidth{512}; // const vairables cannot be changed throughout the code
const int windowHeight{380}; // known as "const correct" by using this in your code
// initialize the window
InitWindow(windowWidth, windowHeight, "Dapper Dasher!");

// rectangle dimensions
const int width{50};
const int height{80};

int posY{windowHeight - height};
int velocity{0};


int setTargetFPS(60);

while (!WindowShouldClose()) // '!' negate value, if true will flip and turn false
                             // and vise versa
{
    // Start drawing
    BeginDrawing();
    ClearBackground(WHITE);

    if(IsKeyPressed(KEY_SPACE))
    {
      velocity -= 10;
    }
    posY += velocity;

    DrawRectangle(windowWidth/2, posY, width, height, BLUE);

    // Stop Drawing
    EndDrawing();
}
CloseWindow();
}