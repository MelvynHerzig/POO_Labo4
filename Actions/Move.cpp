#include "Move.h"

Move::Move(Humanoid& humanoid) : humanoidToMove(humanoid)
{}

void Move::createRandomMove()
{

}

void Move::createDirectedMove(IKillable& target)
{

}

void Move::execute(Field&)
{
    humanoidToMove.move(position);
}
