#include "KeyListener.h"

#include <limits>   // numeric_limits
#include <iostream> // cin, cout

#include "../BuffyAndVampires.h"

using namespace std;

Event KeyListener::getNextInput (size_t currentTurn)
{
   bool isInputUnknown;

   // Lit une entrée de l'utilisateur.
   do
   {
      // Affichage des instructions possibles
      cout << "q)uit s>tatistics n>ext: ";

      // Récupération de l'entrée.
      char input;
      cin >> input;

      // Vide le buffer d'entrée pour éviter les traitements en chaîne.
      cin.ignore(numeric_limits<streamsize>::max(), '\n');


      //Traitement de 'entrée
      switch ((char) tolower(input))
      {
         case QUIT:
            return Event([](BuffyAndVampires& controller){
               controller.quit();
            });

         case STATISTICS:
            return Event([](BuffyAndVampires& controller){
               controller.statistics();
            });

         case NEXT:
            return Event([](BuffyAndVampires& controller){
               controller.nextTurn();
            });

         default:
            // on recommence la demande.
            break;
      }
   }
   while(true); // Tant que l'entrée n'est pas valide.
}
