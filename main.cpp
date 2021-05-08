#include <cstdlib>  // EXIT_SUCCESS, EXIT_FAILURE.
#include <iostream> // cout

#ifdef __linux__
  #include "Display/LinuxDisplay.h"       // Affichage si OS linux
#elif __WIN32
  #include "Display/WindowsDisplay.h"     // Affichage si OS Windows
#include "BuffyAndVampires.h"

#else
  #include "Display/StandardDisplay.h"    // Affichage si OS Autre
#endif

using namespace std;

/**
 * @brief Vérifie la validité des arguments.
 * @param size Taille de la carte [10-80].
 * @param nbHumans Quantité d'humains (>0).
 * @param nbVampires Quantité de vampires (>0).
 * @return Retourne vrai en cas de réussite sinon faux.
 * @details La fonction affiche les détails qu'elle trouve incorrects.
 */
bool checkArgumentsValidity(unsigned size, unsigned nbHumans, unsigned nbVampires)
{
   // Vérification de la taille de la carte.
   if(size < 10 || size > 80)
   {
      cout << "Field size must be between 10 and 80 (inclusive)." << endl;
      return false;
   }

   // Vérification du nombre d'humains.
   if(nbHumans < 1)
   {
      cout << "There must be at least one human." << endl;
      return false;
   }

   // Vérification du nombre de vampires.
   if(nbVampires < 1)
   {
      cout << "There must be at least one vampire." << endl;
      return false;
   }

   return true;
}


/**
 * @brief Point d'entrée du programme, récupère les arguments et lance l'exécution
 *        de Buffy contre les vampires.
 * @param argc Nombre d'arguments.
 * @param argv Valeur des arguments
 * @return EXIT_SUCCESS en cas de bon déroulement sinon EXIT_FAILURE.
 */
int main (int argc, char* argv[])
{
   // Récupération des arguments.
   if(argc != 4) // Pas le bon nombre d'arguments
   {
      cout << "Buffyand the vapires need 3 args: <map size> <nb humans> <nb vampires>" << endl;
      return EXIT_FAILURE;
   }

   // Traitement des arguments
   unsigned size, nbHumans, nbVampires;
   size = strtoul(argv[1], nullptr, 0);
   nbHumans = strtoul(argv[2], nullptr, 0);
   nbVampires = strtoul(argv[3], nullptr, 0);

   if(!checkArgumentsValidity(size, nbHumans, nbVampires))
   {
      return EXIT_FAILURE;
   }


   // Choix du displayer en fonction de l'os.
   #ifdef __linux__
      LinuxDisplay display;
   #elif __WIN32
      WindowsDisplay display;
   #else
      StandardDisplay display;
   #endif



   // Création du contrôleur
   BuffyAndVampires buffyAndVampires{display, size, nbHumans, nbVampires};

   return EXIT_SUCCESS;
}
