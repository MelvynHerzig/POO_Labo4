#include "Utils.h"

using namespace std;

random_device Utils::generator;

unsigned Utils::randint (unsigned min, unsigned max)
{
   return generator() % (max - min) + min;
}
