#include "Buffy.h"
#include "Vampire.h"
#include "../Actions/Move.h"
#include "../Actions/Stay.h"
#include "../Utils/Utils.h"
#include "../Actions/Kill.h"
#include "../Field.h"

Buffy::Buffy(const Position& position) : Humanoid(position)
{

}

void Buffy::display(const AbstractDisplay& displayer) const
{
   displayer.display(*this);
}

HumanoidType Buffy::getType() const
{
   return HumanoidType::BUFFY;
}

void Buffy::setAction(Field& f)
{
   const Vampire* target = f.getNearestKillable<const Vampire>(this->position);
   if (target == nullptr)
   {
      if (direction.getX() == position.getX() && direction.getY() == position.getY())
      {
         direction = Utils::randomPosition(f.getSize());
      }
      action = new Move(*this, direction);
      return;
   }

   // Recupe humain plus proche
   if (Position::getDistanceBetween(target->getPosition(), this->position) <= this->moveDistance())
   {
      action = new Kill((IKillable&) *target);
   } else
   {
      action = new Move(*this, target->getPosition());
   }
}

size_t Buffy::moveDistance() const
{
   return 2;
}
