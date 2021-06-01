#include "Human.h"
#include "../Field.h"

Human::Human(const Position& position) : Humanoid(position)
{

}

void Human::display(const AbstractDisplay& displayer) const
{
   displayer.display(*this);
}

void Human::transformToVampire(Field& f)
{
   if (this->isAlive())
   {
      this->kill();
      f.createHumanoid<Vampire>(this->position);
   }

}

void Human::kill()
{
   this->alive = false;
}

