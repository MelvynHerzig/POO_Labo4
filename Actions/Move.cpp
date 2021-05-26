#include "Move.h"

using namespace std;

Move::Move(Humanoid& humanoid, const Position& direction) : humanoidToMove(humanoid), direction(direction)
{

}

void Move::execute(Field&)
{
   Position currentPos = humanoidToMove.getPosition();

   for(int i = 0; i < humanoidToMove.moveDistance(); ++i)
   {
      double minDistance = Position::getDistanceBetween(currentPos, direction);

      Position tmpPos = currentPos;

      // Pour les 8 cases autour de buffy
      for(int x = -1; x < 2; ++x)
      {
         for(int y = -1; y < 2; ++y)
         {
            double tmpDistance = Position::getDistanceBetween(Position(currentPos.getX()+x,currentPos.getY()+y), direction);

            if(tmpDistance < minDistance)
            {
               minDistance = tmpDistance;
               tmpPos = Position(currentPos.getX()+x,  currentPos.getY()+y);
            }
         }
      }

      currentPos = tmpPos;
   }

   direction = currentPos;

   humanoidToMove.move(direction);
}

