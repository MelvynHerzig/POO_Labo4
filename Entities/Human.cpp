#include "Human.h"
#include "../Actions/Move.h"

Human::Human (const Position &position) : Humanoid(position)
{

}

void Human::display (const AbstractDisplay &displayer) const
{
   displayer.display(*this);
}

HumanoidType Human::getType() const
{
    return HumanoidType::HUMAN;
}

//void Human::setAction(const Field& f)
//{
//    action = new Move(*this);
//}

void Human::transformToVampire(Field& f)
{
    if(this->isAlive())
    {
        this->kill();
        //ajouter un vampire
    }

}

void Human::kill ()
{

}

