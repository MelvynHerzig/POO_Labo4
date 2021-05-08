#include "Event.h"

Event::Event (Event::Func event) : event(event)
{}

void Event::trigger (BuffyAndVampires &controller) const
{
   event(controller);
}
