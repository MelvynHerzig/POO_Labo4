#include "Buffy.h"
#include "Vampire.h"
#include "../Actions/Move.h"
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

void Buffy::setAction(Field& f)
{
   const Vampire* target = f.getNearestKillable<const Vampire>(this->position);
   if (target == nullptr)
   {
      Humanoid::setAction(f);
      return;
   }

   if (Position::getDistanceBetween(target->getPosition(), this->position) <= sqrt(2))
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
