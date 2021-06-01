#include "Kill.h"

Kill::Kill(IKillable& target) : target(target)
{}

void Kill::execute(Field& f)
{
    target.kill();
}
