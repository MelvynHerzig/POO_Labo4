#include "Vampire.h"
#include "Human.h"
#include "../Field.h"
#include "../Actions/Move.h"
#include "../Actions/Stay.h"
#include "../Actions/Kill.h"
#include "../Actions/Bite.h"

Vampire::Vampire(const Position& position) : Humanoid(position)
{

}

void Vampire::display(const AbstractDisplay& displayer) const
{
   displayer.display(*this);
}

void Vampire::setAction(Field& f)
{
   const Human* target = f.getNearestKillable<const Human>(this->position);
   if (target == nullptr)
   {
      action = new Stay();
      return;
   }

   if (Position::getDistanceBetween(target->getPosition(), this->position) <= sqrt(2))
   {
      if (Utils::randomInteger(0, 2))
      {
         action = new Kill((IKillable & ) * target);
      } else
      {
         action = new Bite((Human & ) * target);
      }
   } else
   {
      action = new Move(*this, target->getPosition());
   }

}

void Vampire::kill()
{
   this->alive = false;
}
