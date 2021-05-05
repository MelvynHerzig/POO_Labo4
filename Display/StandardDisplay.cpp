#include "StandardDisplay.h"

#include<iostream> // cout

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
