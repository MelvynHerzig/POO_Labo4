#include "Move.h"



Move::Move(Humanoid& humanoid) : humanoidToMove(humanoid), /* TODO enlever, c'est pour compiler */ position(1,1)
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
