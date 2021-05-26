#include "Field.h"

#include <algorithm> // find
#include <stdexcept>

#include "Entities/Human.h"
#include "Entities/Buffy.h"

using namespace std;

Field::Field(size_t size, size_t humansToCreate, size_t vampiresToCreate) : SIZE(size), turn(1)
{

    // Création des humanoïdes.
   createHumanoids<Buffy>(1);
   createHumanoids<Human>(humansToCreate);
   createHumanoids<Vampire>(vampiresToCreate);
}

Field::~Field()
{
    for (Humanoid* humanoid : humanoids)
    {
        delete humanoid;
    }
}

int Field::nextTurn()
{
    // Déterminer les prochaines actions
    for (auto & humanoid : humanoids)
        humanoid->setAction(*this);
    // Executer les actions
    for (auto & humanoid : humanoids)
        humanoid->executeAction(*this);
    // Enlever les humanoides tués
    for (auto it = humanoids.begin(); it != humanoids.end();)
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

std::size_t Field::getSize() const
{
    return SIZE;
}

bool Field::hasHumanoidAt(unsigned int x, unsigned int y) const
{
    // On recherche le premier humanoïde à la position x,y.
    for (Humanoid* humanoid : humanoids)
    {
        if (humanoid->isAt(x, y)) return true;
    }

    return false;
}

const Humanoid& Field::getHumanoidAt (unsigned int x, unsigned int y) const
{
    auto it = find_if(humanoids.begin(), humanoids.end(), [x, y](const Humanoid* humanoid)
    {
        return humanoid->isAt(x, y);
    });

    if (it == humanoids.end())
    {
        throw runtime_error("No humanoid at requested coordinates");
    }

    return **it;
}




