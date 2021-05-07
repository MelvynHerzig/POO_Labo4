#include "AbstractDisplay.h"

#include <iostream> // cout

using namespace std;


void AbstractDisplay::display (const Field &field) const
{
   // Dessus
   displayTopBotBorder(field);

   // Bords gauche/droite et intérieur
   for (size_t row = 0; row < 10/* TODO field.getSize()*/; ++row)
   {
      // Bord gauche
      cout << LFT_RGT_BORDER;

      // Contenu
      /*TODO for (size_t col = 0; col < field.getWidth(); ++col)
      {
         if (field.hasHumanoidAt(// Passer une coordonnée))
         {
            display(field.getHumanoidAt(// Passer une coordonnée))
         }
         else
         {
            cout << EMPTY;
         }
      }*/

      // Bord droite
      cout << LFT_RGT_BORDER << endl;
   }

   // Bas
   displayTopBotBorder(field);
}

void AbstractDisplay::display(const std::string &message)
{
   cout << message;
}

// -*-*-*-*-*-*-*-*-*-*-*- PRIVATE -*-*-*-*-*-*-*-*-*-*-*-*-

void AbstractDisplay::displayTopBotBorder (const Field& field)
{
   cout << CORNER;

   // Remplissage entre les coins.
   for (size_t i = 0; i < 10/* TODO field.getSize()*/; ++i)
   {
      cout << TOP_BOT_BORDER;
   }

   cout << CORNER << endl;
}
