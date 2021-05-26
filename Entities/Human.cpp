#include "Human.h"
#include "../Actions/Move.h"
#include "../Utils/Utils.h"
#include "../Field.h"

Human::Human(const Position& position) : Humanoid(position)
{

}

void Human::display(const AbstractDisplay& displayer) const
{
   displayer.display(*this);
}

HumanoidType Human::getType() const
{
   return HumanoidType::HUMAN;
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

