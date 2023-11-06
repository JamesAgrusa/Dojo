#include "raylib.h"

class Hero
{
    public:
    Hero(int windowWidth, int windowHeight);
    virtual void tick(float deltaTime);
    virtual Vector2 getScreenPos();
    Vector2 getWorldPos() { return worldPos; }
    // void undoMovement();
    

    protected:
    Texture2D soldier{LoadTexture("newcharacters/soldier_walk.png")};
    Texture2D soldier_walk{LoadTexture("newcharacters/soldier_walk.png")};
    Vector2 worldPos{};
    Vector2 worldPosLastFrame{}; 
    float rightLeft{-1.f};
    float runningTime{};
    int frame{};
    const int maxFrames{4};
    const float updateTime{1.f/10.f};
    float scale{4.0f};
    float speed{4.0};
    float height {};
    float width{};
    

    private:
    int windowWidth{1100};
    int windowHeight{900};
    Texture2D axe{LoadTexture("Weapons/Lance2/Lance.png")};
};