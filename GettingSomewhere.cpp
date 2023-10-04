#include "raylib.h"

int main()
{
    int windowDimensions[2];
    windowDimensions[0] = 1400;
    windowDimensions[1] = 800;
    
    InitWindow(windowDimensions[0], windowDimensions[1], "Here we go again!");
    


    int height{800};
    int width{1400};
   


    int circle_x{360};
    int circle_y{100};
    int circle_radius{25};

    // circle edges
    int l_circle_x{circle_x - circle_radius};
    int r_circle_x{circle_x + circle_radius};
    int u_circle_y{circle_y - circle_radius};
    int b_circle_y{circle_y + circle_radius};


    // axe on top of prize
    int axe_x{200};
    int axe_y{200};
    int axe_length{50};

    int l_axe_x{axe_x};
    int r_axe_x{axe_x + axe_length};
    int u_axe_y{axe_y};
    int b_axe_y{axe_y + axe_length};

    // axe on left
    int axe1_x{650};
    int axe1_y{200};
    int axe1_length{50};

    int l_axe1_x{axe1_x};
    int r_axe1_x{axe1_x + axe1_length};
    int u_axe1_y{axe1_y};
    int b_axe1_y{axe1_y + axe1_length};


    // axe on right
    int axe2_x{900};
    int axe2_y{650};
    int axe2_length{50};

    int l_axe2_x{axe2_x};
    int r_axe2_x{axe2_x + axe2_length};
    int u_axe2_y{axe2_y};
    int b_axe2_y{axe2_y + axe2_length};


    // top left axe
    int axe3_x{75};
    int axe3_y{150};
    int axe3_length{50};

    int l_axe3_x{axe3_x};
    int r_axe3_x{axe3_x + axe3_length};
    int u_axe3_y{axe3_y};
    int b_axe3_y{axe3_y + axe3_length};


    // prize
    int prize_x{1300};
    int prize_y{750};
    int prize_length{100};

    // prize edges
    int l_prize_x{prize_x};
    int r_prize_x{prize_x + prize_length};
    int u_prize_y{prize_y};
    int b_prize_y{prize_y + prize_length};

    int direction{10};

    // lose condition
    bool collision_with_axe = 
                             (b_axe_y >= u_circle_y) && 
                             (u_axe_y <= b_circle_y) && 
                             (r_axe_x >= l_circle_x) && 
                             (l_axe_x <= r_circle_x);

    bool collision_with_axe1 = 
                             (b_axe1_y >= u_circle_y) && 
                             (u_axe1_y <= b_circle_y) && 
                             (r_axe1_x >= l_circle_x) && 
                             (l_axe1_x <= r_circle_x);
                             
    bool collision_with_axe2 = 
                             (b_axe2_y >= u_circle_y) && 
                             (u_axe2_y <= b_circle_y) && 
                             (r_axe2_x >= l_circle_x) && 
                             (l_axe2_x <= r_circle_x);

    bool collision_with_axe3 = 
                             (b_axe3_y >= u_circle_y) && 
                             (u_axe3_y <= b_circle_y) && 
                             (r_axe3_x >= l_circle_x) && 
                             (l_axe3_x <= r_circle_x);
                                                                             

    // win condition
    bool collision_with_prize = 
                                (b_prize_y >= u_circle_y) && 
                                (u_prize_y <= b_circle_y) && 
                                (r_prize_x >= l_circle_x) && 
                                (l_prize_x <= r_circle_x);

    SetTargetFPS(60);
    while (WindowShouldClose() == false)
    {
        BeginDrawing();
        ClearBackground(WHITE);

        if(collision_with_prize)
        {
             DrawText("You Win!", 400, 200, 40, RED);
        }
        else if (collision_with_axe || 
        collision_with_axe1 || 
        collision_with_axe2 || 
        collision_with_axe3)
        {
            DrawText("You Lose!", 400, 200, 40, RED);
            DrawText("Will You Try Again?", 700, 200, 40, RED);
        }
        else
        {
            // updating edges as the game progresses
            l_circle_x = circle_x - circle_radius;
            r_circle_x = circle_x + circle_radius;
            u_circle_y = circle_y - circle_radius;
            b_circle_y = circle_y + circle_radius;

            l_axe_x = axe_x;
            r_axe_x = axe_x + axe_length;
            u_axe_y = axe_y;
            b_axe_y = axe_y + axe_length;

            l_axe1_x = axe1_x;
            r_axe1_x = axe1_x + axe1_length;
            u_axe1_y = axe1_y;
            b_axe1_y = axe1_y + axe1_length;

            l_axe2_x = axe2_x;
            r_axe2_x = axe2_x + axe_length;
            u_axe2_y = axe2_y;
            b_axe2_y = axe2_y + axe_length;

            l_axe3_x = axe3_x;
            r_axe3_x = axe3_x + axe_length;
            u_axe3_y = axe3_y;
            b_axe3_y = axe3_y + axe_length;

            l_prize_x = prize_x;
            r_prize_x = prize_x + prize_length;
            u_prize_y = prize_y;
            b_prize_y = prize_y + prize_length;
            // update collision_with_prize
            collision_with_prize = 
                             (b_prize_y >= u_circle_y) && 
                             (u_prize_y <= b_circle_y) && 
                             (r_prize_x >= l_circle_x) && 
                             (l_prize_x <= r_circle_x);
            collision_with_axe = 
                             (b_axe_y >= u_circle_y) && 
                             (u_axe_y <= b_circle_y) && 
                             (r_axe_x >= l_circle_x) && 
                             (l_axe_x <= r_circle_x);

            collision_with_axe1 = 
                             (b_axe1_y >= u_circle_y) && 
                             (u_axe1_y <= b_circle_y) && 
                             (r_axe1_x >= l_circle_x) && 
                             (l_axe1_x <= r_circle_x);

            collision_with_axe2 = 
                             (b_axe2_y >= u_circle_y) && 
                             (u_axe2_y <= b_circle_y) && 
                             (r_axe2_x >= l_circle_x) && 
                             (l_axe2_x <= r_circle_x);

            collision_with_axe3 = 
                             (b_axe3_y >= u_circle_y) && 
                             (u_axe3_y <= b_circle_y) && 
                             (r_axe3_x >= l_circle_x) && 
                             (l_axe3_x <= r_circle_x);




            // text to the maps
        DrawText("This Game Is Fun!", 900, 100, 40, RED);
        DrawText("If you hit the rectangles you lose!", 650, 140, 40, RED);
        DrawText("If you get the prize you win!", 700, 180, 40, RED);
        DrawText("Good Luck and Enjoy!", 900, 220, 40, RED);
        DrawText("Dodge here ->", 10, 160, 15, RED);
        DrawText("Dodge here ->", 80, 270, 15, RED);
        DrawText("Dodge here ->", 530, 308, 15, RED);
        DrawText("Dodge here ->", 850, 670, 15, RED);
        DrawText("Get Me!!!", 1110, 740, 40, BLACK);
        // draw circle
        DrawCircle(circle_x, circle_y, 25, GREEN);
        // draw axes
        DrawRectangle(axe_x, axe_y, axe_length, axe_length, BLUE);
        DrawRectangle(axe1_x, axe1_y, axe1_length, axe1_length, BLUE);
        DrawRectangle(axe2_x, axe2_y, axe2_length, axe2_length, BLUE);
        DrawRectangle(axe3_x, axe3_y, axe3_length, axe3_length, BLUE);

        // We want to get this prize to win!
        // We also need a lose condition
        // I need to define a path to this prize
        // I need to define collision conditions with the axes
        // Print to the screen when the player collides with the prize
        // Pring to the screen when the player collides with the axes
        
        DrawRectangle(prize_x, prize_y, prize_length, prize_length, RED);

        // here is the movement of the axes, dictating the path of our circle

        // axe above prize
        axe_y += direction;
        if(axe_y > height || axe_y < 0)
            {
                direction = -direction; 
            }
            
        // axe on left
        axe1_y += direction;
        if(axe1_y > height || axe1_y < 0)
            {
                direction = -direction; 
            }

        // axe on right
        axe2_x += direction;
        if(axe2_x > width || axe2_x < 1400)
            {
                direction = -direction; 
            }

        // top left axe

        axe3_x += direction;
        if (axe3_x > width || axe_x < 1400)
            {
                direction = -direction;
            }

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

        
        }
        EndDrawing();
    }

}