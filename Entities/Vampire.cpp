#include "Vampire.h"

Vampire::Vampire (const Position &position) : Humanoid(position)
{

}

void Vampire::display (const AbstractDisplay &displayer) const
{
   displayer.display(*this);
}

HumanoidType Vampire::getType() const
{
    return HumanoidType::VAMPIRE;
}

//void Vampire::setAction(const Field& f)
//{
//
//}

void Vampire::kill ()
{

}
