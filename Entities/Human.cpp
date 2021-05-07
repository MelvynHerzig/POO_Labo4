#include "Human.h"
#include "../Actions/Move.h"

HumanoidType Human::getType() const
{
    return HumanoidType::HUMAN;
}

void Human::setAction(const Field& f)
{
    action = new Move(*this);
}

void Human::transformToVampire(Field& f)
{
    if(this->isAlive())
    {
        this->kill();
        //ajouter un vampire
    }

}
