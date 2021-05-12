#include "Field.h"

#include <algorithm> // find
#include <stdexcept>

#include "Entities/Humanoid.h"
#include "Entities/Human.h"
#include "Entities/Vampire.h"
#include "Entities/Buffy.h"

using namespace std;

Field::Field (size_t size, size_t humansToCreate, size_t vampiresToCreate) : turn(0), SIZE(size)
{

   // Création des humanoïdes.
   createHumanoid<Buffy>(1);
   createHumanoid<Human>(humansToCreate);
   createHumanoid<Vampire>(vampiresToCreate);
}

Field::~Field ()
{
   for (Humanoid* humanoid : humanoids)
   {
      delete humanoid;
   }
}

int Field::nextTurn()
{
    // Déterminer les prochaines actions
    for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end(); it++)
        // TODO (*it)->setAction(*this);
    // Executer les actions
    for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end(); it++)
        (*it)->executeAction(*this);
    // Enlever les humanoides tués
    for (list<Humanoid*>::iterator it = humanoids.begin(); it != humanoids.end();)
    {
        if (!(*it)->isAlive())
        {
            Humanoid* toDelete = *it;
            it = humanoids.erase(it); // suppression de l’élément dans la liste
            delete toDelete; // destruction de l’humanoide référencé
        } else
        {
            ++it;
        }
    }
    return turn++;
}

std::size_t Field::getSize () const
{
   return SIZE;
}

bool Field::hasHumanoidAt (unsigned int x, unsigned int y) const
{
   // On recherche le premier humanoïde à la position x,y.
   for(Humanoid* humanoid : humanoids)
   {
      if(humanoid->isAt(x,y)) return true;
   }

   return false;
}

const Humanoid& Field::getHumanoidAt (unsigned int x, unsigned int y) const
{
   auto it = find_if(humanoids.begin(), humanoids.end(), [x,y](const Humanoid* humanoid)
   {
      return humanoid->isAt(x,y);
   });

   if(it == humanoids.end())
   {
      throw runtime_error("Nu humanoid at position required");
   }

   return **it;
}


