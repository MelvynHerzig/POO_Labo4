#include "Event.h"

Event::Event (Event::Function event) : event(event)
{}

void Event::trigger (BuffyAndVampires &controller) const
{
   event(controller);
}
