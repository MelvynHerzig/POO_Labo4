//
// Created by melvy on 09/05/2021.
//

#include "Position.h"

Position::Position (unsigned x, unsigned y) : x(x), y(y)
{

}

unsigned Position::getX () const
{
   return x;
}

unsigned Position::getY () const
{
   return y;
}


