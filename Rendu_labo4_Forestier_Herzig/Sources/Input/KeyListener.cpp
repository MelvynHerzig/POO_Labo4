#include "KeyListener.h"

#include <limits>   // numeric_limits
#include <iostream> // cin, cout

#include "../BuffyAndVampires.h"

using namespace std;

Event KeyListener::getNextInput (size_t currentTurn)
{
   // Lit une entrée de l'utilisateur.
   do
   {
      // Affichage des instructions possibles
      cout << '[' << currentTurn << ']' << "q)uit s)tatistics n)ext: ";

      // Avec cette méthode on peut considérer un return comme une entrée.
      string line;
      getline( cin, line );

      char input = (line.empty() ? NEXT : line[0] );

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
