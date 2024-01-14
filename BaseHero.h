#ifndef BASE_HERO_H
#define BASE_HERO_H
#include "raylib.h"

class BaseHero
{
public:
    BaseHero();
    virtual Vector2 getScreenPos() = 0;
    Vector2 getWorldPos() { return worldPos; }
    virtual void tick(float deltaTime);
    bool getAlive() { return alive; }
    void setAlive(bool isAlive) { alive = isAlive; }
    Rectangle getCollisionRec();
    void undoMovement();
    
protected:
    Texture2D texture{LoadTexture("newcharacters/soldier_walk.png")};
    Texture2D idle{LoadTexture("newcharacters/soldier_walk.png")};
    Vector2 worldPos{};
    Vector2 worldPosLastFrame{};
    float rightLeft{1.f};
    float runningTime{};
    int frame{};
    const int maxFrames{4};
    const float updateTime{1.f/10.f};
    float scale{4.0f};
    float speed{8.0};
    float height {};
    float width{};
    Vector2 velocity{};

private:
    bool alive{true};

};
#endif