#include "raylib.h"

class Hero
{
    public:
    Hero(int windowWidth, int windowHeight);
    virtual void tick(float deltaTime);
    virtual Vector2 soldierPos();

    protected:
    Texture2D soldier{LoadTexture("newcharacters/soldier_walk.png")};
    Texture2D soldier_walk{LoadTexture("newcharacters/soldier_walk.png")};
    // 1 : facing right, -1 : facing left
    float rightLeft{1.f};
    // animation variables
    float runningTime{};
    int frame{};
    const int maxFrames{4};
    const float updateTime{1.f/10.f};
    float scale{4.0f};
    float speed{4.0};

    private:
    int windoWidth{1100};
    int windowHeight{900};
    Texture2D axe{LoadTexture("Weapons/Lance2/Lance.png")};
};