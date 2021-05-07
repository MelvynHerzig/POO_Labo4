#include "Humanoid.h"

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
    this->position = newPosition;
}
