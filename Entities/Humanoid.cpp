#include "Humanoid.h"

Humanoid::Humanoid(const Position& position) : alive(true), position(position), action(nullptr), direction(position)
{}

Humanoid::~Humanoid()
{
   delete action;
}

void Humanoid::executeAction(Field& f)
{
   if (action != nullptr)
   {
      action->execute(f);
   }
}

bool Humanoid::isAlive() const
{
   return alive;
}

void Humanoid::move(Position& newPosition)
{
   position = newPosition;
}

bool Humanoid::isAt(unsigned int x, unsigned int y) const
{
   return position.getX() == x && position.getY() == y;
}

Position Humanoid::getPosition() const
{
   return position;
}

size_t Humanoid::moveDistance() const
{
   return 1;
}






