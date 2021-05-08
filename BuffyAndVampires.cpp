#include "BuffyAndVampires.h"

#include <iostream> // cout

using namespace std;

BuffyAndVampires::BuffyAndVampires (const AbstractDisplay &display,
                                    size_t size,
                                    size_t humansToCreate,
                                    size_t vampiresToCreate) :
        display(display),
        SIZE(size),
        HUMANS_TO_CREATE(humansToCreate),
        VAMPIRES_TO_CREATE(vampiresToCreate)
{}

void BuffyAndVampires::nextTurn ()
{
   cout << "next turn" << endl;
}

void BuffyAndVampires::statistics ()
{
   cout << "stats" << endl;
}

void BuffyAndVampires::quit ()
{
   cout << "quit" << endl;
}

