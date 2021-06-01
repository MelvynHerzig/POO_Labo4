#include "StandardDisplay.h"

#include <iostream> // cout
#include <iomanip>  // setprecision, fixed, left, setw

using namespace std;

void StandardDisplay::display (const Vampire &vampire) const
{
   cout << VAMPIRE;
}

void StandardDisplay::display (const Human &human) const
{
   cout << HUMAN;
}

void StandardDisplay::display (const Buffy &buffy) const
{
   cout << BUFFY;
}

void StandardDisplay::clear () const
{
   // Ne fait rien, les spécialisations Windows et Linux s'en chargeront.
}

void StandardDisplay::displayStatistics (double stats, unsigned nbIteration, unsigned nbIterationMax) const
{
   cout << "\rBuffy's win rate: "<< left << setw(6) << setprecision(2) << fixed << stats*100 << "%. "
        << "(" << nbIteration << "/" << nbIterationMax << ")";
}
