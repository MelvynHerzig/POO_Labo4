#ifndef POO_LABO4_KEYLISTENER_H
#define POO_LABO4_KEYLISTENER_H

#include "Event.h"

/**
 * @brief Classe chargée de récupérer les entrées de l'utilisateur et les convertit
 * en action exécutable par BuffyAndVampires.
 * @date 08/05/2021
 * @authors Forestier Quentin & Herzig Melvyn
 * @compiler MinGW-g++ 6.3.0
 */
class KeyListener
{
private:

   /**
    * @brief Caractère pour terminer l'exécution de l'application.
    */
   static const char QUIT = 'q';

   /**
    * @brief Caractère pour exécuter un nouveau tour de simultation.
    */
   static const char NEXT = 'n';

   /**
    * @brief Caractère pour lancer 10'000 simultation et afficher les % de réussite.
    */
   static const char STATISTICS = 's';

public:

   /**
    * @brief récupère une entrée utilisateur depuis le terminal et génère l'event
    *        correspondant.
    * @param currentTurn Numéro du tour en cour.
    * @return Retourne l'événement correspondant à l'action de l'utilisateur.
    */
   Event getNextInput(size_t currentTurn);
};

#endif //POO_LABO4_KEYLISTENER_H
