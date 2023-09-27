#include "Circle.h"

int circle_x{150};
int circle_y{110};

void Circle::tick(float deltaTime)
{
    // moving our object
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
        BaseCircle::tick(deltaTime);
        
}