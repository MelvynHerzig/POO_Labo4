#ifndef POO_LABO4_GENERICFIELD_H
#define POO_LABO4_GENERICFIELD_H

#include "Utils/Utils.h"
#include "Entities/position/Position.h"

template<typename humaoidClass>
void Field::createHumanoid (std::size_t amout)
{
   for(std::size_t i = 0; i < amout; ++i)
   {
      humanoids.emplace_back(new humaoidClass(Position{Utils::randint(0, SIZE),
                                                       Utils::randint(0, SIZE)}));
   }
}

#endif //POO_LABO4_GENERICFIELD_H
