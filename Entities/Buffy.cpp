#include "Buffy.h"

Buffy::Buffy (const Position &position) : Humanoid(position)
{

}

void Buffy::display (const AbstractDisplay &displayer) const
{
   displayer.display(*this);
}

HumanoidType Buffy::getType() const
{
    return HumanoidType::BUFFY;
}

//void Buffy::setAction (const Field &f)
//{
//
//}
