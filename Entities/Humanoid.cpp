#include "Humanoid.h"

Humanoid::Humanoid (const Position &position) : alive(true), position(position), /* TODO enlver, placeholder code */ action(nullptr)
{}

void Humanoid::executeAction(Field& f)
{
    action->execute(f);
}

bool Humanoid::isAlive() const
{
    return alive;
}

void Humanoid::move(Position& newPosition)
{
    position = newPosition;
}

bool Humanoid::isAt (unsigned int x, unsigned int y) const
{
   return position.getX() == x && position.getY() == y;
}


