#include "Hero.h"
#include "raymath.h"

Hero::Hero(int winWidth, int winHeight) :
windowWidth(winWidth),
windowHeight(winHeight)
{
    width = texture.width / maxFrames;
    height = texture.height;
}

Vector2 Hero::getScreenPos()
{
    return Vector2{
        static_cast<float>(windowWidth) / 2.0f - scale * (0.5f * width),
        static_cast<float>(windowHeight) / 2.0f - scale * (0.5f * height)
    };
}

void Hero::tick(float deltaTime)
{
    if (!getAlive()) return;

    if (IsKeyDown(KEY_A)) velocity.x += 1.0;
    if (IsKeyDown(KEY_D)) velocity.x -= 1.0;
    if (IsKeyDown(KEY_W)) velocity.y += 1.0;
    if (IsKeyDown(KEY_S)) velocity.y -= 1.0;
    
    BaseHero::tick(deltaTime);

    Vector2 origin{};
    Vector2 offset{};
    float rotation{};
    if (rightLeft > 0.f)
    {
         origin = {axe.width * scale, axe.height  * scale};
         offset = {40.f, 60.f};
         offset.x = 25.f;
         offset.y = 95.f;
         weaponCollisionRec = {
            getScreenPos().x + offset.x - axe.width * scale,
            getScreenPos().y + offset.y - axe.height * scale,
            axe.width * scale,
           axe.height * scale
        };
                                
         rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? 85.f : 70.f;
    }
    else
    {
        origin = {axe.width * scale, axe.height * scale};
        offset = {50.f, 100.f};
        offset.x = 50.f;
        offset.y = 70.f;
       weaponCollisionRec = {
            getScreenPos().x + offset.x - axe.width * scale,
            getScreenPos().y + offset.y - axe.height * scale,
            axe.width * scale,
           axe.height * scale
        };
                                
        rotation = IsMouseButtonDown(MOUSE_LEFT_BUTTON) ? -85.f : -60.f;
    }
   
    // draw the axe 

    Rectangle source1{0.f, 0.f, static_cast<float>(axe.width) * rightLeft, static_cast<float>(axe.height)};
    Rectangle dest1{getScreenPos().x + offset.x, getScreenPos().y + offset.y, axe.width * scale, axe.height * scale};
    DrawTexturePro(axe, source1, dest1, origin, rotation, WHITE);

    
}

void Hero::takeDamage(float damage)
{
    health -= damage;
    if (health <= 0.f)
    {
        setAlive(false);
    }
}
