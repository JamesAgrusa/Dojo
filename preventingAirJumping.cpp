#include "raylib.h"

int main()
{
// Window Dimensions
const int windowWidth{512}; 
const int windowHeight{380}; 
// initialize window
InitWindow(windowWidth, windowHeight, "Dapper Dasher!");

// accerlation due to gravity (pixels/frame/frame)
const int gravity{1};

// rectangle dimensions
const int width{50};
const int height{80};

// is the rectangle in the air?
bool isInAir{};
// jump velocity
const int jumpVel{-22};

int posY{windowHeight - height};
int velocity{0};


int setTargetFPS(60);
while (!WindowShouldClose()) 
{
    // Start drawing
    BeginDrawing();
    ClearBackground(WHITE);

    // perform ground check
    if(posY >= windowHeight - height)
    {
        // rectangle is on the ground
        velocity = 0;
        isInAir = false;
    }
    else
    {
        // rectangle is in the air
        velocity += gravity;
        isInAir = true;
    }

    // jump check
    if(IsKeyPressed(KEY_SPACE) && !isInAir)
    {
      velocity += jumpVel;
    }

    // update position
    posY += velocity;

    DrawRectangle(windowWidth/2, posY, width, height, BLUE);

    // Stop Drawing
    EndDrawing();
}
CloseWindow();
}