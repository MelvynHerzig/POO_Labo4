#include "Bite.h"

Bite::Bite(Human& human) : human(human)
{}

void Bite::execute(Field& f)
{
    human.transformToVampire(f);
}
