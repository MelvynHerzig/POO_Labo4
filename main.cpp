#include <iostream>

#ifdef __linux__
  #include "Display/LinuxDisplay.h"       // Affichage si OS linux
#elif __WIN32
  #include "Display/WindowsDisplay.h"     // Affichage si OS Windows
#else
  #include "Display/StandardDisplay.h"    // Affichage si OS Autre
#endif

int main ()
{
   #ifdef __linux__
      LinuxDisplay displayer;
   #elif __WIN32
      WindowsDisplay displayer;
   #else
      StandardDisplay displayer;
   #endif

   // TODO On va faire de grandes choses depuis ce point -> .
   return 0;
}
