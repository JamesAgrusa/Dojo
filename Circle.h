#ifndef CIRCLE_H
#define CIRCLE_H

#include "raylib.h"
#include "BaseCircle.h"

class Circle : public BaseCircle
{
    public:
    Circle(const int windowWidth, const int windowHeight);
    virtual void tick(float deltaTime);

    private:
    const int windowHeight{};
    const int windowWidth{};
};

#endif