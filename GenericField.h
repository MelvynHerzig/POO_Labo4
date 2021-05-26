#ifndef POO_LABO4_GENERICFIELD_H
#define POO_LABO4_GENERICFIELD_H

#include <limits>

#include "Utils/Utils.h"
#include "Entities/Humanoid.h"

template <typename humanoidClass>
const humanoidClass* Field::getNearestKillable(const Position& position) const
{
   const humanoidClass* nearestHumanoid = nullptr;
   double nearestDistance = std::numeric_limits<double>::max();

   // Pour chaque humanoïdes du tableau
   for (const Humanoid* h : humanoids)
   {
      // Si l'humanoïde n'a pas le bon type, on continue la recherche.
      if (!dynamic_cast<const humanoidClass*>(h))
      { continue; }

      // Si la distance est plus courte que la plus courte trouvé jusqu'à présent
      double distance = Position::getDistanceBetween(h->getPosition(), position);
      if (distance < nearestDistance)
      {
         nearestHumanoid = dynamic_cast<const humanoidClass*>(h);
         nearestDistance = distance;
      }
   }

   return nearestHumanoid;
}

template <typename humanoidClass>
void Field::createHumanoid(const Position& position)
{
   humanoids.emplace_back(new humanoidClass(position));
}


template <typename humanoidClass>
void Field::createHumanoids(std::size_t amount)
{
   for (std::size_t i = 0; i < amount; ++i)
   {
      createHumanoid<humanoidClass>(Position{Utils::randomInteger(0, (int) size),
                                             Utils::randomInteger(0, (int) size)});
   }
}


#endif //POO_LABO4_GENERICFIELD_H
