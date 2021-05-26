#include "Utils.h"

#include <ctime> // time

using namespace std;

bool Utils::init = true;

int Utils::randomInteger (int min, int max)
{
   if(init)
   {
      srand((unsigned)time(NULL));
      init = !init;
   }
   return ( rand() % (max-min+1) ) + min;
}

Position Utils::randomPosition(int size)
{
   return Position(randomInteger(0, size), randomInteger(0, size));
}
