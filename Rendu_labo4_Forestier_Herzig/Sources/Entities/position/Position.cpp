#include "Position.h"

#include <cmath> // hypot

using namespace std;

Position::Position (int x, int y) : x(x), y(y)
{}

int Position::getX () const
{
   return x;
}

int Position::getY () const
{
   return y;
}

double Position::getDistanceBetween(const Position& p1, const Position& p2)
{
   return hypot(p1.getX() - p2.getX(), p1.getY() - p2.getY());
}


