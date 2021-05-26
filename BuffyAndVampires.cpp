#include "BuffyAndVampires.h"
#include "Entities/Vampire.h"
#include "Entities/Human.h"
#include <iostream> // cout

using namespace std;

BuffyAndVampires::BuffyAndVampires(const AbstractDisplay& display,
                                   size_t size,
                                   size_t humansToCreate,
                                   size_t vampiresToCreate) :
        display(display),
        SIZE(size),
        HUMANS_TO_CREATE(humansToCreate),
        VAMPIRES_TO_CREATE(vampiresToCreate),
        field(size, humansToCreate, vampiresToCreate),
        exit(false)
{

}

void BuffyAndVampires::run()
{
   noTurn = 1;
   printState();
   while (!exit)
   {

      listener.getNextInput(noTurn).trigger(*this);

   }
}

void BuffyAndVampires::nextTurn()
{
   noTurn = field.nextTurn();
   display.clear();
   printState();
}

void BuffyAndVampires::statistics()
{
   unsigned nbWin = 0;
   unsigned nbLose = 0;

   Position position(0, 0);
   for (size_t i = 0; i < NB_SIMULATIONS; ++i)
   {
      Field simulation(SIZE, HUMANS_TO_CREATE, VAMPIRES_TO_CREATE);

      const Vampire* vampireRemaining;
      const Human* humanRemaining;

      while ((vampireRemaining = simulation.getNearestKillable<const Vampire>(position)) != nullptr
             && (humanRemaining = simulation.getNearestKillable<const Human>(position)) != nullptr)
      {
         simulation.nextTurn();
      }

      humanRemaining == nullptr ? ++nbLose : ++nbWin;

      display.displayStatistics((double)nbWin / (nbWin+nbLose), i+1, NB_SIMULATIONS);
   }
   cout << endl;
}

void BuffyAndVampires::quit()
{
   exit = true;
}

void BuffyAndVampires::printState()
{
   display.display(field);
}



