#include "AbstractDisplay.h"

#include "../Field.h"

#include <iostream> // cout

using namespace std;

void AbstractDisplay::display (const Field &field) const
{
   // Dessus
   displayTopBotBorder(field);

   // Bords gauche/droite et intérieur
   for (size_t row = 0; row < field.getSize(); ++row)
   {
      // Bord gauche
      cout << LFT_RGT_BORDER;

      // Contenu
      for (size_t col = 0; col < field.getSize(); ++col)
      {
         if (field.hasHumanoidAt(row, col))
         {
            field.getHumanoidAt(row, col).display(*this);
         }
         else
         {
            cout << EMPTY;
         }
      }

      // Bord droite
      cout << LFT_RGT_BORDER << endl;
   }

   // Bas
   displayTopBotBorder(field);
}

void AbstractDisplay::display(const std::string &message) const
{
   cout << message;
}

// -*-*-*-*-*-*-*-*-*-*-*- PRIVATE -*-*-*-*-*-*-*-*-*-*-*-*-

void AbstractDisplay::displayTopBotBorder (const Field& field)
{
   cout << CORNER;

   // Remplissage entre les coins.
   for (size_t i = 0; i < field.getSize(); ++i)
   {
      cout << TOP_BOT_BORDER;
   }

   cout << CORNER << endl;
}
