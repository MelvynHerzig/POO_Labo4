#include "LinuxDisplay.h"

#include <iostream> // cout
#include <string>   // string

using namespace std;

const string LinuxDisplay::BUFFY_COLOR   = "\033[1m\033[33m";
const string LinuxDisplay::HUMAN_COLOR   = "\033[35m"       ;
const string LinuxDisplay::VAMPIRE_COLOR = "\033[1m\033[34m";

void LinuxDisplay::unsetStyle ()
{
   cout << "\033[0m";
}

void LinuxDisplay::display (const Vampire &vampire) const
{
   cout << VAMPIRE_COLOR;
   StandardDisplay::display(vampire);
   unsetStyle();
}

void LinuxDisplay::display (const Human &human) const
{
   cout << HUMAN_COLOR;
   StandardDisplay::display(human);
   unsetStyle();
}

void LinuxDisplay::display (const Buffy &buffy) const
{
   cout << BUFFY_COLOR;
   StandardDisplay::display(buffy);
   unsetStyle();
}

void LinuxDisplay::clear () const
{
   cout << "\033[J";
}

