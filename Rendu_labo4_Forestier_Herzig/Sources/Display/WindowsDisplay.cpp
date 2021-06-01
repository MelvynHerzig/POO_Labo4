#include "WindowsDisplay.h"

#include<iostream> // cout

// Sans cette directive, ne compile pas sous linux
#ifdef __WIN32

using namespace std;

// -*-*-*-*-*-*-*-*-*-*-*- PRIVATE -*-*-*-*-*-*-*-*-*-*-*-*-

void WindowsDisplay::changeColor (WORD color)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

WORD WindowsDisplay::getColor ()
{
   // Récupération des informations.
   CONSOLE_SCREEN_BUFFER_INFO info;
   GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);

   return info.wAttributes;
}

// -*-*-*-*-*-*-*-*-*-*-*- PUBLIC -*-*-*-*-*-*-*-*-*-*-*-*-

void WindowsDisplay::display (const Vampire& vampire) const
{
   // Sauvegarde de la couleur.
   WORD savedColor = getColor();

   // Changement de la couleur.
   changeColor(VAMPIRE_COLOR);

   StandardDisplay::display(vampire);

   // Application de la sauvegarde
   changeColor(savedColor);
}

void WindowsDisplay::display (const Human& human) const
{
   // Sauvegarde de la couleur.
   WORD savedColor = getColor();

   // Changement de la couleur.
   changeColor(HUMAN_COLOR);

   StandardDisplay::display(human);

   // Application de la sauvegarde
   changeColor(savedColor);
}

void WindowsDisplay::display (const Buffy& buffy) const
{
   // Sauvegarde de la couleur.
   WORD savedColor = getColor();

   // Changement de la couleur.
   changeColor(BUFFY_COLOR);

   StandardDisplay::display(buffy);

   // Application de la sauvegarde
   changeColor(savedColor);
}

void WindowsDisplay::clear () const
{
   system("cls");
}

#endif // __WIN32